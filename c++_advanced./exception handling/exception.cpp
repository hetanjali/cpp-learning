#include <iostream>
using namespace std;

void divide (int num){
    if (num == 0){
        throw "division by zero error"; // Throw an exception if the number is zero
    }
}
int main(){
    divide(0); // Call the divide function with zero to trigger the exception
    try{
        int num = 40/0; // This will throw a division by zero exception
    }
    catch(char*e){ // Catch the exception and print the error message
        cout << e;
    }
}