/*  original value is not modified in call by value  but modified in call by reference

    call by value:-
    value being passed to the function is locally stored by function in stack memory location 
    If you change the value of function parameter, it is changed for the current function only. 
    It will not change the value of variable inside the caller method such as main().


    call by reference:-
    In call by reference, original value is modified because we pass reference (address).
    Here, address of the value is passed in the function, so actual and formal arguments share the same address space. 
    Hence, value changed inside the function, is reflected inside as well as outside the function.


*/







// #include<iostream>
// using namespace std;


// int main(){
// int i=5;
// int &j=i;  ///// reference variable 
// ///// same memory allocated but with different name

// cout<<"Enter the value of "<<j<<" and "<<i<<endl;       

 
// i++;  ///// here value bec   omes 6 

// cout<<i<<endl;

// j++; ////// as value is same for i and j as memory is same so it becomes 7
// cout<<j<<endl;

// cout<<i<<endl;

// return 0;
// }



// #include<iostream>
// using namespace std;

// void update1(int *n1){ //// here we use reference variable so here another memory is not created
// (*n1)++;                //// here we use call by reference, so whatever me make changes will reflect in main function
// }

// void update2(int n){ //// here we use call by value, here we make only copy of it, another memory is created
//     n++;            /////  so if we make changes then it will not reflect in main function
// }

// int main(){

// int n =5;
// int *n1=&n;
// cout<<"before "<<n<<endl;
// update1(&n);
// cout<<"After "<<n<<endl;


// cout<<"Before "<<n<<endl;
// update2(n);
// cout<<"After "<<n<<endl;

// return 0;
// }



#include<iostream>
using namespace std;

int main(){

/////// if we make array of n size then it is bad practice bcz at runtime, computer got to
/////// know which size is required, so it may happen stack is small but array size is big then program can crash
/////// to use heap we have to use new keyword, i.e dynamic memory, and memory of stack called as static


     char * ch= new char;
//// char *ch will store in stack and new char will store in heap


////if you want to create variable size array then instead of normal static array, you can create dyanmic(heap) array

    int n;
    cin>>n;

    int* player= new int[n] ;///// heap array

///// in stack memory allocation, if there is array of 50 number then the size of array is 200 bytes
///// but in case of heap memory allocation, size of array will be 208 bytes= 200 byes of array (heap)+ 8 bytes of pointer (stack)


//// in static allocation, memory automatically get release or clean but in dyanmic allocation memory have to
//// clean manually by using delete keyword, for array deletion: delete []arr, for normal variable: delete i  

return 0;
}