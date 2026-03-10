#include <iostream>
using namespace std;

class Hello{
    public:
    void hello(){
        cout << "hello from the base.";
    }
};

class HelloAgain : public Hello{
    public:
    void hello(){ //contains the same function as the base class, thus it will override the base class function
        cout << "hello from the derived.";
    }
};

int main(){
    HelloAgain h1;
    h1.hello();
}