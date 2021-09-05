/*
 * What is the output of the following code? 
 * int values[5], count; 
 * for (count = 0; count < 5; count++) 
 *  values[count] = count + 1; 
 * for (count = 0; count < 5; count++) 
 *  cout << values[count] << endl; 
 */

/* 
 * File:   main.cpp
 * Author: seang
 *
 * Created on September 4, 2021, 4:56 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
int main() { 
    
    int values[5], count; 
    for (count = 0; count < 5; count++) 
        values[count] = count + 1; 
    for (count = 0; count < 5; count++) 
        cout << values[count] << endl; 
    return 0;
}

