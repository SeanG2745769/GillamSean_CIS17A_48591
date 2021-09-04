/*
 *Problem: Complete the following program skeleton so it asks the user to enter a character. 
Store the character in the variable letter. Use a type cast expression with the 
variable in a cout statement to display the character’s ASCII code on the screen. 
 */

/* 
 * File:   main.cpp
 * Author: seang
 *
 * Created on September 4, 2021, 1:45 P
 *
 */

#include <iostream> 
using namespace std; 
int main() 
 { 
 char letter;
 
 // Finish this program 
 // as specified above. 
 cout << "Please enter a character: ";
 //takes in letter
 cin >> letter;
 //outputs letter's ascii number
 cout << "ASCII: " << static_cast<int>(letter) << endl;
 
 return 0; 
 } 

