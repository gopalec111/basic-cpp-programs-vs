#include<iostream>
using namespace std;
class a
{
public:
 virtual void show()
	{
		cout<<"class a fun"<<endl;
	}
	 a(){cout<<"a constructor"<<endl;}
	~a(){cout<<"a destructor"<<endl;}
	
};
	 class b:virtual public a
	{
	public:
		void show()
		{
			cout<<"class b fun"<<endl;
		}
		 b(){cout<<"b constructor"<<endl;}
		~b(){cout<<"b destructor"<<endl;}
		
	};
	 class c:virtual public a
	{
	public:
		void show()
		{
			cout<<"class c fun"<<endl;
		}
		c(){cout<<"c constructor"<<endl;}
		~c(){cout<<"c destructor"<<endl;}
		
	};
	class d:public b,public c
	{
	public:
		void show()
		{
			cout<<"class d fun"<<endl;
		}
		d(){cout<<"d constructor"<<endl;}
		~d(){cout<<"d destructor"<<endl;}
		
	};

int main()
{
	a *obj;
	d obj1;
	obj=&obj1;
	obj->show();
	return 0;
}