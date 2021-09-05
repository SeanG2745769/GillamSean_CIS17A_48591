/*
 * Write a for loop that displays every fifth number, zero through 100. 
 */

/* 
 * File:   main.cpp
 * Author: seang
 *
 * Created on September 4, 2021, 3:55 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
int main() {
    float holdNumber;
    float startNumber = 0;
    float endNumber = 100;
    float checkNumber = 5;
    
    for(holdNumber = startNumber; holdNumber < (endNumber+1); holdNumber++){
        if((holdNumber/checkNumber) == static_cast<int>(holdNumber/checkNumber)){
            cout << holdNumber << " ";
        }
    }
    return 0;
}

