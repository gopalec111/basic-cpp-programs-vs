#include<iostream>
using namespace std;

class A{
public:
	void fun(int x)
	{
	  cout<<"base class"<<endl;
	}
};
class B: public A
{
public:
	void fun(int x)
	{
		cout<<"derived class"<<endl;
	}
};
