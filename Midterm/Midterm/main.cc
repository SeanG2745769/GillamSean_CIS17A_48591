/*
 * 
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <new>
#include <sstream>
#include <iomanip>

//This thing
using namespace std;

//Structures
struct Account
{
    int number;
    char name[100];
    char address[100];
    float bal;
    float sBal;
    float check = 0;
    float deposit = 0;
};

struct Pay
{
    char name[100];
    float hours;
    float rate;
    float total;
    string wordPay;
};

//Function Pre
void probOne();
void probTwo();

//Main
int main() 
{
    //Beginning of Do While Loop
    int exit = 0;
    do
    {
        // Take in problem number choice
        int probNum;
        cout << "Which Problem Number?(0 to exit): ";
        cin >> probNum;
        
        //Switch statement to direct to correct problem 
        switch(probNum)
        {
            case 0:
                cout << "That's all folks!";
                exit = 1;
                break;
            case 1:
                cout << "Running Problem 1\n\n";
                probOne();
                break;
            case 2:
                probTwo();
                break;
            case 3:
                
                break;
        }
    }
    while(exit == 0);
    
    return 0;
}

void probOne()
{
    float overdraftFee = 25;
    
    //Array Size
    int numCust;
    cout << "How many customers?(int): ";
    cin >> numCust;
    numCust = numCust - 1; //arrays start at 0
    
    //Error Checking
    if(numCust < 0)
    {
        cout << endl;
        return;
    }
    
    //Create Dynamic Array of Structures
    Account* account = new Account[numCust];
    
    //Collect Information
    int hold;
    stringstream stream;
    string length;
    int numLength;
    int numChecks;
    float value;
    int numDeposits;
    while(numCust >= 0)
    {   
        
        cout << "Hello!\n";
        cout << "Please enter your account number: ";
        cin >> account[numCust].number;
        cin.ignore();
        
        //This part broke my brain for a bit
        //This stakes the number then puts that number into hold
        //then stringstream takes it and puts into lenth as a string
        hold = account[numCust].number;
        stream << hold;
        stream >> length;
        
        //Now that we have a string we can count the string legnth
        numLength = length.length();
        
        //error checking for only an account length of 5
        while((numLength > 5) or (numLength < 5))
        {
            cout << "Invalid!\n";
            cout << "Please enter your account number: ";
            cin >> account[numCust].number;
            cin.ignore();
            hold = account[numCust].number;
            stream << hold;
            stream >> length;
            int numLength = length.length();
        }
        
        //Take in name
        cout << "What is your name?: ";
        cin.getline(account[numCust].name, 100);
        
        //Take in Address
        cout << "What is your address?: ";
        cin.getline(account[numCust].address, 100);
        
        //Take in start balance
        cout << "What is the starting balance?: ";
        cin >> account[numCust].sBal;
        
        //Take in Checks
        cout << "How Many Checks to enter?: ";
        cin >> numChecks;
        for(int i = numChecks; i > 0; i--)
        {
            cout << "Value of check?: ";
            cin >> value;
            account[numCust].check = account[numCust].check + value;
        }
        
        //Take in deposits
        cout << "How many deposits to enter?: ";
        cin >> numDeposits;
        for(int i = numDeposits; i > 0; i--)
        {
            cout << "Value of Deposit?: ";
            cin >> value;
            account[numCust].deposit = account[numCust].deposit + value;
        }
        
        //Calculate Balance
        account[numCust].bal = account[numCust].sBal + account[numCust].deposit
                - account[numCust].check;
        
        cout << fixed <<setprecision(2) <<  "Balance = $" << account[numCust].bal
                << endl;
        if(account[numCust].bal < 0)
        {
            account[numCust].bal = account[numCust].bal - overdraftFee;
            cout << "Your account balance was overdraft and a $25 fee has"
                    " been added\n";
            cout << "New Balance = $" << account[numCust].bal;
        }
        cout << endl;
        numCust--;
    }
    
    //Garbage collection
    delete[] account;
}

void probTwo()
{
    int numE;
    cout << "How many employees?(int): ";
    cin >> numE;
    cin.ignore();
    
    Pay* pay = new Pay[numE-1];
    
    for(int i = 0; i < numE; i++)
    {
        invalid:
        cout << "Employee Name?: ";
        cin.getline(pay[i].name, 100);
        cout << "Hours Worked?: ";
        cin >> pay[i].hours;
        cout << "Rate of Pay?: ";
        cin >> pay[i].rate;
        //I would argue that using goto is probably the simplest way to do this
        //despite it probably not being considered best practice so i will just
        //use a goto for the error checking...... 
        if((pay[i].hours < 0) or (pay[i].hours < 0))
        {
            cout << "No Negatives try again.\n\n";
            goto invalid;
        }
        pay[i].total = pay[i].hours * pay[i].rate;
        
    }
    
    
    
    for(int i = 0; i < numE; i++)
    {
        cout << fixed << setprecision(2);
        cout << "___________________________________________________________\n"
             << "| Some Company                                     " << i <<endl                                             
             << "| some Address                                            |\n"
             << "| ###-###-####                         Date mm/dd/yyyy    |\n"
             << "|                                                         |\n"
             << "|Pay to : " << pay[i].name << "        $" << pay[i].total <<endl
             << "|"
    }
    
    delete[] pay;
}