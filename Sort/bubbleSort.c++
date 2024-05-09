////////////////////////// Bubble Sort //////////////////

//// Bubble sort = we swap elements by doing comparison and by using temp variable
//// at round 1 first largest element will get at right place , there will be n-1 rounds

#include<iostream>
using namespace std;

int main(){

int even[5]={22,12,2,16,1};
int temp;

for (int i = 0; i <5; i++)  /// this for passing i.e for round 1 to n-1s
{
    for (int j = 0; j<4 ; j++)  /// j=n-1, this is for itertation
    {
        if (even[j]>even[j+1])
        {
           temp=even[j];    ///// here we are swapping elements 
            even[j]=even[j+1];
            even[j+1]=temp;
        }
        
    }
    
}

for (int i = 0; i <5; i++)
{
    cout<<even[i]<<" ";
}
cout<<endl;


return 0;
}