// FUppercase.h: interface for the FUppercase class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#if !defined FUPPERCASE_CLASS
#define FUPPERCASE_CLASS

#include "IFilter.h"

class FUppercase : public IFilter
{
	public:
		//Implements interface IFilter.
		virtual void execute(string*);
		FUppercase();
		virtual ~FUppercase();
};

#endif // !defined FUPPERCASE_CLASS