#include<iostream>
using namespace std;
class A
{
	int x,y,z;
public:
	void show(int u)
	{
		cout<<x<<" "<<y<<endl;
	}
	A(int a,int b,int c){x=a;y=b;z=c;}
	A(int u,int b){x=u;y=b;}
	public:
	void show()
	{
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
	//A(){x=a;y=b;z=c;cout<<x<<"second construct"<<y<<" "<<z<<endl;}
};