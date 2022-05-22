#include <iostream>
using namespace std;
class base
{
	int a,b,c;
public :
	void show()
	{
		cout<<a<<" "<<b<<endl;
	}
	base(int x, int y){a=x;b=y;}
	base(){a=0;b=0;}
	base(int x,int y,int z){x=10;y=20;z=30;a=x;b=y;c=z;}
public:
	void show1()
		{
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
};

int main()
{
	base obj(10,40);
	base obj2;
	base obj3(0,0,0);
	obj.show();
	obj2.show();
	obj3.show1();
}