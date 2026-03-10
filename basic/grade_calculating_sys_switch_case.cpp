#include <iostream>
using namespace std;

int main() {
    char grade ;
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade ;
    

    switch(grade) {
        case 'A' : 
            cout << "excellent" << endl;
            break;
        case 'B' :
            cout << "good" << endl;
            break;
        case 'C' :
            cout << "average" << endl;
            break;
        case 'D' :
            cout << "below average" << endl;
            break;
        case 'F' :
            cout << "fail" << endl;
            break;
        default :
            cout << "invalid grade" << endl;    
    }
    cout << "your grade is : " << grade << endl;
    return 0;
}