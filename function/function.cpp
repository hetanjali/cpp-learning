#include <iostream>
using namespace std;

// function declaration / definition at namespace scope
int maxof(int num1, int num2) {
    int result;
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

int main() {
    int a = 5;
    int b = 10;

    cout << "Greater of " << a << " and " << b << " is "
         << maxof(a, b) << endl;

    return 0;
}
