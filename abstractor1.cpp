#include<iostream>
using namespace std;
class A 
{
public:
	int a;
	virtual void getname(int z)=0;
};
class B:public A
{
public:
	B(int x){
		a=x;cout<<a<<endl;}
public:
	void getname(int y)
	{
		
		cout<<y<<endl;
	}
};
int main()
{
	B obj(6);
	obj.getname(20);
}


