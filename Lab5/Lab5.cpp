// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> encryption = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','C','E' };  //paste from the Lab5 instructions

char cipherTranslation(char a) {
    if (a >= 65 && a <= 90) {   
        return encryption[a - 65];  //this section will sort through the uppercase letters
    }
    else if (a >= 97 && a <= 122) {
        char upperCaseLetter = a - 32;
        char upperCaseCode = encryption[upperCaseLetter - 65];  //this section will convert the lowercase letters to uppercase and back with encryption
        return upperCaseCode + 32;
    }
    else {
        return a;   //will handle all other cases and just return what was given/test case
    }
}

string stringTranslation(const string & input) {
    string encryptedText;
    for (char a : input) {
        encryptedText.push_back(cipherTranslation(a));
    }
    return encryptedText;
}

string userInput() {
    string text;
    cout << "Enter what you would like to have encrypted: ";
    getline(cin, text); //paste from the Lab5 instructions
    return text;
}


int main()
{
    string input = userInput();
    string cipheredText = stringTranslation(input);
    cout << "Encryption: " << cipheredText << endl;
    return 0;   //0 will end the program
}
