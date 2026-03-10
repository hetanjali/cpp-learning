#include <iostream>
using namespace std;

//global variables 
int p = 43;

int main() {
    cout << "hello hetu""\n"; //print "hello hetu" to the console
    

//variable and data types


string firstname = "hetu"; //string variable to store the first name
int age = 20; //integer variable to store the age
double height = 1.75; //double variable to store the height in meters
bool isStudent = true; //boolean variable to indicate if the person is a student    
 
cout<< firstname << "\n"; //to print in new line use \n
cout<< age << "\n";
cout<< height << "\n";
cout<< isStudent << "\n";


//local variables
int a,b,c;

a= 10;
b= 20;

c=a+b;
cout<< c << "\n";
cout<< p << "\n"; //accessing global variable p


//cin with >> operator to take input from the user
string name;
cout << "Enter your name: ";
cin >> name;
cout << "Hello, " << name << "!" << endl; //greet the user with their name

return 0;

}