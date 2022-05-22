#include<iostream>
using namespace std;
class base{
	int a;
	char c;
	friend void fun();
};
void fun()
{
	base obj;
	obj.a=10;
	obj.c='b';
	cout<<obj.a<<obj.cc<<endl;
}
int main()
{
	base obj1;
	fun();
}