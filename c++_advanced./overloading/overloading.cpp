#include <iostream>
using namespace std;

void hello(){
    cout << "Hello world!" << endl;
}
void hello(string name){
    cout << "Hello " << name << "!" << endl;
}

// here we have two functions with same name, one of reached except no parameters and another one way, except one parameter
// thus, we can say that the second function overload, the first one.

int main(){
    hello();
    hello("hetu");
    return 0;
}