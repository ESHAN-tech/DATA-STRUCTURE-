#include <iostream>
using namespace std;
#define PI 3.14 //object-like Macros
class Objectmacros{
    public:
    int r;
    int area;
    Objectmacros(int r){
        this->r = r;
        this->area = PI*r*r;
    }
    void print(){
        cout<<"Area of the circle :- "<<area<<endl;
    }
};
class functionMacro{
    public:
    int

};
int main()
{
    return 0;
}





/*
1. Object-like Macros (Used for defining constants) ✅

2. Function-like Macros (Used as inline functions)

3. Chain Macros (One macro calling another)

4. Multi-line Macros (Using \ to write macros on multiple lines)

5. Conditional Compilation Macros (#ifdef, #ifndef, #endif)
*/