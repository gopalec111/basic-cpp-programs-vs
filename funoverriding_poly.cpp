#include "header.h"

int main()
{
	A obj1;
	B obj2;
	obj2.fun(1);
	//obj1=&obj2;
	obj2.A::fun(1);

	return 0;
}