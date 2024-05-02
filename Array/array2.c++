//////// Find Unique element///////////////////////

// #include <iostream>
// using namespace std;

// int findUnique(int arr[], int size){
//     int ans=0;
//     for (int i = 0; i <size; i++)
//     {
//         ans=ans^arr[i];
//     }
//     return ans;
// }

// int main()
// {
//     int arr[7]={2,3,1,6,3,6,2};
//     cout<<findUnique(arr,7);

//     return 0;
// }

////////////////////////////////////// Duplicate In array ///////////////////////////////////

///// in this concept, we cancel out non repeated arrays, by doing one thing i.e you google it


// #include <iostream>
// using namespace std;

// int findDuplicate(int arr[], int size)
// {
//     int ans = 0;

//     //XOR ing all elements
//     for (int i = 0; i <size; i++)
//     {
//         ans = ans ^ arr[i];
//     }

//     //XOR[1,n-1]
//     for (int i = 0; i < size; i++)
//     {
//         ans = ans ^ i;
//     }
//     return ans;
// }

// int main()
// {   
//     int arr[6]={5,1,2,3,4,2};

//     cout<<findDuplicate(arr,6);
//     return 0;
// }



/////////////////// Find duplicates in array //////////////////////////

/// if you 

// class Solution {
// public:
// vector <int> findDuplicates(vector<int>& nums) {

// sort(nums.begin(), nums.end());

// vector<int>ans;

// for(int i = 0; i < nums.size(); i++){

// if(i+1 >= nums.size()) 
// break;

// if(nums[i] == nums[i+1]) {
// ans.push_back(nums[i]);

// // i++;

// }
// }
// return ans;
// }
// };



////////////////////////// Pair sum //////////////////////////
////// pair of sum is should be = s then find that pairs

// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    // Write your code here.

//    vector<vector<int>> ans;

// for(int i=0;i<arr.size();i++){
//    for(int j=i+1;j<arr.size();j++){
//       if(arr[i]+arr[j]==s){
//          vector<int>temp;
//          temp.push_back(min(arr[i],arr[j]));
//          temp.push_back(max(arr[i],arr[j]));
//          ans.push_back(temp);
//       }
//    }

// }
// sort(ans.begin(),ans.end());
//  return ans;   
// }