// FEncrypt.h: interface for the FEncrypt class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#if !defined FENCRYPT_CLASS
#define FENCRYPT_CLASS

#include "IFilter.h"

class FEncrypt : public IFilter
{
	public:
		//Implements interface IFilter.
		virtual void execute(string*);
		FEncrypt();
		virtual ~FEncrypt();
};

#endif // !defined FENCRYPT_CLASS