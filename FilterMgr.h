// FilterMgr.h: interface for the FilterMgr class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#if !defined FILTERMGR_CLASS
#define FILTERMGR_CLASS

#include <string>
using namespace std;

class IFactory;

class FilterMgr
{
	public:
		//Has method getChoices, which takes no arguments,
		//but returns a string that lists all available filters.
		string getChoices();
		//Has method selectFilter, which takes a string argument
		//and returns a pointer to an IFilter. 
		IFactory * selectFilter(string);
		FilterMgr();
		~FilterMgr();
};

#endif // !defined FILTERMGR_CLASS