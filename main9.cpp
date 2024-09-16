#include <iostream>

//Write a program that checks whether an applicant is eligible for a job.
//To be eligible, the applicant must be a US citizen
//and should either have a bachelor's degree or at least two years of experience.

using namespace std;

int main(){
    bool citizen, degree, eligible;
    int experience = -1;
    char input[1];

    while((input[0] == 'Y'||input[0] == 'N') == 0){
        cout << "Are you a U.S. citizen? [Y/N] ";
        cin >> input;
        switch(input[0]){
        case 'Y':
            citizen = true;
            break;

        case 'N':
            citizen = false;
            break;

        default:
            cout << input[0] << " is not a valid input.";
            break;
        }
        cout << "\n\n";
    }
    
    input[0] = 'D';

    while((input[0] == 'Y'||input[0] == 'N') == 0){
        cout << "Do you have a bachelors degree? [Y/N] ";
        cin >> input[0];
        switch(input[0]){
        case 'Y':
            degree = true;
            break;

        case 'N':
            degree = false;
            break;

        default:
            cout << input[0] << " is not a valid input.";
            break;
        }
        cout << "\n\n";
    }

    while(experience < 0){
        cout << "How many years of experiences do you have? ";
        cin >> experience;
        if(experience < 0){
            cout << "\n" << experience << " is an invalid input.\n\n";
        }
    }

    eligible = (citizen)&&(degree||experience>=2);
    string eligibility = "You are ";
    if(eligible == false){eligibility += "not ";}
    eligibility += "eligible.";
    if(eligible == false){
        eligibility += " You are missing: ";
        if(citizen == false){eligibility += "Citizenship";}
        if(degree==false||experience<2){
            eligibility += ", and B.A. or 2 years experience";
        }
        eligibility += ".";
    }

    cout << eligibility;

    return 0;
}