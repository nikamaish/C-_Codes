/*
#include<iostream>
using namespace std;

int main(){

//array = array is collection of same data type elements
//stored in contigous location
// memory blocks having consecutive addresses
//if we create array of n number suppose we give only 2 numbers then remainder array contain zero numbers


int arr[10];
// int arr[n];

cout<<"Elements are:"<<endl;
for (int i = 0; i<10 ; i++)
{
    cin>>arr[i]; // to take input
    cout<<arr[i]<<endl; // to print output
}

return 0;
}
*/
/* there are two types of array: static array and dynamic array
In static array size of array is decided at compile time and also it can be set from user end
in this both concept array is stored in stack
In dynamic array size of array is dynamic and it is stored in heap

int *p= new int[n]; // dyanmic array here pointer will store in stack and array in heap
*/

///////// Leader Question of array solved by vector ////////////////////////

/*

{16,17,4,3,5,2}
ans should be {17 5 2}

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){


     int max=a[n-1];  /// rightmost element is always leader
        vector<int>lead;
        lead.push_back(a[n-1]); // to store rightmost element as leader

        for(int i=n-2;i>=0;i--) /// it will trasverse back
        {

            if(a[i]>=max)
            {
                max=a[i];
                lead.push_back(a[i]);
            }
        }
        reverse(lead.begin(),lead.end()); // to revers it
        return lead;
    }

};

*/

/////// check if two arrays are same or not //////
//// here we use vector, instead of this solution we can solve it by getting sum of two arrays
//// ans should be in true or false

/*
class Solution{
    public:

   bool check(vector<ll> A, vector<ll> B, int n) {
        //code here
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        int c= 0;

        for(int i=0; i<n; i++)
        {
            if(A[i] == B[i])
            {
                c++;
            }
        }
        if(c == n  )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
*/

/////////////////////////////////////////////// Swap adjacent elements ///////////////////////////////////////

// #include<iostream>
// using namespace std;

// void swapAlternate(int arr[], int n){
//     for (int  i = 0; i <n; i+=2)
//     {
//         if (i+1<n)
//         {
//             swap(arr[i],arr[i+1]);
//         }

//     }

//     for (int i = 0; i <n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int even[8]={1,3,5,7,9,11,13,15};
//     int odd[5]={2,4,6,8,10};

//     swapAlternate(even,8);
//     swapAlternate(odd,5);

// return 0;
// }

///////////////////////////////////////// Sort 0,1  ///////////////////////////////////////////////

// #include <iostream>
// using namespace std;

// void printArray(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void sort012(int *arr, int n)
// {
//     // we will keep 0 at left side and 1 at right side
//     // in this example we used two pointer approach

//     int left = 0;
//     int right = n - 1;
//     int i = 0;
//     int j = 0;

//     while (left < right)
//     {
//         while (arr[i] == 0)
//         {
//             i++;
//         }
//         while (arr[j] == 1)
//         {
//             j--;
//         }
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
// }

// int main()
// {
//     int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};

//     sort012(arr, 8);
//     // printArray(arr, 8);

//      for (int i = 0; i < 8; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
 


 /////////////////////////////////// Merge sorted arrays ///////////////////////////////////////////////


 #include<iostream>
 using namespace std;
 
void merge(int arr1[],int n, int arr2[],int m, int arr3[]){


    ////// here we are using two pointer approach 

    int i=0,j=0; //// here we used two pointer, each pointer traverse through each array
    int k=0;  ///// k is for that merged array

    while (i<n && j<m)
    {
        if (arr1[i]<arr2[j])
        {
            
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
        
    }
    ////// copy first array k elements ko

    ///// according to previous while condition it may happen that array will finish but some elements will
    ///// still left then in that belows while conditions are used to get that elements in new merged array 

    while (i<n)  
    {
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while (j<m)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    

}

void printArray(int ans[], int n){
    for (int i = 0; i <n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

 int main(){
 
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};


    int arr3[8]={0};

    merge(arr1,5,arr2,3,arr3);
    printArray(arr3,8);


 return 0;
 }