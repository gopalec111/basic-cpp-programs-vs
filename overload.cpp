#include<iostream>
using namespace std;
class stu
{
	int x;
	int y;
public :
	 void add(int a,int b)
	 {
		x=a;
		y=b;
		int c = a+b;
		 cout<<c<<endl;
	 }
	 char add(char a,char b)
	 {
		 //x=a;
		 //y=b;
		 //char c=x+y;
		 cout<<"x="<<a<<"y="<<b<<endl;
		 return 0;
	 }
	 void show()
	 {
		 cout<<"x = "<<x<<" "<<"Y = "<<y<<endl;

	 }
};
int main()
{
	char a;
	char b;
	stu obj;
	obj.show();
	obj.add(30,50);
	obj.show();
	obj.add('a','b');
	//obj.a=10;
	//cout<<obj.a<<endl;
}
