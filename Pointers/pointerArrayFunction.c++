
#include<iostream>
using namespace std;

int main(){

int arr[10]={10,20,30,40};


//// by default arr gives address of 0 th index

cout<<"Address of first memory block is "<<arr<<endl;
cout<<"Address of first memory block is "<<&arr[0]<<endl;


cout<<"it is "<<*arr<<endl;

cout<<"it is "<<*arr+1<<endl; //// it will add 1 in value
cout<<"It is "<<*(arr)+1<<endl; //// this and above code is same

cout<<endl;

cout<<arr<<endl; 
cout<<"okay "<<arr+1<<endl; /// it adds 4 bytes to address of arr

cout<<endl;

cout<<"it is "<<*(arr+1)<<endl; //// it will add 1 in index, and that index value will return
cout<<"It is "<<*(arr+2)<<endl; //*arr[2]

////// there is one formula    arr[i]= *(arr+1)  or  i[arr]=*(i+arr)

int i=3;
cout<<i[arr]<<endl;



int temp[10]={1,2,3};

int *ptr=&temp[0];

cout<<"size is "<<sizeof(ptr)<<endl; /// it should  give address of 4 byte
cout<<"size is "<<sizeof(*ptr)<<endl;  /// integer's size 4 byte
cout<<"size is "<<sizeof(&ptr)<<endl;  //// it should give address of 8 byte


int a[20]={1,2,3,4,5};

cout<<" -> "<<&a[0]<<endl;
cout<<&a<<endl;///// all three
cout<<a<<endl;/////  are same


int *pt=&a[0];
cout<<pt<<endl; //// it will give address
cout<<*pt<<endl; /// it will give value
cout<<" -> "<<&pt<<endl; /// it will give address of pt block


cout<<pt+1<<endl; /// it will give address of next index

return 0;
}


/* There is symbol table, suppose we declare array then it will store address of array by mapping */

///////////////////////////////////////////// Character array //////////////////



// #include<iostream>
// using namespace std;

// int main(){

// int even[10]={1,2,3,4,5,6};

//  char odd[6]="abcde";

// cout<<"int array "<<even<<endl;
// cout<<"char array "<<odd<<endl;

// cout<<endl;

// char *ch= &odd[0];
// cout<<*ch<<endl; //value // a
// cout<<ch<<endl; //whole array, it is similar to above odd
// cout<<&ch<<endl; //address of ch block

// cout<<endl;


// char temp='z';
// char *p= &temp;

// cout<<p<<endl;


// ///// so cout function work differently for char array and int array.

// return 0;
// }


//////////////////////////////////////////// PointerWithFunctions //////////////////////////////////////////

// #include <iostream>
// using namespace std;

// void print(int *p)
// {

//     cout<<p<<endl;
//     cout<<*p<<endl;
// }

// int getSum(int arr[], int n){  
//     //////// here int arr[] act like pointer show it will show address as 8 bytes 

//     cout<<endl<<"Size:"<<sizeof(arr)<<endl;

//     int sum=0;
//     for (int i = 0; i <n; i++)
//     {
//         sum+=arr[i];
//     }
//     return sum;
// }


// int main()
// {

//     int value = 5;
//     int *p = &value;

//     print(p);


//     int arr[10]={1,2,3,4,5};
//     cout<<"Sum is "<<getSum(arr,5);


//     return 0;
// }



////////////////// Benefit of array which act like a pointer in function ///////////////////
/* we can pass the certain part of array as function, 

*/
