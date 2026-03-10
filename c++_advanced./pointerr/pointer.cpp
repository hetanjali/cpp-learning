#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *b = &a;
    cout << *b << endl;// Dereference the pointer to print the value of a
    cout << b << endl;// Print the address stored in pointer b (address of a)
    cout << &a; // Print the address of a directly, should be the same as b
    return 0;
}
