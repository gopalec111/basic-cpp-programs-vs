#include<iostream>
using namespace std;
class base
{
public:
	void show(){cout<<"heloo"<<endl;}
};
int main()
{
	unique_ptr<base>p1(new base);
	p1->show();
	unique_ptr<base>p2=move(p1);
	p2->show();
}