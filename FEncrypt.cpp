// FEncrypt.cpp: implementation of the FEncrypt class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#include <iostream>
#include "FEncrypt.h"

using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

FEncrypt::FEncrypt()
{

}

FEncrypt::~FEncrypt()
{

}

//////////////////////////////////////////////////////////////////////
// IFilter's execute function definition for Encrypt Filter
//////////////////////////////////////////////////////////////////////
void FEncrypt::execute(string * word)
{
	for(unsigned i = 0; i< word->size(); i++)
	{
		if(word->at(i) == 'a' || word->at(i) == 'A')
			word->at(i) = '9';
		else if(word->at(i) == 'e' || word->at(i) == 'E')
			word->at(i) = '8';
		else if(word->at(i) == 'i' || word->at(i) == 'I')
			word->at(i) = '1';
		else if(word->at(i) == 'o' || word->at(i) == 'O')
			word->at(i) = '0';
		else if(word->at(i) == 'u' || word->at(i) == 'U')
			word->at(i) = '2';
		else
			word->at(i) = word->at(i);
	}
}