#include <iostream>
using namespace std;
//constructor
class game{
    public:
    //making default constructor 
    game(){
        cout<<"Game object is created!"<<endl;
    }
};

class game2{
    public:
    //making parameterised constructor....
    char level;
    int health;
    
    game2(char level , int health){
        this->level = level;
        this->health = health;
    }
    void print(){
        cout<<"level = "<<level<<endl;
        cout<<"health = "<<health<<endl;
    }

};

class game3{
    public:
    //making parameterised constructor . . .
    string name;
    int age;

    game3(int age , string name){
        this->age=age;
        this->name=name;
    }
    //making copy constructor 
    game3(const game3 &temp){
        cout<<"This is copy constructor "<<endl;
        this->age = temp.age;
        this->name= temp.name;
    }
    void print(){
        cout<<"Age = "<<age<<endl;
        cout<<"Name = "<<name<<endl;
    }
};

int main()
{
    game g1;
    game2 g2('A' , 55);
    g2.print();

    cout<<"This constructor is get copied"<<endl;
    game3 harsh(22, "Harsh");
    harsh.print();

    //copy constructor
    game3 eshan(harsh);
    eshan.print();

    return 0;
}









// #include <iostream>
// #include <string>
// using namespace std;

// class voter{
//     public:
//     string name;
//     int age;
// };
// int main()
// {
//     //static allocation
//     voter v1 ;

//     v1.name="Divyansh";
//     v1.age=24;

//     cout<<"Name = "<<v1.name<<endl;
//     cout<<"Age = "<<v1.age<<endl;

//     //dynamic allocation

//     voter* v2 = new voter;
//     v2->name="shanvi";
//     v2->age=24;

//     cout<<"Name = "<<v2->name<<endl;
//     cout<<"Age = "<<v2->age<<endl;

//     return 0;
// }






// #include <iostream>
// using namespace std;

// class game{
//     public:
//     int health;
//     char level;
// };

// int main()
// {
//     //static allocation . . . .
//     cout<<"static allocation "<<endl;
//     game coco;
//     coco.health = 5;
//     coco.level = 'C';
//     cout<<"health = "<<coco.health<<endl;
//     cout<<"Level = "<<coco.level<<endl;

//     //dynamic allocation 
//     cout<<"dynamic allocation "<<endl;
//     game *jojo = new game;
//     // int* arr = new int()
//     jojo-> level = 'D';
//     jojo->health = 6;
//     cout<<"health = "<<jojo->health<<endl;
//     cout<<"Level = "<<jojo->level<<endl;
//     return 0;
// }
