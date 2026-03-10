#include <iostream>
using namespace std;

class ohabstarction {
    private:
    string name;
    public:
    void getname(string newname){
        name = newname;
    }
    void showname(){
        cout << "name: " << name << endl;
    }
};

int main(){
    ohabstarction o1;
    o1.getname("Hetu");
    o1.showname();
    return 0;
}