/*
 *  What will the following program display? 
 */

/* 
 * File:   main.cpp
 * Author: seang
 *
 * Created on September 4, 2021, 2:04 PM
 */

#include <iostream> 
using namespace std; 
int main() 
 { 
 int integer1, integer2; 
 double result; 
 integer1 = 19; 
 integer2 = 2; 
 result = integer1 / integer2; 
 cout << result << endl; 
 result = static_cast<double>(integer1) / integer2; 
 cout << result << endl; 
 result = static_cast<double>(integer1 / integer2); 
 cout << result << endl; 
 return 0; 
 }