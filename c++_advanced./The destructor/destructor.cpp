#include <iostream>
using namespace std;

class Heydestructor{
    public:
        string name;
        Heydestructor(string n){ // Parameterized constructor that takes a string argument
            name = n; // Initialize the member variable name with the value of n
            cout << "hi! " << name << endl; // Print a message greeting the name    
        }
        ~Heydestructor(){ // Destructor that is called when an object goes out of scope or is deleted
            cout << "the object was deleted! " << name << endl; // Print a message saying goodbye to the name
        }
};

int main(){
    Heydestructor hi1("Alice"); 
    return 0; // When main returns, the destructors for hi1 and hi2 will be called automatically
}
