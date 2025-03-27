#include <iostream>
#define PI 3.14 
using namespace std;
//defaultConstructor
class male{
    public:
     male(){
        cout<<"Male have beard"<<endl;
     }
};
//parameterized constructor
class female{
    public:
    int height;
    string name;

    //parameterized constructor
    female(int height ,  string name){
        this->height = height;
        this->name = name;
    }

    void print(){
        cout<<"height of female = "<<this->height<<endl;
        cout<<"height of female = "<<this->name<<endl;
    }
};
//copyconstructor
class other{
    public:
    int height;
    string name;

    //parameterized constructor._._.
    other(int height , string name){
        this->height=height;
        this->name=name;
    }
    //making copy constructor._._.
    other(const other &third){
        this->height=third.height;
        this->name=third.name;  
    }
    void print(){
        cout<<"Height of other = "<<this->height<<endl;
        cout<<"Height of other = "<<this->name<<endl;
    }
};

class macroo{
    public:
    int r;
    int area;
    macroo(int r){
        this->r = r;
        this->area = PI*r*r;
    }
    // int area = PI*r*r;

    void print(){
        cout<<"Area of the circle :- "<<area<<endl;
    }
};
int main()
{
    male m1;
    female f1(164 , "pooja" );
    f1.print();
    other T1(172 , "Alexa");
    T1.print();
    macroo A1(5);
    A1.print();
    macroo A2(1);
    A2.print();
    return 0;
}
