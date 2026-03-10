#include <iostream>
using namespace std;

    class student{
        public:
             int roll_no;
             string name;
             void getinfo(int roll_no, string name){
                 this->roll_no = roll_no; // Use 'this' pointer to refer to the current object's roll_no and name
                 this->name = name;
             }
             void showinfo(){
                cout << "roll no: " << roll_no  << " name: " << name << endl;
             }
    };

int main(){
    student s1; // Create an object of the student class
    s1.getinfo(1, "Alice"); // Call the getinfo method to set the roll number and name for s1
    s1.showinfo(); // Call the showinfo method to display the information of s1
    return 0;
}
