// InteractiveFactory.cpp: implementation of the FEncrypt class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#include "InteractiveFix.h"
#include "IFilter.h"
#include "IFactory.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;


//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

InteractiveFix::InteractiveFix(IFactory * filter)
{
	myFilter = filter->NewFilter();
}

InteractiveFix::InteractiveFix()
{
}

InteractiveFix::~InteractiveFix()
{

}

//////////////////////////////////////////////////////////////////////
// IFactory's NewFilter Function for creating a new filter
//////////////////////////////////////////////////////////////////////

void InteractiveFix::DoInteractiveSession()
{
	string word;
	//Prompts the user for a word
	cout << "Please enter a word( q to quit ):\t";
	cin >> word;
	//If the word is "q" the method returns
	while(word != "q")
	{
		//Otherwise it executes myFilter on the word and displays the result
		myFilter->execute(&word);
		cout << "Filtered word is:\t" << word << endl;
		cout << "Please enter a word ( q to quit ):\t";
		cin >> word;
	}
	
}