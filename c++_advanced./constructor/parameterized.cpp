#include <iostream>
using namespace std;

class Heyconstructor{
    public:
        int num;
        Heyconstructor(int n){ // Parameterized constructor that takes an integer argument
            num = n; // Initialize the member variable num with the value of n
            cout << "hi! for the " << num << " time" << endl; // Print a message indicating how many times the constructor has been called
        }
};

int main(){
    Heyconstructor hi1(1); // Create an object hi1 of the Heyconstructor class, passing 1 to the parameterized constructor
    Heyconstructor hi2(2); // Create another object hi2, passing 2 to the constructor
    Heyconstructor hi3(10); // Create a third object hi3, passing 3 to the constructor
    return 0;
}