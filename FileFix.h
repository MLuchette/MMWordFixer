// FileFix.h: interface for the FilterMgr class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#if !defined FILEFIX_CLASS
#define FILEFIX_CLASS

#include <string>
#include <iostream>
using namespace std;

class IFactory;

class FileFix  
{
	public:
		void ConvertFile(string);
		FileFix(IFactory *);
		FileFix();
		~FileFix();
	private:
		IFactory * myFactory;
};

#endif // !defined FILEFIX_CLASS
