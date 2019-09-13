// FinanceConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <array>



using namespace std;

string parseCommand(string);
string help(string);


string sUserInput = "";

// Program entry point
int main(int argc, char* argv[])
{
	// Intro message
	cout << "This is a console application for finance." << endl;
	cout << "Type \"--help\" for a list of commands or \"quit\" to exit." << endl;

	// Main loop 
	while (sUserInput != "over")
	{
		cin >> sUserInput;
		if (sUserInput != "over") 
		{
			cout << parseCommand(sUserInput);
		}

	}

	cout << "goodbye." << endl;
	
	return 0;
}

// Provides user with help options 
string help(string str)
{
	return "These are the current options: \nYou have entered \"" + str + "\"\n";

	
}

// Reads user input
string parseCommand(string str)
{
	if (str == "--help") return help(str);

	return "\"" + str + "\" is not a valid command. \nType \"--help\" for a list of commands or \"quit\" to exit.\n";
}

