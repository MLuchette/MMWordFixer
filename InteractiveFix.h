// InteractiveFix.h: interface for the InteractiveFix class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#if !defined INTERACTIVEFIX_CLASS
#define INTERACTIVEFIX_CLASS

class IFactory;
class IFilter;

class InteractiveFix
{
	public:
		//Method NewFilter, which takes no arguments and returns a pointer to an IFilter
		void DoInteractiveSession();
		InteractiveFix(IFactory *);
		InteractiveFix();
		virtual ~InteractiveFix();
	private:
		IFilter * myFilter;
};

#endif // !defined INTERACTIVEFIX_CLASS