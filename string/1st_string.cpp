#include <iostream>
#include <string>          // <string>, not <string.h>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    size_t len;

    // assign/copy
    str3 = str1;
    cout << "str3 = str1 : " << str3 << endl;

    // concatenate
    str1 += str2;          // or str1.append(str2);
    cout << "str1 += str2 : " << str1 << endl;

    // length
    len = str1.length();   // or str1.size()
    cout << "str1.length() : " << len << endl;

    return 0;
}