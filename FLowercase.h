// FLowercase.h: interface for the FLowercase class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#if !defined FLOWERCASE_CLASS
#define FLOWERCASE_CLASS

#include "IFilter.h"

class FLowercase : public IFilter
{
	public:
		//Implements interface IFilter.
		virtual void execute(string*);
		FLowercase();
		virtual ~FLowercase();
};

#endif // !defined FLOWERCASE_CLASS