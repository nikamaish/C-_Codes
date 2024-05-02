#include<iostream>
using namespace std;

class Animal
{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

    class dog:public Animal{

    };

    class pitbull: public dog{  /// multilevel inheritance

    };

int main(){
    pitbull p; // obj
    p.speak();

return 0;
}