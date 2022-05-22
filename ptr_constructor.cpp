#include "head1.h"
class A
{
	int a;
	int *b;
public:
	A(){b=new int;}
	A(const A &obj)
	{
		a=obj.a;
		b=new int;
		//a=obj.a;
		//b=obj.b;
			*b=*(obj.b);
	}
	void setdata(int x,int y)
	{
		a=x;
		*b=y;
	}
public:
	void show()
	{
		cout<<"a value="<<a<<"*b value="<<*b<<endl;
	}
};
int main()
{
	A obj;
	obj.setdata(10,20);
		A obj1=obj;
		obj.show();
		obj1.show();
		return 0;
}
