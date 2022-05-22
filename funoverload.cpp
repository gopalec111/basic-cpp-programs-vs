#include<iostream>
using namespace std;
class test
{
	public:
	int x,y;
	int fun(int a,int b)
	{
		return a+b;
	}
	int fun(int a,int b,int c)
	{
		return a+b+c;
	}
	//void print()
	//{
		//cout<<x<<y<<endl;
	//}
};
int main()
{
	test obj;
	cout<<obj.fun(10,20)<<endl;
	cout<<obj.fun(30,40,50)<<endl;
	//obj.print();
}