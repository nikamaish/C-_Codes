// #include<iostream>
// using namespace std;

// //// encapsulation means wrapping data members and member functions in single unit
// //// fully encapsulated means wrapping data members which are private
// //// we can hide data by encapsulation, security is high in encapsulation, code reusability
// //// if we want, we can make class read only

// class human{
//     private:
//     string name;
//     int age;
//     int height;

//     public:
//     int getAge(){
//         return this->age;
//     }
// };

// int main(){

//     human first;
// return 0;
// }

///////////////////////////////////////////// Inheritance //////////////////////////////

//// Private member of superclass can not be inherited
//// protected modifier is similar to private but protected data members can access by child or derived class
//// there is one table for access modifiers, like which access modifier will be formed you can search from net

// #include <iostream>
// using namespace std;

// class human
// {
// public:
//     int height;
//     int weight;
//     int age;

// public:
//     int getAge()
//     {
//         return this->age;
//     }
//     void setWeight(int w)
//     {
//         this->weight = w;
//     }
// };

// class male : protected human
// { ///// here we inherit the super class

// public:
//     string color;

//     void sleep()
//     {
//         cout << "Male is sleeping" << endl;
//     }
//     int getHeight(){
//         return this->height;
//     }
// };

// int main()
// {
//     male obj1;
//     cout<<obj1.age<<endl;
//     cout<<obj1.height<<endl;
//     cout<<obj1.weight<<endl;
//     cout<<obj1.color<<endl;

//     obj1.sleep();

//     cout<<obj1.getHeight()<<endl;

//     return 0;
// }

/////////////////////////////////// Types of inheritance //////////////////////////////////////////

/////////////////////////////////// Single Level inheritance /////////////////////////////

// #include <iostream>
// using namespace std;

// class Animal
// {
//     public:
//     int age;
//     int weight;

//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };

//     class dog:public Animal{

//     };

// int main()
// {
//     dog d;
//     d.speak();
//     cout<<d.age<<endl;

//     return 0;
// }

/////////////////////// Multilevel Inheritance //////////////////////////////

// #include<iostream>
// using namespace std;

// class Animal
// {
//     public:
//     int age;
//     int weight;

//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };

//     class dog:public Animal{

//     };

//     class pitbull: public dog{  /// multilevel inheritance

//     };

// int main(){
//     pitbull p; // obj
//     p.speak();

// return 0;
// }

////////////////////////// Multiple Inheritance ////////////////////////////

#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "barking" << endl;
    }
};

class human
{
public:
    string color;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class hybrid : public Animal, public human //// multiple inheritance
{

};

int main()
{

    hybrid obj1;
    obj1.speak();
    obj1.bark();

    return 0;
}

/////////////////////////////////// Hybrid Inheritance ///////////////////////////////////////

#include <iostream>
using namespace std;

class A
{
public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "barking" << endl;
    }
};

class D
{
public:
    string color;
    
public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class B : public A
{
    
};

class C : public A, public D   ///// hybrid inheritance
{

};

int main()
{
    C obj1;
    obj1.bark();
    obj1.speak();

    return 0;
}