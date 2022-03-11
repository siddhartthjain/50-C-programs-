#include <iostream>
using namespace std;

class SmartPtr {
	int* ptr; // Actual pointer
public:

	 SmartPtr(int *p = NULL)
	  { ptr = p; }

	// Destructor
	~SmartPtr() { delete (ptr); }

	// Overloading dereferencing operator
	int& operator*()
	{ return * ptr; }
};

int main()
{
	SmartPtr p;
	p=new int();
	*p = 20;
	cout << *p;



	return 0;
}
