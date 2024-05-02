
//////////////////////////////    Reverse an array    /////////////////

/*
#include<iostream>
using namespace std;

int main(){


int even[10]={1,2,4,3,5,6,7,8,9,10};

for (int i = 0; i < 10; i++)
{
    cout<<even[i]<<" ";
}
cout<<endl;

cout<<"Reverse array is "<<endl;

for (int i=9; i>=0; i--)
{
    cout<<even[i]<<" ";
}

return 0;
}
*/


//////////////////////////////////////////////  Linear Search /////////////////////////////

/*
#include<iostream>
using namespace std;


bool search(int arr[],int size,int key){


for (int i = 0; i <10; i++)
{
   if (arr[i]==key){
    return 1;
   }
}

return 0;
}


int main(){

int arr[10]={1,5,10,2,4,9,16,12,19,15};

cout<<"Enter number which to be found"<<endl;
int key;
cin>>key;

bool found= search(arr,10,key);

if (found)
{
    cout<<"Key is present"<<endl;
}

else{
    cout<<"Key is absent"<<endl;
}
return 0;
}
*/


//////////////////////////////////////////// Max and Min //////////////////////////////////////////////


/*

#include<iostream>
using namespace std;

////// INT_MIN show the minimum range(i.e -2^31) of int datatype and INT_MAX (i.e 2^31-1) shows the max range of int datatype

int getMax(int num[],int n){

    int max= INT8_MIN; 
    
    for (int i = 0; i <n; i++)
    {
        // if (num[i]> max)
        // {
        //     max=num[i]; 
        // }
        
        // alternate step
        // maxi=max(max,num[i]);
        
    }
    return max;
}


int getMin(int num[],int n){

    int min= INT8_MAX;
    
    for (int i = 0; i <n; i++)
    {
        if (num[i]< min)
        {
            min=num[i]; 
        }
        
    }
    return min;
}




int main(){

int size;
cin>>size;

int number[1000];  
///// this is good format of taking an array, dont take as it like  int size then int arr[size] this one is bad  


for (int i = 0; i < size; i++)
{
    cin>>number[i];
}
    cout<<"Maximum value is "<<getMax(number,size)<<endl;
    cout<<"Minimum value is "<<getMin(number,size)<<endl;
return 0;
}
*/

/*ANS:-   
5
5 8 2 3 4
Maximum value is 8
Minimum value is 2

the same ans can be acheived by using min and max inbuilt function
maxi= max(maxi,num[i]);
*/




///////////////////////////////// Scopes in array //////////////////////////

/*
#include<iostream>
using namespace std;


void update (int arr[], int n){
cout<<endl<< "Inside function"<<endl;

// updating array
arr[0]=120;
// if we update variable in function(pass by call) then it doesnt change in main function but in array it's different 
// in variable concept we make copy of variable but in case of array, here address of array of main function given to 
// derived function so thats why if update,remove,add array in derived function then it make changes in main function also 

// printing array
for (int i = 0; i <n; i++)
{
    cout<<arr[i]<<endl;
}
cout<<endl;


cout<<"Going back to function"<<endl;

}


int main(){

int arr[3]={1,2,3};
update(arr,3);

cout<<"printing in main function"<<endl;
for (int i = 0; i <3; i++)
{
    cout<<arr[i]<<endl;
}


cout<<endl;
return 0;
}

*/



/////////////////////////////////////// Power of 2 //////////////////////////////////////

/*
#include <iostream>
using namespace std;

int main() {
  int n, i;
  // reading value of n from user
  cin >> n; 
  i = n;

  if (i > 0) {
    // continously divide i if it is even
    while (i % 2 == 0) {
      i = i / 2;
    }

    // check if n is a power of 2
    if (i == 1) {
      cout << n << " is a power of 2";
    } else {
      cout << n << " is not a power of 2";
    }
  } else {
    cout << "Enter a valid positive number";
  }
  return 0;
}

*/



/*
#include<iostream>
using namespace std;

int main(){


int num;
cin>>num;


while (num!=0)
{
    int digit=num%10;

    int ans=0;

    //  if ((ans>INT32_MAX/10)|| (ans<INT32_MIN/10))
    // {
    //     cout<<"It will give error"<<endl;
    // }
    
// above condition is for, suppose we reverse number then if that reverse number is less than or greater than
// integer range bcz we are doing ans*10 it may go beyound int range


    ans=(ans*10)+digit;

    num=num/10;

    cout<<ans;
}

return 0;
}
*/




/////////////////////// Power of Two ////////////////
/*
#include<iostream>
using namespace std;

int main(){


int key;
cin>>key;
int ans=1;


for (int i = 0; i <=30; i++)
{
    if (ans==key)
    {
        cout<<"It is a power of two"<<endl;
    }
    
    
    if (ans<INT32_MAX/2)
    {
        ans=ans*2;  //here we use that previous values to find next value of two's power
    }
// here we use a particular condition, what if ans is beyond of integer range

}

return 0;
}
*/


/////// for anticlockwise rotation by 90 deg solution
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();

//         // Transpose the matrix
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < i; j++) {
//                 swap(matrix[i][j], matrix[j][i]); // Transpose
//             }
//         }

//         // Reverse each column to get the anticlockwise rotation
//         for (int j = 0; j < n / 2; j++) {  // we are reversing columns and after n/2 it will get reversed but for n it will gain same previous position
//             for (int i = 0; i < n; i++) {
//                 swap(matrix[i][j], matrix[i][n - 1 - j]);
//             }
//         }
//     }
// };
