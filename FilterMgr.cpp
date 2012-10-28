// FilterMgr.cpp: implementation of the FilterMgr class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#include "FilterMgr.h"
#include "FEncrypt.h"
#include "FUppercase.h"
#include "FLowercase.h"
#include "UCaseFactory.h"
#include "LCaseFactory.h"
#include "EncryptFactory.h"
#include "IFactory.h"

using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

FilterMgr::FilterMgr()
{

}

FilterMgr::~FilterMgr()
{

}

//////////////////////////////////////////////////////////////////////
// getChoices function definition. Returns a list of valid filters.
//////////////////////////////////////////////////////////////////////
std::string FilterMgr::getChoices()
{
	string choices = "\n\tuppercase\n\tlowercase\n\tencrypt\n";

	return choices;
}

//////////////////////////////////////////////////////////////////////
// selectFilter function definition. Returns a pointer to an IFilter
//////////////////////////////////////////////////////////////////////
IFactory* FilterMgr::selectFilter(string choice)
{
	IFactory * filter;

	if(choice == "uppercase")
	{
		filter = new UCaseFactory();		
	}
	else if(choice == "lowercase")
	{
		filter = new LCaseFactory();	
	}
	else if(choice == "encrypt")
	{
		filter = new EncryptFactory();	
	}
	else if(choice == "q")
	{
		return NULL;
	}
	else
	{
		return NULL;
	}
	return filter;
}