#include <iostream>
using namespace std;

class baseclass{
    public: // Base class with public access specifier
    int sum;
    void add(int a, int b){
        sum = a + b; 
    }
};

class derivedclass: public baseclass { 
    public: 
    void showsum(){ 
        cout << sum; 
    }
};

int main(){
    derivedclass d; // Create an object of the derived class
    d.add(4,7); 
    d.showsum();
    return 0;
}