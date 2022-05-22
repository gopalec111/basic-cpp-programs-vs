#include<iostream>
using namespace std;
template <class T,class T1>
class a
{
  public:
void myfun(T a,T1 b)
{
      // T  c=a;
	   //T  d=b;
	   cout<<a<<b<<endl;
	// return c;
}
};
int main()
{
	a<int,char>obj;
	//int x;
	obj.myfun(10,'A');
	return 0;
	//cout<<x<<endl;
}