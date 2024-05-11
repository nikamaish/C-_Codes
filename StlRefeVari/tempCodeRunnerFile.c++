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