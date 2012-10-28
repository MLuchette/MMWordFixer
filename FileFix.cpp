// FileFix.cpp: implementation of the FileFix class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#include "FileFix.h"
#include "IFactory.h"
#include "IFilter.h"
#include <stdio.h>
#include <fstream>
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

FileFix::FileFix(IFactory * factory)
{
	myFactory = factory;
}

FileFix::FileFix()
{
}

FileFix::~FileFix()
{

}

//////////////////////////////////////////////////////////////////////
// FileFix's ConvertFile Function for filtering a file
//////////////////////////////////////////////////////////////////////
void FileFix::ConvertFile(string fileName)
{
	string line;
	ifstream myInputFile(fileName);
	ofstream myOutputFile(fileName+".fix.txt");
	IFilter * myFilter = myFactory->NewFilter();
	if(myInputFile.is_open())
	{
		while(myInputFile.good())
		{
			getline(myInputFile, line);
			myFilter->execute(&line);
			myOutputFile << line;
		}
	}
	myOutputFile.close();
	myInputFile.close();
}