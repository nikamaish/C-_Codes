
/* it is a data structure which is made by using collection of nodes and
 node is collection of data and address of next node

if we want increase the size of array at runtime then we use vector but vector creates new array then restored
all elements, so there is memory wastage
instead of this we can use linked list
linked list is a dynamic data structure (grow/shrink) at runtime, no memory wastage
insertion and deletion in linkedlist is easy, as no shift is needed, no need of continous storages
*/

#include <iostream>
using namespace std;

class Node
{
public:
    int data; // data which is hold by node
    Node *next; // This is a pointer to another Node object. It's used to create a linkage between nodes in the linked list.

    ////// here we call constructor

    Node(int data)
    {

        /// here we created next node and in that there will be data and at address there will be null
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {

        /// this is destructor and here memory gets free

        int value = this->data;
        // this refers to current object

        if (this->next!= NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int data)
{

    /// here we use reference bcz we dont want to make copy, and to  make changes in copy so instead of this
    /// use reference so that if we do any changes then it will take change in original

    //// new node create
    Node *temp = new Node(data); // here is the temp node that we want to insert

    temp->next = head;
    /// here next is null point and it is replaced by head of another node

    head = temp;
    /// here set temp as head bcz temp's head will be main head not of original nodes
}

//// it adds the node at the ending node, tail is pointer of node type, it shows last node of list

void insertAtTail(Node *&tail, int data)
{

    //// there is single node, at the end of node we have to insert another node
    //// to insert that node we have to change next pointer of previous node to temp

    Node *temp = new Node(data); //// here node is created
    tail->next = temp;

    tail = temp;
    /// i.e tail= tail=>next; // 1st tail is of 1st node and another tail->next is of 2nd node which ic we want to insert 
}

void insertAtPosition(Node *&tail, Node *&head, int position, int data)
{

     Node *temp = head; 
    /// at starting position
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    // Node *temp = head; 
    int cnt = 1;       /// 1 bcz we are at starting of node i.e at head

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }


    //// at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }


    Node *nthnode = new Node(data); //// here another node is created, which we have to insert

    nthnode->next = temp->next;
    temp->next = nthnode;
}

void print(Node *&head) /// it is just like traversing the elements
{
    Node *temp = head;
    //// here we created another pointer as we dont want to make changes in original pointer i.e next

    while (temp != NULL)
    {
        cout << temp->data << " "; /// print data
        temp = temp->next;         /// this is to move temp one by one
    }
    cout << endl;
}

void deleteNode(int position, Node *&head, Node *&tail)
{

    /// deleting first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;

        /// memory free start node
        temp->next=NULL;     
        
         /// ithe apn he ka lihil ahe bcz curr node ahe tya cha next pointer ha stiil pudh chya node
         /// la point krt ahe  
                            
        delete temp;
    }
    else
    {
        /// deleting any middle  node  or last node

        Node* curr= head;
        Node* prev= NULL;

        int cnt=1;

        while (cnt<position)
        {
            prev=curr; /// bcz we have to put curr and perv at the same node
            curr=curr->next; /// to push curr to next node 
            cnt++;
        }
          
        prev-> next= curr-> next;   /// this is the main step where we cut that node
        curr->next=NULL;
        
        ///pointing tail to the last element
        if(curr->next == NULL){
            tail=prev;
        }

        delete curr;
       }
}

int main()
{

    Node *node1 = new Node(10); /// here we created node1 object and it is dynamic and above constructor will call

    // cout << node1->data << endl;
    // cout << node1->next << endl;

    
    Node *head = node1; /// head pointed to node1
    Node *tail = node1; // tail pointer
    // tail pointed to node1, basically in single node tail and head pointed to same node

    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    insertAtTail(tail, 35);
    print(head);

    insertAtTail(tail, 90);
    print(head);

    insertAtPosition(tail, head, 4, 40);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;


    deleteNode(3,head,tail);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    return 0;
}
