#include <iostream>
using namespace std;

class student {
    public:
    virtual void name() = 0; // Pure virtual function, making student an abstract class
};

class Hetu : public student {
    public:
    void name(){
        cout << "Hetu";
    }
};

int main(){
    Hetu h1;
    h1.name(); 
    return 0;   
}