#include <iostream>
#include <iomanip>

//I want you to program to print a table that have two rows and two columns,“course ” and “student” are the title.
//Courses are C++ and JavaScript. And the number student for each are 100 and 50. our text labels are left align, and our numbers are right aligned.

using namespace std;

int main(){
    cout << setw(20) << left << "Courses" << right << "Students\n"
    << setw(20) << left << "C++" << right << "100\n"
    << setw(20) << left << "Javascript" << right << "50"
    ;
    return 0;
}
