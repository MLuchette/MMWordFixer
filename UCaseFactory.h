// UCaseFactory.h: interface for the IFactory class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#if !defined UCASEFACTORY_CLASS
#define UCASEFACTORY_CLASS

#include "IFactory.h"

class IFilter;

class UCaseFactory : public IFactory
{
	public:
		//Method NewFilter, which takes no arguments and returns a pointer to an IFilter
		IFilter * NewFilter();
		UCaseFactory();
		virtual ~UCaseFactory();
};

#endif // !defined UCASEFACTORY_CLASS