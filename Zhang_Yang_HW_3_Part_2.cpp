//Yang Zhang
//Homework 3 Part 1
//10.15.2024

#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

using namespace std;

int main() {
    //Variables
    ifstream inFile; //input file stream variable   
    ofstream outFile; //output file stream variable
    float intitalBalance; //Bank balance at the start of the day
    int amountOfTransactions; //Amount of transactions per day.
    float costOfTransaction; 
    char transactionType; //The card type; changes on user input
    float withdrawal, deposit;

    //All the cin functions were replaced with inFile and all the cout statements were replaced with outFile
    inFile.open("transactions.txt"); //Opens the file named "transactions.txt"
    outFile.open("outDataTwo.txt"); //Creates/Opens the file named "outData.txt"

    inFile >> intitalBalance;
    outFile << fixed << setprecision(2) << endl; //Makes the decimal place round to the second place

    outFile << "STARTING BALANCE: $" << intitalBalance << endl; //Prints starting bank balance
    outFile << setfill('.') << endl; //Sets the auto fill to the '.' character
    outFile << "TYPE" << setw(10) << "AMOUNT" << setw(36) << "BALANCE" << endl;

    //Loop for the amount of transactions per day
    while (!inFile.eof()) { //the eof outputs a value of true when its reading a valid line inside the text file, and when it reaches the end of the file the while loop ends too.

        inFile >> transactionType;
        
        if (transactionType == 'W') //If the transaction withdrawal:
        {
            inFile >> costOfTransaction; //inputs the cost of the transaction
            intitalBalance = intitalBalance - costOfTransaction; //The current balance is equal to the intital balance minus the cost of transaction
            amountOfTransactions = amountOfTransactions - 1; //This is to make sure the loop doesn't loop forever
            withdrawal = withdrawal + costOfTransaction;

            outFile << fixed << setprecision(2) << endl;
            outFile << "W" << setw(10) << costOfTransaction << setw(36) << intitalBalance << endl;
        }

        if (transactionType == 'D') //If the transaction deposit:
        {
            inFile >> costOfTransaction; //inputs the cost of the transaction
            intitalBalance = intitalBalance + costOfTransaction; //The current balance is equal to the intital balance minus the cost of transaction
            amountOfTransactions = amountOfTransactions - 1; //This is to make sure the loop doesn't loop forever
            deposit = deposit + costOfTransaction;

            outFile << fixed << setprecision(2) << endl;
            outFile << "D" << setw(10) << costOfTransaction << setw(36) << intitalBalance << endl;
        }
    }

    //Printing the total withdrawal and deposit amounts for the day
    outFile << endl;
    outFile << "ENDING BALANCE: $" << intitalBalance << endl; //The final balance after all the transactions
    outFile << "TOTAL WITHDRAWALS: $" << withdrawal << endl; //Amount of money withdrawn 
    outFile << "TOTAL DEPOSITS: $" << deposit << endl; //Amount of money deposited 

    inFile.close(); //Close the infile
    outFile.close(); //Close the outfile

    return 0;

}
