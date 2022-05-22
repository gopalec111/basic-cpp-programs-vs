#include<iostream>
using namespace std;
class gopal
{
private:
	int real,img;
public:
gopal(int x=10,int y=10)
{
	real=x;
	img=y;
}
gopal operator+(gopal const &obj)
{
	gopal res;
	res.real=real+obj.real;
	res.img=img+obj.img;
	return res;
}
void display()
{
	cout<<real<<"&"<<img<<endl;
}
};
int main()
{
	gopal c1(5,10),c2(6,8);
	gopal c3=c1+c2;
	c3.display();
}