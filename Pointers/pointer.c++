
// #include<iostream>
// using namespace std;

// int main(){

// int *p1;
// double *p2;
// string *p3;

// cout<<(sizeof p1)<<" ";
// cout<<(sizeof p2)<<" ";
// cout<<(sizeof p3)<<" ";

// cout<<endl;
// //  it is giving size of address

// cout<<(sizeof *p1)<<" ";
// cout<<(sizeof *p2)<<" ";
// cout<<(sizeof *p3)<<" ";
// //  it is giving size of variable
// return 0;
// }





// pointer stores address of variable, * is known as dereference operator 

//  #include<iostream>
//  using namespace std;
 
//  int main(){
//     int num=5;
//     int *p = &num;
//  cout<<num<<endl;

// cout<<"Address of num is "<<&num<<endl;

// cout<<*p<<endl;
// cout<<"hello"<<endl;

// cout<<p<<endl;

//  return 0;
//  }
  


// whenever we declare pointer we should initialize it like  int *p=0;


// #include<iostream>
// using namespace std;

// int main(){
// int num=5;

// cout<<num;

// int *p=&num;  /// pointer declared
// cout<<p<<endl;
// cout<<*p;

// return 0;

// //  here *p will return value of that another variable
// // and p will return address bcz at p block another variables address is stored

// //ptr mdhe konta tri address aahe tr taychi value sanga mhnje *ptr

// }


//  never declare this type of pointer
//int*p;
//cout<<*p;
// 




// #include<iostream>
// using namespace std;

// int main(){
// int *p=0;

// cout<<*p<<endl;

// return 0;
// }



//this will give segmentation fault and bcz kevha pn ptr null cha address ghet asel
//tevha segmentation fault yeto




////////// we can make pointer by another way also


// #include<iostream>
// using namespace std;

// int main(){
// int i=5;
// int j=10;

// int *q=&i;  ///  *q it indicates that number which address is hold by i, q gives address of that another number 
// int *z=&j;

// cout<<q<<endl; /// but *q gives that another number
// cout<<*q<<endl;

// cout<<z<<endl;
// cout<<*z<<endl;

// cout<<"Size of integeris "<< sizeof(i)<<endl;
// cout<<"Size of pointer is "<< sizeof(q)<<endl;
// cout<<"Size of integer is  "<<sizeof(j)<<endl;
// cout<<"Size of pointer is "<<sizeof(z)<<endl;

// // ///////////// we can make pointer by another way also


// // int *p = 0;
// // p=&i;
// // cout<<p<<endl;
// // cout<<*p<<endl;

// return 0;
// }





// #include<iostream>
// using namespace std;


// int main(){

// // int zebra= 5;    
// // int animal=zebra;
// // animal++;

// // cout<<"Zebra is "<<zebra<<endl;
// // cout<<"Animal is "<<animal<<endl;
// // cout<<"Again Zebra is "<< zebra<<endl;



// int bad=10;
// int *good= &bad; 
// int **best=&good;
// // int best= *good; //// it's just a copy


// (*good)++;
// // best++;  

// cout<<"bad is "<<bad<<endl;
// cout<<"Good is "<<*good<<endl;
// cout<<"Best is "<<**best<<endl;
// // cout<<"bad is "<<bad<<endl;
// // cout<<"Good is "<<*good<<endl;

// return 0;
// }


////////////////////////////////////////////////////////////////////////////////////



// #include<iostream>
// using namespace std;

// int main() {

// int tiger= 100;
// int *lion=&tiger;

// cout<<"Before "<<tiger<<endl;

// (*lion)++;

// cout<<"After "<<tiger<<endl;

// return 0;
// }

// // /////////////////////////////////////////// Copying Pointer //////////////////////////////////////////////


// int *q= lion;

// (*q)++;

// cout<<lion<<" - "<<q<<endl;
// cout<<*lion<<" - "<<*q<<endl;
// cout<<tiger<<endl;








////////////////////////////////////// Pointers Addition ///////////////////////////////////

// #include<iostream>
// using namespace std;

// int main(){

// int num=100;
// int *t=&num;

// cout<<"Before t "<<t <<endl;
// t=t+1; //// here after addition address will go to next address i.e it will go after 4 byte
// //// same thing apply with double, float, char 

// cout<<"after t "<<t<<endl;


// return 0;
// }