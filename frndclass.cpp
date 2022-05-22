#include<iostream>
using namespace std;
class base
{
	int a;
	int b;
	friend class derived;
};
class derived:public base
{
	base obj;
public:
	void show()
	{
		obj.a=20;
		obj.b=30;
		cout<<obj.a<<obj.b<<endl;
	}
};
int main()
{
 //base obj1;
 derived obj2;
 obj2.show();
}

