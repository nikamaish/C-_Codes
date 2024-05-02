#include<iostream>
using namespace std;


int getsum(int *arr){
int sum = 0;
int n;
for (int i = 0; i <n; i++)
{
    sum+=arr[i];
    }
return sum;

}


int main(){
/////// dynamic vs static memory ///////

/*
so basically there are two allocations  dynamic and static allocations

stack memory and heap memory ---> basically stack is small and heap is greater than that 
if array of n numbers is declared like int arr[n]; then it is going to declare in runtime 
but it's always good to declare arr in compiletime like int arr[1000];

Stack---> static allocation
Heap----> Dynamic allocation

if heap memory want to create 'new' keyword is used and like that dyanmic memory is created

for 2d array / creating 2D Array of dynamic memory allocations
int**arr=new int*[n]

*/
 

int n;
cin>>n;

///// variable size array
int*arr= new int[n]; //////------> dynamic memory is going to allocate

//// taking inputs in array
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int ans=getsum(arr);
cout<<"answer is "<<ans<<endl;

return 0;
}