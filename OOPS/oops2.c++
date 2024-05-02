// //// Inheritance ambiguity ///////////////////
// //if two class have same functions then obj call which function, this can be solved by scope resolution operator

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     void func()
//     {
//         cout << "I'm  A " << endl;
//     }
// };

// class B{
//     public:
//     void func(){
//         cout<<"I'm B "<<endl;
//     }
// };

// class C: public A, public B{

// };

// int main()
// {
//     C obj1;
//     // obj1.func(); // this will give error

//     obj1.A::func();  /// By using scope resolution operator
//     obj1.B::func();

//     return 0;
// }

//////////////////////////// Polymorphism ////////////////////////////

/// polymorphism = poly means many and morphism means forms
/// 1) compile time  2)run time

////////////////////////// compile time polymorphism //////////////
////// compile time polymorphism have function overloading property. In this concept there can be same name
////// functions but it should have different arguments , it also called as static polymorphism

// #include<iostream>
// using namespace std;

// class A{
//     public:
//     void sayHello(){
//         cout<<"Hello Myself "<<endl;
//     }
//     void sayHello(string name){
//         cout<<"Hello Myself "<<name<<endl;
//     }
//      int sayHello(char name){
//         cout<<"Hello Myself "<<name<<endl;
//         return 1;
//     }
// };

// int main(){

//     A obj1;
//     obj1.sayHello();
//     // obj1.sayHello("zebra");
// return 0;
// }

/////////////////////// Operator overloading //////////////////////
/// in this concept we can make different use of operators

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     int a;
//     int b;

// public:
//     void operator+(A &obj)
//     { /// basically in operator overloading we can make different use of operators
//         int value1 = this->a;
//         int value2 = obj.a;
//         cout << "output " << value2 - value1 << endl;
//     }

//     void operator()()
//     {
//         cout << "main baracket hu " << this->a << endl;
//     }
// };

// int main()
// {
//     A obj1, obj2;
//     obj1.a = 4;
//     obj2.a = 7;

//     obj1 + obj2;

//     obj1();
//     return 0;
// }



///////////////////////////////////     Runtime Polymorphism    //////////////////////////

//// so this is a dynamic polymorphism, it has method overriding,

/*method overriding is a feature that allows you to redefine parent class method in the child class
the method of parent class and the method of the child class must have  the same name and same parameters
it is possible through inheritance only

*/

#include <iostream>
using namespace std;

class Animal{
public:
void speak(){
    cout<<"speaking"<<endl; 
}
};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};

int main()
{
    Dog obj1;
    obj1.speak();

    return 0;
}

/////////////////////////////////////    Abstraction    ///////////////////////////////////
//// only essential things can be seen, important data will be hide, only you can make changes to your data fucntion
/// it makes application safe, increase the reusability of code, avoids duplication of code
/// abstraction can be achieved by using private data members
