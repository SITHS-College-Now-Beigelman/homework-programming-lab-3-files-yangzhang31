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
    outFile.open("outDataOne.txt"); //Creates/Opens the file named "outData.txt"

    inFile >> intitalBalance;
    outFile << "Bank Balance: " << intitalBalance;

    outFile << endl; //Seperates the output to make it more readable
    outFile << "____________________________________" << endl;
    outFile << endl;
    outFile << fixed << setprecision(2) << endl; //Makes the decimal place round to the second place

    //For loop that runs 7 times
    for (int i = 0; i <= 6; i++) {

        inFile >> transactionType;
        
        if (transactionType == 'W') //If the transaction withdrawal:
        {
            inFile >> costOfTransaction; //inputs the cost of the transaction
            intitalBalance = intitalBalance - costOfTransaction; //The current balance is equal to the intital balance minus the cost of transaction
            withdrawal = withdrawal + costOfTransaction;

            outFile << fixed << setprecision(2) << endl;
            outFile << "Balance after withdrawal of " << costOfTransaction << ": $ " << intitalBalance << endl; //Prints the balance after the transaction

            outFile << endl; //Seperates the output to make it more readable
            outFile << "____________________________________" << endl;
            outFile << endl;
        }

        if (transactionType == 'D') //If the transaction deposit:
        {
            inFile >> costOfTransaction; //inputs the cost of the transaction
            intitalBalance = intitalBalance + costOfTransaction; //The current balance is equal to the intital balance minus the cost of transaction
            deposit = deposit + costOfTransaction;

            outFile << fixed << setprecision(2) << endl;
            outFile << "Balance after deposit of" << costOfTransaction << " : $ " << intitalBalance << endl; //Prints the balance after the transaction

            outFile << endl; //Seperates the output to make it more readable
            outFile << "____________________________________" << endl;
            outFile << endl;
        }
    }

    //Printing the total withdrawal and deposit amounts for the day
    outFile << "The total withdrawal amount today is $" << withdrawal << " and the total deposit amount today is $" << deposit << endl;
    outFile << "The final bank balance today is $" << intitalBalance << endl;

    inFile.close(); //Close the infile
    outFile.close(); //Close the outfile

    return 0;

}

/*
Bank Balance: 5000
____________________________________



Balance after withdrawal of 200.00: $ 4800.00

____________________________________


Balance after withdrawal of 800.00: $ 4000.00

____________________________________


Balance after withdrawal of 40.00: $ 3960.00

____________________________________


Balance after deposit of90.00 : $ 4050.00

____________________________________


Balance after deposit of100.00 : $ 4150.00

____________________________________


Balance after deposit of1000.00 : $ 5150.00

____________________________________


Balance after withdrawal of 20.00: $ 5130.00

____________________________________

The total withdrawal amount today is $1060.00 and the total deposit amount today is $1190.00
The final bank balance today is $5130.00
*/