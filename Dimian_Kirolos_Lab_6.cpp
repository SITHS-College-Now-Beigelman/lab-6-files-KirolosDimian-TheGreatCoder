// Kirolos Dimian -- Yang Zhang
// Lab 6
// 10/15/24

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    //Declare variables
    ifstream inFile; //input file stream variable
    ofstream outFile; //output file stream variable
    int integer1, integer2; // variable to store the integer
    int integerSum; // variable to store the sum
    char character; // variable to store the character
    int charAscii; // variable to store the value of the character
    string sentence; // variable to store the sentence
    
    inFile.open("inData.txt"); // Opens the file named "inData.txt"
    outFile.open("outData.out"); // Opens the file name "outData.txt"
    
    cout << "Processing data" << endl; // prints this message

    inFile >> integer1 >> integer2; // Gets the data from the integers
    integerSum = integer1 + integer2; // Calculates the sum of the integers
    outFile << "The sum of the integers " << integerSum << endl; // Prints the sum of the integers
    
    inFile >> character; // Gets the data from the character
    charAscii = character; // Makes the character have its numerical ASCII value
    outFile << "The ASCII value of " << character << " is " << charAscii << endl; // Prints the value of the character

    inFile >> sentence; // Gets the data from the sentence
    outFile << sentence << endl; // Prints the sentence

    inFile.close(); // Closes the files
    outFile.close(); // Closes the files
    
    return 0; // ends the code
}