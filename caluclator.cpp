#include<iostream>
using namespace std;
int main()
{
	int s,sum,sub,div,mul,mdiv,a,b,i=1;
	cout<<"*****selction******\n";
	while(i>0)
	{
	cout<<"1.sum 2.sub 3.mul 4.div 5.mdiv"<<endl;
	cin>>s;
	cout<<"enter a and b values"<<endl;
	cin>>a;
	cin>>b;
		switch(s)
		{
		case 1:
			{
				sum=a+b;
				cout<<"sum value is"<<sum<<endl;
				i=0;
				break;
			}
		case 2:
			{
				sub=a-b;
				cout<<"sub value is"<<sub<<endl;
				break;
			}
		case 3:
			{
				mul=a*b;
				cout<<"mul value is"<<mul<<endl;
				break ;
			}
		case 4:
			{
				if(b==0)
				{
					cout<<"b is 0"<<endl;
				}
				else
				{
				div=a/b;
				cout<<"div value is"<<div<<endl;
				}
				break;
			}
		case 5:
			{
				mdiv=a%b;
				cout<<"mdiv value"<<mdiv<<endl;
				break;
			}
		default :
			{
				i=0;
				break;
			}
		}
	}
}