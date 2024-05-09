#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key){
    int start=0;
    int end= size-1;

   int  mid=start+(end-start/2);
   // this we do bcz it's value can be out of int range so to consider that we did it

    while (start<=end)
    {
        if(arr[mid]==key){
        return mid;

    }

        // go to right side
    if(key>arr[mid]){
        start=mid+1;
    }

    // go to left wala part means update end part
    else{
        end=mid-1;
    }
    mid=start+(end-start/2);

}
    return -1; // if key is not present then return this
}

int main(){

/* binary search need sorted array, if we find that key then it will return it's index */

// int even[8]={10,20,30,40,50,60,70,80};
int odd[7]={99,89,79,69,59,49,39};

cout<<"Enter a key"<<endl;
int key;
cin>>key;

//  int evenindex=binarysearch(even,7,key); ///(array name, size, key)

// cout<<"Index is "<<evenindex<<endl;;

 int oddindex=binarySearch(odd,7,key);  ///(array name, size, key)

cout<<"Index is "<<oddindex<<endl;

return 0;
}

/////////////////////////// Question is for first occurance index and last occurance index ////////////////

#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    
   int arr[8] = {1, 2, 3, 3,3,3,3, 5};
    cout<<" First occurance of 3 is " <<firstOcc(arr,8,3)<<endl;
    cout<<" Last occurance of 3 is " <<lastOcc(arr,8,3)<<endl;
        return 0;
}

/////////// The question is no of occurances of same number then we can do one thing
////////// then we can do one thing is that ( first occurnace index - last occurance index)+1
///////// it gives no of occurances of particular number



//////////// below code is example of peak index, in peak index question we there is   ///////////////


// #include <iostream>
// using namespace std;

// int peakIndex( int arr[],int size){

//     int s=0;
//     int e=size-1;

//     int mid= s+(e-s)/2;

//     while (s<e)
//     {
//         if (arr[mid] < arr[mid+1])
//          {
//             s=mid+1;
//         }
//         else
//         {
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
    
//     return s;
// }

// int main()
// {
//     int even[6]={2,1,4,3,5};

//     cout<<"peakindex is "<<peakIndex(even,6)<<endl;
//     return 0;
// }
