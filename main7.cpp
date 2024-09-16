#include <iostream>
#include <cmath>

//I want you to write a program that asks the user for three names, score these names inside an array and then print the first name. 

using namespace std;

int scoreString(string s){
    int score = 0;
    for(int i = 1; i < s.length(); i++){
        score += abs(s[i] - s[i-1]);
    }
    return score;
}

string highScore(string arr[], int size){
    string curHighest = arr[0];
    for(int i = 1; i < size; i++){
        if(scoreString(arr[i]) > scoreString(curHighest)){
            curHighest = arr[i];
        }
    }
    return curHighest;
}

int main(){
    string names[3];

    cout << "Enter three names seperated by spaces. (no spaces inbetween first and last name)\n";
    cin >> names[0] >> names[1] >> names[2];
    
    for(int i = 0; i < 3; i++){
        cout << "\n" << names[i] << " = " << scoreString(names[i]);
    }

    cout << "\n\nThe highest scored name is: " << highScore(names,3);

    return 0;
}
