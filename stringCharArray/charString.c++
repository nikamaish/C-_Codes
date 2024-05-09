/* string in c++ --> 1 dimensional char arrays, array of characters make as string
input in string= when we input string then at last of array there will be null, this null indicates that
string is over

output in string= when it finds null then it will automatically stop, last index is reserved for null
cin execution stops  when you give space,tab,newline,enter
 */

/*
#include<iostream>
using namespace std;


int getLength(char name[]){ /// there is no need to give size to character array

int count=0;

for (int  i = 0; name[i] !='\0' ; i++)
{
    count++;
}
    return count;

}


int main(){

char even[10]="zebraisco"; //// here there are nine characters, 10 th index is null
cout<<even<<endl;


char odd[10]; // read above note
cin>>odd;
// odd[2]='\0'; ////// null characters, it has to be written


cout<<odd<<endl;
cout<<"Length: "<<getLength(odd)<<endl;

return 0;
}

*/

#include <iostream>
using namespace std;


char toLowerCase(char ch){
    if (ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp= ch-'A'+'a';
        return temp;
    }
    
}


bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    //// n is the length of that input

    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0; /// it means false
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char name[])
{ /// there is no need to give size to character array

    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char name[20];

    cout << "Enter your name " << endl;
    cin >> name;

    int len=getLength(name);
    cout<<"Palindrome or not: "<<checkPalindrome(name,len)<<endl;


    cout<<" Character is "<<toLowerCase('b')<<endl;
    cout<<" Character is "<<toLowerCase('C')<<endl;
    return 0;
}

//// We wrote above code for palindrome case and this code is not valid for mixture of lower and upper case 
//// so we  made change  we created 1 function that is toLowercase


