// WordFix.cpp: Demonstration of the IFactory functionality and MMWordFix program
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#include "FilterMgr.h"
#include "InteractiveFix.h"
#include "FileFix.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	
	FilterMgr filterManager;
	IFactory *factory;
	string modeChoice;
	string filterChoice;
	string myWord;
	string fileName;

	//Prompts the user for a filter name, using the FilterMgr to get the choices.
	cout	<< "Enter your choice of the following filters. (q to quit)\n"
			<< filterManager.getChoices();
	//Accepts a filter name from the user.
	cin >> filterChoice;
	factory = filterManager.selectFilter(filterChoice);
	//If the filter name is not one of the available filters, the user gets the prompt again 
	while(factory == NULL && filterChoice != "q")
	{
		cout << "\nPlease choose a valid option:\n" << filterManager.getChoices();
		cin >> filterChoice;
		factory = filterManager.selectFilter(filterChoice);
	}
	if(factory != NULL)
	{
		//Now the user may repeatedly apply the filter in one of two modes
		//Prompt the user for the mode 'i' or 'f'
		cout << "Would you like to enter interactive fix or file fix mode? (i or f):\t";
		cin >> modeChoice;
		while(modeChoice != "q" && factory != NULL)
		{
			while(factory == NULL && filterChoice != "q")
			{
				cout << "\nPlease choose a valid option:\n" << filterManager.getChoices();
				cin >> filterChoice;
				factory = filterManager.selectFilter(filterChoice);
				if(filterChoice == "q")
					break;
			}
			while((modeChoice != "i") && (modeChoice != "f") && (modeChoice != "q"))
			{
				cout << "Please choose 'i' or 'f' for interactive or file fix mode:\t";
				cin >> modeChoice;
			}
			if(modeChoice == "i")
			{
				InteractiveFix iFix(factory);
				iFix.DoInteractiveSession();
			}
			else if(modeChoice == "f")
			{
				FileFix fFix(factory);
				cout << "What is the name of the file?:\t";
				cin >> fileName;
				ifstream myFile(fileName);
				if(!myFile)
					cout << "File doesn't exist." << endl;
				else
				{
					fFix.ConvertFile(fileName);
					cout << "Filtering your file... done!" << endl << endl;
				}
			}
			//Prompts the user for a filter name, using the FilterMgr to get the choices.
			cout	<< "Enter your choice of the following filters. (q to quit)\n"
					<< filterManager.getChoices();
			//Accepts a filter name from the user.
			cin >> filterChoice;
			factory = filterManager.selectFilter(filterChoice);
			//If the filter name is not one of the available filters, the user gets the prompt again 
			while(factory == NULL && filterChoice != "q")
			{
				cout << "\nPlease choose a valid option:\n" << filterManager.getChoices();
				cin >> filterChoice;
				factory = filterManager.selectFilter(filterChoice);
			}
			if(factory != NULL)
			{
				//Now the user may repeatedly apply the filter in one of two modes
				//Prompt the user for the mode 'i' or 'f'
				cout << "Would you like to enter interactive fix or file fix mode? (i or f):\t";
				cin >> modeChoice;
			}
		}
	}
	return 0;
}