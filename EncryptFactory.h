// EncryptFactory.h: interface for the EncryptFactory class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#if !defined ENCRYPTFACTORY_CLASS
#define ENCRYPTFACTORY_CLASS

#include "IFactory.h"

class IFilter;

class EncryptFactory : public IFactory
{
	public:
		//Method NewFilter, which takes no arguments and returns a pointer to an IFilter
		IFilter * NewFilter();
		EncryptFactory();
		virtual ~EncryptFactory();
};

#endif // !defined ENCRYPTFACTORY_CLASS