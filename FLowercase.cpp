// FLowercase.cpp: implementation of the FLowercase class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#include "FLowercase.h"
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

FLowercase::FLowercase()
{

}

FLowercase::~FLowercase()
{

}

//////////////////////////////////////////////////////////////////////
// IFilter's execute function definition for Lowercase Filter
//////////////////////////////////////////////////////////////////////
void FLowercase::execute(string * word)
{
	for(unsigned i = 0; i< word->size(); i++)
	{
		word->at(i) = tolower(word->at(i));
	}
}