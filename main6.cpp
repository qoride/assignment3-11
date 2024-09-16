#include <iostream>

// I want you to write a program that asks the user a series of questions, like street, city, state and zip code, and then prints the user's address using this format.
//Street
//City,state,zipcpde.

using namespace std;

int main(){
    string street,city,state;
    int zip;

    cout << "Enter your street: ";
    getline(cin, street);
    cout << "\nEnter your city: ";
    getline(cin, city);
    cout << "\nEnter your state: ";
    getline(cin, state);
    cout << "\nEnter your zip code: ";
    cin >> zip;

    cout << "\n\nYour address:\n" << street << "\n" << city << ", " << state << " " << zip;
    
    return 0;
}
