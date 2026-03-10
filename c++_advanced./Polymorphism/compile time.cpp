#include <iostream>
#include <string>
using namespace std;

class Hello{
    public:
    void hello(){
        cout << "hello";
    }
    void hello(string name){
        cout << "hello " << name;
    }
};

int main()
{
    Hello h1;
    h1.hello();
    h1.hello("hetu");
    return 0;
}
    


