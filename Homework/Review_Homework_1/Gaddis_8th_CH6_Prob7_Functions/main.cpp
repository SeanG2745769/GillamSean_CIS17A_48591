/*
 * 6.6 Write a function named timesTen. The function should have an integer 
 * parameter named number. When timesTen is called, it should display the 
 * product of number times ten. ( Note: just write the function. Do not write a 
 * complete program.) 
 * 6.7 Write a function prototype for the timesTen function you wrote in Question 6.6.
 */

/* 
 * File:   main.cpp
 * Author: seang
 *
 * Created on September 4, 2021, 4:27 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void timesTen(int);

int main() {
    int number;
    
    cout << "What number? (int): ";
    cin >> number;
    timesTen(number);
    
    return 0;
}

void timesTen(int number) {
    int numberTimesTen;
    numberTimesTen = number*10;
    cout << "Product of number times ten: " << numberTimesTen;
}