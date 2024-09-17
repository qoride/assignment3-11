#include <iostream>

//write a program that ask the user to enter two values, store the larger value in a separate variable, and then print it on the terminal.
//So first write this program using a typical if statement, then simplify your code using the conditional operator.

using namespace std;

int main(){
    int val1,val2,big;

    cout << "Please enter two values seperated by a space: ";
    cin >> val1 >> val2;

    //typical if statement

    //big = val2;
    //if(val1 > val2){big = val1;}

    //conditional operator
    
    big = (val1 > val2) ? val1 : val2;

    cout << "\n\n" << big << " is the bigger value.";

    return 0;
}
