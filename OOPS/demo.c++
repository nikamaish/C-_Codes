// #include <iostream>
// using namespace std;

// /*
// Object is real life entity,it is instance of class, object has some states
// and behaviors

// class is blueprint it means it does not exist and it doesnt hold space until,
// object is created
// class is group of objects which have commomn properties
// */

// class Dogs
// {
// public:
//     string color;

// public:
//     Dogs() // constructor is called and it is created manually
//             // but along with obj one constructor is created by default
//             // and it is called by giving the name of class
//     {

//         cout << "hello World" << endl;
//     }

//     ~Dogs(){
//         // here destructor is called to deallocate the memory
        
//     }

//     void barking()
//     {
//         cout << color << endl;
//     }

//     string getcolor()
//     {
//         return color;
//     }

//     void setcolor(string co)
//     {
//         color = co;
//     }
// };

// int main()
// {

//     cout << "Hi" << endl;

//     Dogs Rocky; /// object is created statically

//     cout << "Bye" << endl;

//     cout << sizeof(Rocky) << endl;

//     Rocky.color = "green";

//     cout << Rocky.color << endl;

//     cout << Rocky.getcolor() << endl;

//     Rocky.setcolor("blue");

//     cout << Rocky.getcolor() << endl;

//     Dogs *Serious = new Dogs();  /// dynamically

//     delete Serious;
//     // static object ---> destructor automatically called
//     // for dynamic object ---> destructor have to call manually
//     // as we write our destructor then inbuilt destructored will be removed

//     return 0;
// }


/* If we dont want to crate a object but still want to access properties 
then we can use static keyword to access them
it has particular syntax, through that we can access them
*/

#include<iostream>
using namespace std;

class Car{

public:
int level;

static int speed;
static int velocity;

static int applyingBrakes(){
    /// this is a static function and it access only static members
    return velocity;
}


};

int Car::speed=100;
int Car::velocity=50;

int main(){

cout<<Car::speed<<endl;
cout<<Car::applyingBrakes()<<endl;

return 0;
}

/////////////////////////////////////// Abstraction //////////////////////////////////////

/*
Abstraction means showing essential data,and hiding lowe level details 
It is achieved by using access modifiers, In abstraction, private data members are achieved by only member methods
any kind of example of code where private data members are accessed by member methods 

*/

//////////////////////////// Encapsulation /////////////////////////////

/*
Encapsulation is a process of wrapping of data and methods in a single unit is called encapsulation
data members and member functions are combined in single unit, which is referred as class 
fully encapsulated means wrapping data members which are private 
*/



/////////////////// Inheritance //////////////////////////////////


/*
inheritance is a process of obtaining the data members and methods from one class to another class,

Single multiheritance
    subclass inherit the features of one superclass
    class dog: public Animal 

Multilevel inheritance
    dervied class will be inheriting a base class and as well as that derived class act as base class to other class
    class dog:public Animal
    class pitbull:public dog


Hierarchical inheritance
    one class serve as superclass for more than one subclass
    class dog:public Animal
    class cat:public Animal

Multiple inheritance 
    one class can have more than one superclass 
    class pitbull:public Animal
    class pitbull: public Dog


Hybrid Inheritance
    class dog:public Animal,public human

*/

////////////////////////Polymorphism ////////////////////////

/* Polymorphism allows you to define one interface and have many implementations
1)compile time polymorphism
compile time polymorphism have function overloading property. In this concept there can be same name
functions but it should have different arguments , it also called as static polymorphism

2) 
so this is a dynamic polymorphism, it has method overriding,
method overriding is a feature that allows you to redefine parent class method in the child class
the method of parent class and the method of the child class must have  the same name and same parameters
it is possible through inheritance only

*/


