#include <iostream>
using namespace std;

class OhAbstraction{
    private: // Encapsulate the name variable by making it private
    string name;
    public: // Provide public methods to access and modify the name variable
    void getName(string newname){
        name = newname;
    }
    void showName(){
        cout << "name: " << name << endl;
    }
};

int main(){
    OhAbstraction o1;
    o1.getName("Hetu");
    o1.showName();
    return 0;
}