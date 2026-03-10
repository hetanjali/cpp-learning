#include <iostream>
using namespace std;

int main() {

    int number, i =1, factorial = 1;
    cout << "Enter a positive integer: ";
    cin >> number;
    while(i <= number) {
        factorial *= i; // factorial = factorial * i;
        i++;
    }
    cout << "Factorial of " << number << " = " << factorial;
        return 0;

        //so this i will explain how it works step by step, let's say the user enters 5, so the loop will run as long as i is less than or equal to 5, so in the first iteration, i is 1, so factorial will be 1 * 1 = 1, then i will be incremented to 2, so in the second iteration, factorial will be 1 * 2 = 2, then i will be incremented to 3, so in the third iteration, factorial will be 2 * 3 = 6, then i will be incremented to 4, so in the fourth iteration, factorial will be 6 * 4 = 24, then i will be incremented to 5, so in the fifth iteration, factorial will be 24 * 5 = 120, then i will be incremented to 6, so the loop will stop and the final value of factorial will be 120.    

}