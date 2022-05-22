#include <iostream>
using namespace std;
class base
{
public:
	virtual void show()
	{
		
		cout<<"base fun"<<endl;
	}
	base(){cout<<"base ctor"<<endl;}
};
	class d: public base
	{
	public:
		void show()
		{
			
			cout<<"d fun"<<endl;
		}
		d(){cout<<"d ctor"<<endl;}
	};

int main()
{
 base *objptr;
 d dobj;
 objptr=&dobj;
 objptr->show();
 return 0;
}
