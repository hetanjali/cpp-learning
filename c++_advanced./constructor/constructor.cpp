#include <iostream>
using namespace std;

class Heyconstructor{
    public:
        Heyconstructor(){ 
            cout << "This is a constructor" << endl;
        }
};

int main(){
    Heyconstructor hi; // When this object is created, the constructor will be called automatically and print the message
}