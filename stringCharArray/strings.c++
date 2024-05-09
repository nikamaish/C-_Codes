// //////////////////////////////////// String /////////////////////////////////////////////


// #include <iostream>
// using namespace std;

// bool valid(char ch)
// {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
//          return 1;
//     }
//         return 0;

// }


// char toLowerCase(char ch)
// {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
//     {
//         return ch;
//     }
//     else
//     {
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }

// bool checkPalindrome(string a){
//     int s=0;
//     int e= a.length()-1;


//     while (s<=e)
//     {
//         if (a[s]!=a[e])
//         {
//             return 0;
//         }
//         else
//         {
//             s++;
//             e--;
//         }

//     }
//     return 1;

// }

// bool ispalindrome(string s)
// {
//     string temp = "";
//     for (int j = 0; j < s.length(); j++)
//     {
//         if (valid(s[j]))
//         {
//             temp.push_back(s[j]);
//         }
//     }
//     for (int j = 0; j < temp.length(); j++)
//     {
//         temp[j] = toLowerCase(temp[j]);
//     }

//     return checkPalindrome(temp);
// }

// int main()
// {
//     ////// there are different string operations that we can perform
//     ///// valid string google it

//     string zebra;
//     cout << "Enter a string" << endl;
//     cin >> zebra;

//     cout<<checkPalindrome(zebra);

//     return 0;
// }


// ////////////////////////////////////////// Maximum occuring character /////////////////////////////


// #include <iostream>
// using namespace std;

// char getMaxOccCharacter(string s)
// {
//     int arr[26] = {0};

//     /// create array of count of characters
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         int number = 0;

//         //// lowercase
//         if (ch >= 'a' && ch <= 'z')
//         {
//             number = ch - 'a';
//         }
//         else // uppercase
//         {
//             number = ch - 'A';
//         }
//         arr[number]++;
//     }
//     // find maximum occ character
//     int maxi = -1, ans = 0;
//     for (int i = 0; i <26; i++)
//     {
//         if (maxi < arr[i])
//         {
//             ans = i;
//             maxi = arr[i];
//         }
//     }
//     char finalAns = 'a' + ans;
//     return finalAns;
// }

// int main()
// {

//     string zebra;
//     cout << "Enter a string" << endl;
//     cin >> zebra;

//     cout<<getMaxOccCharacter(zebra)<<endl;
//     return 0;
// }



// /* Delimeter function:- It is the delimitation character which tells the function to stop reading further input 
//  after reaching this character.
//  getline character helps to read space also
// */


// /////////////////////////////////// Replace spaces /////////////////////////////////


// /*
// #include<iostream>
// using namespace std;

// string replaceSpace(string str){
//     string temp="";

//     for (int i = 0; i <str.length(); i++)
//     {
//         if (str[i]==' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//              temp.push_back('0');
//         }
//         else
//         {
//             temp.push_back(str[i]);
//         }
        
//     }
//     return temp;
// }


// int main(){

//     string zebra;
//     cout<<"Enter a string"<<endl;
//     cin>>zebra;

//     cout<<replaceSpace(zebra);

// return 0;
// }
// */

// ///////////////////////////// Remove all occurances ////////////////


// /*
// #include<iostream>
// using namespace std;


// string removeOccurances(string s, string part){

//     while (s.length()!=0 && s.find(part)<s.length())
//     {
//         s.erase(s.find(part),part.length());
//     }
//     return s;
// }


// int main(){
 
//     string zebra;
//     cout<<"enter a string"<<endl;
//     cin>>zebra;

//     cout<<removeOccurances(zebra,"abc");


// return 0;
// }
// */

// //////////////////////////////////// Permutation in string ////////////////////////////////////////
// //// in this example we use sliding window and 

#include<iostream>
using namespace std;


    bool checkInclusion(string s1, string s2){
    //character count array
    int count1[26]={0};

    for (int i = 0; i <s1.length(); i++)
    {
        int index= s1[i]-'a';
        count1[index]++;
    }


    //traverse s2 string in window of size s1 length and compare


    int i=0;
    int windowSize=s1.length();
    int count2[26]={0};


    while (i<windowSize)
    {
        int index=s2[i]-'a';
        count2[index]++;
        i++;
    }
    
}


int main(){
                
return 0;
}


