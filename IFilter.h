// IFilter.h: interface for the FilterMgr class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#if !defined IFILTER_CLASS
#define IFILTER_CLASS

#include <string>
using namespace std;

class IFilter  
{
	public:
		//Has method execute, which takes a string argument and returns nothing.
		virtual void execute(string*) = 0;
		virtual ~IFilter() { };
};

#endif // !defined IFILTER_CLASS
