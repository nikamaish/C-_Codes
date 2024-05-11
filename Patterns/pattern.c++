#include<iostream>
using namespace std;

int main(){

// for (int i = 0; i <5; i++)
// {
//     for (int j = 0; j<=i; j++)
//     {
//         cout<<" * ";
//     }
//     cout<<endl;
// }


cout<<endl;



// for (int i = 5; i>=1; i--)
// {
//     for (int j =0; j<=i; j++)
//     {
//         cout<<" * ";
//     }
//     cout<<endl;
// }


// for (int i = 4; i>0; i--)
// {
//     for (int j =0; j<=i; j++)
//     {
//         cout<< i+1 << " ";
//     }
//     cout<<endl;
// }


// for (int i =0; i<5; i++)
// {
//     for (int j =0; j<3; j++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }


for (int i = 0; i<5; i++)
{
    // int spaces = rows - i;
    int spaces= 5-i;

    for (int j =0; j<spaces; j++)
    {
        cout<<"  ";
    }
     for( int j = 0; j < 2 * i - 1; j++){
            cout <<"* ";
        }
    cout<<endl;
}



return 0;
}