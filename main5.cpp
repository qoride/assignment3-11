#include <iostream>

//I want you to find the size and limits of short and double data types on your machine.

using namespace std;

int main(){
    short shortVal;
    double doubleVal;

    cout << "Size of short is: " << sizeof(shortVal) << " bytes\n"
    << "Size of double is: " << sizeof(doubleVal) << " bytes"
    ;

    return 0;
}
