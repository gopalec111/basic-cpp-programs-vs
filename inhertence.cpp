#include<iostream>
using namespace std;
#include<string>
class school
{
public:
	string schoolname;
	int strength;
};
	class tenth
	{
	public:
		string teachername;
		int strength;
	};
	class ninth:public tenth,public school
	{
	public:
		string toppername;
		float percentage;
	};
int main()
	{
		school obj;
		tenth  obj1;
		ninth obj2;
		obj2.schoolname="high school";
		obj.strength=1000;
		obj2.teachername="radha";
		obj1.strength=100;
		obj2.toppername="atchut";
		cin>>obj2.percentage;
		cout<<obj2.schoolname<<endl;
		cout<<obj.strength<<endl;
		cout<<obj2.teachername<<endl;
		cout<<obj1.strength<<endl;
		cout<<obj2.toppername<<endl;
		cout<<obj2.percentage<<endl;
		return 0;
}






