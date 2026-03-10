#include <iostream>
#include <string>
using namespace std;

class Hello{
    public :
    virtual void hello(){ // Mark the hello function as virtual to enable runtime polymorphism
    cout << "hello";
}
};

class HelloAgain : public Hello{
    public :
    void hello(){ 
        cout << "hello again";
    }
};

int main()
{
    Hello* h1; // Create a pointer of type Hello
    HelloAgain h2; // Create an object of type HelloAgain
    h1 = &h2; // Point h1 to the object h2
    h1->hello(); // Call the hello function using the pointer h1, 
    //-> this will call the hello function 

    return 0;
}
