// #include <iostream>
// using namespace std;


// /* This is a insertion sort, in this sort we consider 1st element as sorted, there will be n-1 rounds */

// int main()
// {
//     int even[5] = {10, 2, 12, 19, 4};   


//  for (int i = 1; i < 5; i++)
//     {
//         int key = even[i];  ///// here we set element of  index 1 as key
//         int j = i - 1;   

//         while (j >= 0 && even[j] > key)
//         {
//             even[j + 1] = even[j]; ///// this step is to move larger number to next place  
//             j = j - 1; ///// here j is decremented, it goes back and back when we compare with key, it helps to
                    //// arrange all elements according to order
//         }
//         even[j + 1] = key;   /// so here element is placed to sorted position
//     }

//     for ( int i = 0; i <5; i++)
//     {
//         cout<<even[i]<<" ";
//     }

    

//     return 0;
// }



#include<iostream>
using namespace std;

int main(){

int arr[5]={100,30,50,60,20};

for (int i = 1; i <5; i++)
{
    int key=arr[i]; /// it is key
    int j=i-1;


while (j>=0 && arr[j]>arr[key])
{
    arr[j+1]=arr[j];
    j=j-1;

}
   arr[j+1]=key;
}


return 0;
}
