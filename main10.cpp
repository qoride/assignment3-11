#include <iostream>

//Write a program that calculates the commission.

using namespace std;

int main(){
    const int min = 10000;
    const int max = 15000;
    int sales, rate = 10;

    cout << "Enter sales: ";
    cin >> sales;
    if(sales >= min){rate += 5;}
    if(sales > max){rate += 5;}
    cout << "\n\nYour commission rate is: " << rate << "%";

    return 0;
}