#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int input;
    const int min = 1;
    const int max = 6;

    while(input != 0){
        cout << "Type \"1\" to roll a die, and type \"0\" to stop.\n";
        cin >> input;
        switch (input){
        case 1:
            cout << "\nYou rolled a " << (rand()%(max-min+1))+min << "\n\n";
            break;
        
        case 0:
            cout << "\nDid you know 99 percent of gamblers quit before they hit it big?.";
            break;

        default:
            cout << input <<" is not a valid input.\n\n";
            break;
        }
    }

    return 0;
}
