/*
 * Write an if statement that performs the following logic: if the variable sales 
 * is greater than 50,000, then assign 0.25 to the commissionRate variable, and 
 * assign 250 to the bonus variable.
 */

/* 
 * File:   main.cpp
 * Author: seang
 *
 * Created on September 4, 2021, 2:31 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
    float variableSalesValue, commissionRate, bonus;
    float variableSalesUp = 50000;
    
    cout <<"What is Variable Sales Value? (float): ";
    cin >> variableSalesValue;
    
    if(variableSalesValue > variableSalesUp){
        commissionRate = 0.25;
        bonus = 250;
        cout << "Commission Rate Set to: " << commissionRate << endl;
        cout << "Bonus Rate Set to: " << bonus;
    }
    
    return 0;
}

