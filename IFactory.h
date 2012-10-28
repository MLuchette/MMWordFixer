// IFactory.h: interface for the IFactory class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#if !defined IFACTORY_CLASS
#define IFACTORY_CLASS

#include <iostream>

class IFilter;

class IFactory
{
	public:
		//Method NewFilter, which takes no arguments and returns a pointer to an IFilter
		virtual IFilter * NewFilter() = 0;
		virtual ~IFactory() { };
};

#endif // !defined IFACTORY_CLASS