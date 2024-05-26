////////////////////////////// Stack using STL //////////////////////////////////////////

// #include<iostream>
// #include <stack>
// using namespace std;

// int main(){

//     // creation of stack
//     stack<int>s;

//     //push operation
//     s.push(3);
//     s.push(5);

//     // pop operation
//     s.pop(); // pop opertion dont need to give element as it will pop top most element

//     cout<<"Printing topmost element "<<s.top()<<endl;

//     if (s.empty())
//     {
//         cout<<"stack is empty "<<endl;
//     }
//     else{
//         cout<<"stack is not empty"<<endl;
//     }

// return 0;
// }

//////////////////////////////////////////// STACK by using Array /////////////////////////////

// #include <iostream>
// #include <stack>
// using namespace std;

// class Stack
// {
//     // properties , data members
// public:
//     int *arr;
//     int top;
//     int size;

//     Stack(int sizes)
//     {

//         // here constructor is created
//         // This constructor is designed to initialize the member variable size of the class or struct to the value provided as an argument when an object is created using this constructor.
//         // it's being used to set the value of the member variable size to the value passed as the argument to the constructor.

//         this->size = sizes;
//         arr = new int[size];
//         top = -1;
//     }

//     void push(int element)
//     {
//         if (size - top > 1)
//         {
//             top++;
//             arr[top] = element;
//         }
//         else
//         {
//             cout << "stack overflow " << endl;
//         }
//     }

//     void pop()
//     {
//         if (top >= 0)
//         {
//             top--;
//         }
//         else
//         {
//             cout << "Stack is underflow" << endl;
//         }
//     }

//     int peek()
//     {
//         if (top >= 0)
//             return arr[top];
//         else
//         {
//             cout << "Stack is Empty" << endl;
//             return -1;
//         }
//     }

//     bool isEmpty()
//     {
//         if (top == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// int main()
// {

//     Stack st(5);

//     st.push(10);
//     st.push(20);

//     cout<<"top is "<<st.peek()<<endl;
//     st.pop();

//     cout<<"top is "<<st.peek()<<endl;

//     if(st.isEmpty()){
//         cout<<"stack is empty "<<endl;
//     }
//     else
//     {
//         cout<<"stack is not empty "<<endl;
//     }
    


//     return 0;
// }


///////////////////////////////////////// Two Stack Problem //////////////////////////////////////////////


#include<iostream>
using namespace std;

class twoStack{

public:
    int *arr;
    int top1;
    int top2;
    int size;

twoStack(int s){
    this->size=s;
    arr= new int[s];
    top1=-1;
    top2=s;

}

void push1(int num){
    if(top2-top1 > 1){
        top1++;    /// from left to right
        arr[top1]=num;   
    }
    else
    {
        cout<<"Stack overflow "<<endl;
    }
}

void push2(int num){
    if (top2-top1 >1){
        top2--;
        arr[top2]=num; /// from right to left
    }
    else
    {
        cout<<"stack overflow"<<endl;
    }
}

int pop1() {
    if (top1 >= 0) {
        int ans = arr[top1];
        top1--; // if it pops then index will decrement
        return ans;
    } else {
        return -1;
    }
}

int pop2() {
    if (top2 < size) {
        int ans = arr[top2];
        top2++; // if it pops then index will shift from left to right so it will increment
        return ans; // return inside the if block
    } else {
        return -1;
    }
}

};




int main(){
    twoStack st(6);

    st.push1(10);
    st.pop1();

return 0;
}