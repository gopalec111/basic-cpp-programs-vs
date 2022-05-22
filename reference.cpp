#include<iostream>
using namespace std;
#include<string>
int main()
{
	int b[4]={10,2,3,3},c=20,d=30;
	string arr[4]={"gk","hi","wel","nic"};
	/*int (&a)[4]=arr;
	cout<<"arr[0]="<<a[0]<<"arr[2]="<<a[2]<<"arr[3]="<<a[3]<<endl;
	for(int i=0;i<4;i++)
	{
		a[i]=b[i];
		cout<<a[i]<<endl;
	}*/
	string x="krish";
	string y="gopal";
    string (&a)[4]=arr;
	x=y;
	a[0]=x;
	cout<<x<<endl<<y<<endl<<a[0]<<endl<<a[1]<<endl<<a[2]<<endl<<a[3]<<endl;
}