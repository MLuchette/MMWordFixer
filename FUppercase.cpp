// FUppercase.cpp: implementation of the FUppercase class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#include "FUppercase.h"
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

FUppercase::FUppercase()
{

}

FUppercase::~FUppercase()
{

}

//////////////////////////////////////////////////////////////////////
// IFilter's execute function definition for Uppercase Filter
//////////////////////////////////////////////////////////////////////
void FUppercase::execute(string * word)
{
	for(unsigned i = 0; i< word->size(); i++)
	{
		word->at(i) = toupper(word->at(i));
	}
}