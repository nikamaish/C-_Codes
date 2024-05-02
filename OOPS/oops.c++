
// #include <iostream>
// using namespace std;

// class hero
// {
//     // int health;
//     // there are three access modifiers  public ,private, protected  by deafault it is private
//     // public can access out of class also

//     int star; // these are data members 

// public:
//     char level;
    
//     void print()  ///this is a function which is we used to show that within class we can access private members
//     {
//         cout << star << endl;
//     }

//     int getstar()  ///
//     {
//         return star;
//     }
//     void setstar(int st)
//     {
//         star = st;
//     }
//     void setlevel(char ch)
//     {
//         level = ch;
//     }
// };

// int main()
// {

//     // create object
//     /// object is entity of class, object has behaviour and properties
//     hero h1;
//     // usually class has zero memory space but after creating object
//     // then it will have some memory space and size of obj in empty class is 1 byte
//     // class is blueprint but object is reality
//     // we can call class by creating class out side of file for that we have to include that file name

//     cout << "size is:" << sizeof(h1) << endl;

//     //// cout<<"star is"<<h1.star<<endl; // it will give error bcz star is private
//     cout << "Level is " << h1.level << endl;

//     cout << "star is " << h1.getstar() << endl;
//     h1.setstar(80);

//     cout << "star is " << h1.getstar()<< endl;

//     h1.setlevel('A');

//     cout << "h1 is  " << h1.level << endl;

//     return 0;
// }

//// constructor //////////////

// object creation chya time la invoke hoto
// no return type , no i/p parameters
// by default constructor he create hoto ch
// we can create seperate constructor

// #include<iostream>
// using namespace std;

// class hero{
//    public:
//     hero(){
//         cout<<"Constructor called"<<endl;
//     }
// };

// int main(){

// cout<<"Hi"<<endl;

// // object created statically
// hero ramesh;
// // apn object create kela ramesh mhnun tevha constructor
// // call jhala tya mule vrcha instructor call jhala

// cout<<"Hello"<<endl;

// // object created dyanmically
// hero *z = new  hero ();

// cout<<"bye"<<endl;
//     return 0;
// }

//// Destructor  //////////////////

// it is used for deallocating memory
// as your objects become out of scope then destructor is called and memory will be freed
// destructor has same name as per class and it invoked when object is created and it has no return type and no i/o parameters
// to create destructor we have to use ~ sign , it is as same as contructor

// #include<iostream>
// using namespace std;

// class hero {
// public :
// ~hero(){
//      cout<<"destructor called"<<endl;
// }

// };
// int main(){

// hero ramesh; // statically object created

// hero *suresh = new hero(); // dynamically

// // static object ---> destructor automatically called
// // for dynamic object ---> destructor have to call manually
// // as we write our destructor then inbuilt destructored will be removed

// delete suresh;

// return 0;
// }

/////////////////////////////////// static keyword ///////////////////////////////

/* we will use static keyword, it created such type of data members which belongs to class
to access data member you do not need to create object 

In static function we dont create object and we can not use this bcz as object is not present
*/

// #include<iostream>
// using namespace std;

// class hero {
// public:
// char level;
// static int timetocomplete;


// static int random(){ /// this is a static function and it access only static members
//     return timetocomplete;
// }

// };

// int hero::timetocomplete = 5;

// int main(){

// cout<<hero::timetocomplete<<endl; //// this is the idle way static keyword is used

// cout<<hero::random()<<endl;


// hero a; //  this is not necessary , above method is good
// cout<<a.timetocomplete<<endl;

// hero b;
// b.timetocomplete = 55;

// cout<<b.timetocomplete<<endl;

// return 0;
// }

///////// static function can access only static members



//////// parameterized constructor //////////
#include<iostream>
using namespace std;

///   this is  pointer to current object ///
class hero {


private:
int health ;

public :
int ch;

hero(){
    cout<<"constructor called "<<endl;
}




///// parameterized constructor ///////////
hero(int health){
cout<<"this ->"<<this<<endl;
this -> health = health ;
}

int gethealth(){
    return health;
}
void sethealth(int h){
health=h;


}

};



int main(){


hero ramesh(10);
cout<<"address of ramesh"<<&ramesh <<endl;
ramesh.gethealth();

cout<<ramesh.gethealth()<<endl;

return 0;
}

/////// get and set ne private data members class chya baher access krta yetat