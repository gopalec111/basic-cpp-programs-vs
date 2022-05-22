#include<iostream>
using namespace std;
class base
{
	int a;
	int b;
public:
	base(int x,int y){a=x;b=y;}
	base(const base &obj)
	{
		a=obj.a;
		b=obj.b;
	}
public:
	void display()
	{
		cout<<"a value"<<a<<"b value"<<b<<endl;
	}
};
	int main()
	{
		base obj(10,5);
		//base obj1;
		base obj2=obj;
		obj2.display();
		obj.display();
		return 0;
	}
