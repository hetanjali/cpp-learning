#include <iostream>
using namespace std;
// type arrayName [size];
int main() {
     int roll_no[5]; //declaration of an array of integers with size 5
    roll_no[0] = 101; //assigning values to the array elements
    roll_no[1] = 102;
    roll_no[2] = 103;
    roll_no[3] = 104;
    roll_no[4] = 105; 

    //or we can also initialize the array at the time of declaration
    int marks[5] = {85, 90, 78, 92, 88}; 
    for (int i = 0 ; i < 5; i ++){
        cout << "element at index " << i << " is " << marks[i] << "\n"; 
}
}