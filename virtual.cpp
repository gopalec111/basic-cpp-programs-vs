#include<iostream>
using namespace std;
class  A
{
public:
	virtual void print()=0;
		//cout<<"base class print"<<endl;
	 void show()
	{
		cout<<"base clas  show"<<endl;
	}
};
class b:public A
{
public:
	void print()
	{
		cout<<"derive class print"<<endl;
	}
	void show()
	{
		cout<<"derived class show"<<endl;
	}
};
int main()
{
	A *obj;
	b obj1;
	obj=&obj1;
	obj->print();
	//obj->show();
	obj1.A::show();
}