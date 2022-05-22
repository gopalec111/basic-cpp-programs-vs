#include<iostream>
using namespace std;
int main()
{
	int a=10;
	float b=2.222;
	char c='c';
	double d=12.22;
	a=b;
	cout<<"float to int"<<a<<endl;
	a=c;
	cout<<"char to int"<<a<<endl;
	a=d;
	cout<<"double to int"<<a<<endl;
	cout<<"\n"<<"high to low"<<endl;
	a=d;
	cout<<"int to char"<<d<<endl;
	a=a+c;
	cout<<"sum ofint+char"<<a<<endl;
	//b=const cast<int>a;
	cout<<"static cast int to float"<<b<<endl;

}
