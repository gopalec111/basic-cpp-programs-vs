#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int>gopal{1,2,3,4,5};
	for(const int &gopal :gopal)
	{
		cout<<"gopal="<<gopal;
	}
	gopal.push_back(6);
	gopal.push_front(0);
	for(const int &gopal :gopal)
	{
		cout<<"\n"<<"gopal="<<gopal<<endl;
	}
	cout<<"access elements in different ways";
	cout<<"\n"<<gopal.front()<<endl;
	cout<<gopal.back()<<endl;
	cout<<gopal[0]<<endl;
	cout<<gopal.at(1);
	gopal.at(1)=8;
	gopal.pop_back();
	gopal.pop_front();
		for(const int &gopal :gopal)
	{
		cout<<"\n"<<"gopal="<<gopal<<endl;
	}
	
	
}
