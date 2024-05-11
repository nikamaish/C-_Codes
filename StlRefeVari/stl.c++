// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

// // vector is dynamic array  it means it's size can be change at runtime
//// begin, end, empty, back it's complexity is O(1) and for 

// vector<int >v;
// cout<<"size is "<<v.capacity()<<endl;

// // vector has capacity, it means how much elements it can holds

// v.push_back(1); // we insert element in capacity
// v.push_back(5);

// cout<<"size is"<<v.capacity()<<endl;

// cout<<"Front"<<v.front()<<endl; // front gives 1st element
// cout<<"back"<<v.back()<<endl; // back gives last element

// cout<<"before pop"<<endl;
// for ( int i:v)
// {
//     cout<<i<<" ";
// }
// cout<<endl;

// v.pop_back(); // last element will pop

// cout<<"After pop"<<endl;
// for ( int i:v)
// {
//     cout<<i<<" ";
// }
// cout<<endl;

// v.push_back(2); // so at a time you can only push one element

// //// when we want to clear array then we use clear fucntion and it clear size of array not capacity
// ///// cpaacity menas how much memory is given and size means how many elements are there

// cout<<"before clear size"<<v.size()<<endl;
// v.clear();
// cout<<"before clear size"<<v.size()<<endl;

// vector <int>a(5,1);
// // here 5 is the size of vector and 1 is the 1st element if

// vector<int>last(a); //here we created another vector to store previous vector

// cout<<"print last "<<endl;

// for ( int i:last)
// {
//   cout<<i<<" ";
// }
// cout<<endl;

// return 0;
// }

/////////////////////////////////////////// Deque /////////////////////////////////
///// It is double ended queue, it this deque you can perform any operation from both side of queue

// #include <iostream>
// #include <deque>
// using namespace std;

// int main()
// {

//   deque<int> d;
//   d.push_back(1);
//   d.push_front(2);
//   d.push_front(3);
  
//   for (int i : d)
//   {
//     cout << i << " ";
//   }
//   cout << endl;

//   cout << "Hello" << endl;

//   // d.pop_back();

//   // for (int i : d)
//   // {
//   //   cout << i << " ";
//   // }

//   cout << "print first index element " << d.at(1) << endl;

//   cout << "front " << d.front() << endl;
//   cout << "back " << d.back() << endl;

//   cout << "Empty or not " << d.empty() << endl;


//   cout<<"before erase "<<d.size()<<endl;

//   d.erase(d.begin(),d.begin()+2); 
//   //  erase is different than clear, if you are doing erase then u have to mention the position


//   cout<<"after erase "<<d.size()<<endl;  

//   for(int i:d){
//     cout<<i<<" ";
//   }

//   return 0;
// }


////////////////////////////////// List ///////////////////////////////////////////


// #include<iostream>
// #include<list>
// using namespace std;

// int main(){

// list<int> L;
// list<int> copy(L);


// L.push_back(1);
// L.push_front(2);
// L.push_front(3);
// L.push_front(4);


// for(int i :L){
//   cout<<i<<" ";
// }
// cout<<endl;

// L.erase(L.begin());

// cout<<"after erase"<<endl;

// for(int i :L){
//   cout<<i<<" ";
// }
// cout<<endl;

// cout<<"size of list "<<L.size()<<endl;

// return 0;
// }



///////////////////////////////////////// Stack ///////////////////////////////////////
//// stack follows lifo and queue follows fifo

// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){

// stack<int>s;

// s.push(100);
// s.push(90);
// s.push(80);

// cout<<"Top element "<<s.top()<<endl;

// s.pop();

// cout<<"size of stack "<<s.top()<<endl;

// cout<<"size of stack "<<s.size()<<endl;

// cout<<"Empty or not "<<s.empty()<<endl;


// return 0;
// }


///////////////////////////// Queue ///////////////////////////
//// stack follows lifo and queue follows fifo


// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){

// queue<int>q;

// q.push(200);
// q.push(300);
// q.push(400);


// cout<<"first element "<<q.front()<<endl;
// q.pop();

// cout<<"first element"<<q.front()<<endl;


// return 0;
// }


//////////////////////////////////////// Priority Queue ///////////////////////////////////////


// #include<iostream>
// using namespace std;

// int main(){

// return 0;
// }




///////////////////////// Set //////////////////////////////
//// Sets are a type of associative container in which each element has to be unique because 
//// the value of the element identifies it. The values are stored in a specific sorted order 
//// i.e. either ascending or descending
//// it is based on binary search tree

//// Time complexity: O(N) // N is the size of the set.
//// Auxiliary Space: O(N)

//// The time complexities for doing various operations on sets are:

//// Insertion of Elements – O(log N)
//// Deletion of Elements – O(log N)

/// If you have already inclued an element, you cannot modify afterwards, either you place it or delete it
/// there is no modification, the elements are returned in sorted order
/// there is difference between set and unordered set and when we implement unordered set, the answer comes
/// in random order, not in sorted order 
/// insert,find,erase and count complexity of all functions are O(logn)
/// begin, size, end, empty complexity O(1)



// #include<iostream>
// #include<set>
// using namespace std;


// int main(){

// set<int >s;

// s.insert(5);
// s.insert(1);
// s.insert(5);
// s.insert(0);
// s.insert(15);
// s.insert(0);
// s.insert(0);


// for(int i:s){
//   cout<<i<<" ";
// }

// cout<<endl;

// s.erase(s.begin() );
// //// you  can erase any index number by using iterator but i dont understand that concept hence I skip

// for(int i:s){
//   cout<<i<<" ";
// }
// cout<<endl;

// cout<<s.count(15)<<endl;
// //// it shows if given element is present or not

// cout<<s.count(-5)<<endl;

// return 0;
// }


////////////////////////////////////////////// MAP //////////////////////////////////////////

/////Iterators are used to point at the memory addresses of STL containers. They are primarily 
/////used in sequences of numbers, characters etc. They reduce the complexity and execution time of the program.


#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main(){
//// all keys are unique and one key will point to only one value


map<int,string> app;

app[100]="zebra";
app[12]="monkey";
app[66]="tiger";

for(auto i:app){
  cout<<i.first<<" "<<i.second<<endl;
}

///// As per like above code you have to write it, and it will show in sorted map
//// here first means key and second means values


cout<<"finding 12: "<<app.count(12)<<endl;

app.erase(12);

cout<<"after erase "<<endl;


for(auto i:app){
  cout<<i.first<<" "<<i.second<<endl;
}


map<int>::iterator itr;

for(itr=app.begin();itr<app.end;itr++)
  cout<<itr<<" "; 
return 0;
}