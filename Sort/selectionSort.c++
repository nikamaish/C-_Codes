///////////////////////////////// Selection Sort  ////////////////////
/* best and worst time complexity of this sort is O(n^2), there will be (n-1) rounds
if array, list are small and there is  memomry constraint then use selection sort

find the minimum  element in unsorted array and swap it with element at begining
*/

#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {10, 2, 12, 19, 4};

    for (int i = 0; i < 4; i++)  ///  i< n-1
    {
        for (int j = i + 1; j<5; j++)  /// j<n
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int  i = 0; i <5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}

/////////////////////////////////////////////// Array is equal or not //////////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {

//     int even[5] = {1, 3, 4, 2, 5};
//     int odd[5] = {2, 5, 4, 1, 3};
//     int sum1 = 0;
//     int sum2 = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         sum1 = sum1 + even[i];
//     }

//     for (int j = 0; j < 5; j++)
//     {
//         sum2 = sum2 + odd[j];
//     }

//     if (sum1 == sum2)
//     {
//         cout << "Array is equal" << endl;
//     }
//     else
//     {
//         cout << "Array is not equal" << endl;
//     }

//     return 0;
// }