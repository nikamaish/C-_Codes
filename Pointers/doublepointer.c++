#include <iostream>
using namespace std;

void update(int **p)
{ /// Pass by value
    // p=p+1;   /// there will be no changes

    // *p=*p+1; /// there will be changes

    **p = **p + 1;
}

int main()
{

    int i = 5;
    int *p = &i;
    int **p2 = &p; /// double pointer

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << &i << endl; //// address of i block
    cout << p << endl;
    cout << *p2 << endl; /// three code gives all same output i.e address of i block

    cout << &p << endl; //// it gives
    cout << p2 << endl; //// address of that block which hold address of i block

    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << p2 << endl;

    update(p2);
    cout << endl;

    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;
    cout<<endl;

    ////////////////////////////////////////////

    // int arr[]={11,21,31,41};
    // int *ptr=arr++;
    // cout<<*ptr<<endl;
    ///// here we can not add arr, it will give error

    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;                 //// here it will become b
    // cout << *ptr << endl; /// it will become b

    // char arr[] = "abcde";
    // char *z = &arr[0];
    // cout << z << endl; /// in char array if we print p it will not give addres, it will give whole array

    // int first = 110;
    // int *a = &first;
    // int **b = &a;
    // int second = (**b)++ + 9; /// here it is post increment , it will give  111 and 119 
    // cout << first << " " << second << endl;
    //// in post increment first value will remain as it is and 2nd value will increment
    
    return 0;
}