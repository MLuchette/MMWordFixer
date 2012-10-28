// LCaseFactory.h: interface for the LCaseFactory class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#if !defined LCASEFACTORY_CLASS
#define LCASEFACTORY_CLASS

#include "IFactory.h"
class IFilter;

class LCaseFactory : public IFactory
{
	public:
		//Method NewFilter, which takes no arguments and returns a pointer to an IFilter
		IFilter * NewFilter();
		LCaseFactory();
		virtual ~LCaseFactory();
};

#endif // !defined LCASEFACTORY_CLASS