
//////////////////// Pivot element in array, how we can find it, it is the smallest element in array
// monotonic elements that elements which are in increasing order or decreasing order

/// for this example do dry run then it will understand more effectively


// #include <iostream>
// using namespace std;

// int pivot(int arr[], int size)
// {

//     int s = 0;
//     int e = size - 1;

//     int mid = s + (e - s) / 2;

//     while (s < e)
//     {
//         if (arr[mid] >= arr[0]) // this line of code indicates 1st line of graph
//         {                          // and if pivot is in another line then s should change
//             s = mid + 1; 
//         }
//         else
//         {
//             e = mid;
//         }
//         mid= s+(e-s)/2;
//     }
//     return s; /// at the end s and e both indicate pivot element
// }

// int main()
// {

//     int even[5] = {3, 8, 10, 17, 1};

//     cout << "Pivot is " << pivot(even, 5) << endl;

//     return 0;
// }

/////////////////////////////////// search in a rotated and sorted array //////////////////////
//// sorted and rotated arrays are those arrays which are first sorted and then rotated


#include<iostream>
using namespace std;

int getPivot( int arr[], int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
    /// at the end s and e both indicate pivot element
}

int binarySearch(int arr[], int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

 // this we do bcz it's value can be out of int range so to consider that we did it
    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

         // go to left wala part means update end part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
    // if key is not present then return this
}




int main()
{   
    int k;
    cin>>k;

    int arr[5]={7,8,9,4,5};

    int pivot = getPivot(arr, 5);
    if (k>=arr[pivot] && k<=arr[4])   /// binary search on second line
    {
        cout<<binarySearch(arr,pivot,4,k);
    }
    else   ///// binary search on first line
    {
        cout<<binarySearch(arr,0,pivot-1,k);
    }
    return 0;
    
}



/////////////////////////////////////////  finding square root by using binary search  /////////////////


// #include <iostream>
// using namespace std;

// long long int sqrtInteger(int n)
// {

//     int s = 0;
//     int e = n - 1;

//     long long int mid = s + (e - s) / 2;

//     long long int ans=1;  // to return it we have to initialize it

//     while (s <= e)
//     {
//         long long int square = mid * mid;
//           // as it may possible that ans of mid*mid is greater than int range so we have to use long long
          
//         if (square == n)
//         {
//             return mid;
//         }
//         else if (square <= n)
//         {
//             ans = mid;     // mid may have possibility to be as answer
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;// return mid
// }




//     double morePrecision(int n, int precision, int tempsol){
//         double factor=1;
//         //// why we here take factor=1 , as per below condition, 1/10 then it will become 0.1 

//         double ans= tempsol;

//     for (int i = 0; i <precision; i++) //// we give precision as three so this loop will go up 3 rd position
//         { //// means 0.1 then 0.01, then 0.001

//             factor=factor/10;

//         for (double j =ans; j*j<n ; j=j+factor)
//         {
//             ans=j;
//         }
        
//         }
//         return ans;
//     }




// int main()
// {

//     cout << "Enter a key" << endl;
//     int key;
//     cin >> key;

//     int tempSol= sqrtInteger(key);
    
//     cout<<tempSol<<endl;
//     // cout<<"Answer is "<<morePrecision(key,3,tempSol)<<endl;

//     //////////////////////////// 3 is the precision means upto 3 decimal points we want ans

//     return 0;
// }
