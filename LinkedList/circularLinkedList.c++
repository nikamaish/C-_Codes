
/* In circular linked list there is no need to access head, instead of that we can use tail and through that we
can access first node and last node 
*/

#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d; ////i.e current object data
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertNode(Node* &tail, int element, int d) {
    

    //empty list
    if(tail == NULL) {
        Node* newNode = new Node(d); /// here node is created
        tail = newNode; /// here we set that node as tail
        newNode -> next = newNode; // bcz it is circular
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element) {   /// to match that particular key
            curr = curr -> next;
        }
        
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}    

void print(Node* tail) {

    Node* temp = tail; 
    /// here address of tail is stored 

    //empty list
    if(tail == NULL) {    /// this condition if for single node so that it can traverse
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp); // firun punha temp vr ala tr stop honar    
    /// this condition is for single node so that it can traverse

/*In a circular linked list, the last node's "next" pointer points back to the first node, creating a loop. This means that the loop should always iterate at least once, even if there's only one node in the list. Using a do-while loop guarantees that the loop body will execute at least once before checking the termination condition (tail != temp), which ensures that the single node is printed in the case of a list with only one node.
Let's break down how the do-while loop works in this context:
The loop begins by executing the code inside the do block, which prints the data of the current tail node.
Then, the tail pointer is moved to the next node using tail = tail -> next.
The loop condition (tail != temp) is checked. If the loop condition is false, meaning tail has reached the original tail node again, the loop exits. If the loop condition is still true, the loop continues to execute.
The loop continues to iterate as long as tail does not become equal to temp, which is the original tail node. This ensures that all nodes in the circular list are printed exactly once.
In summary, the do-while loop is used to traverse a circular linked list and print its nodes. It ensures that the loop body executes at least once to handle the case of a list with a single node, and then it continues iterating until the loop reaches the starting point again.
*/

    cout << endl;
} 

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {  
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;
//If the loop completes without finding temp equal to head, it means the list is not circular, and the function returns false.
}

bool detectLoop(Node* head) {

    if(head == NULL)
        return false;
        
    map<Node*, bool> visited;

    Node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}


int main() {

    Node* tail = NULL; /// // it means list is empty 

   // insertNode(tail, 5, 3);
    //print(tail);

  //  insertNode(tail, 3, 5);
   // print(tail);

/*
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 9);
    print(tail);
    insertNode(tail, 5, 6);
    print(tail);
    
    insertNode(tail, 9, 10);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);
   
    deleteNode(tail, 5);
    print(tail);
     */

    if(isCircularList(tail)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }

    return 0;
}