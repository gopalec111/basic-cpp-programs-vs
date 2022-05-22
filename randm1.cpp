#include<iostream>
#include<deque>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    deque<int>dgk;
    priority_queue<int>pgk;
    stack<int>sgk;
    cout<<"random generator numbers";
    for(int i=0;i<50;i++)
    {
        int r=rand()%100;
        dgk.push_back(r);
    }
    for(int &i :dgk)
    {
        cout<<i<<" ";
    if(i%2==0)
    {
        pgk.push(i);
    }
    else
    {
        sgk.push(i);
    }
    }
    /*priority_queue<int>::iterator gk1;
    cout<<"list op \n";
    for(gk1=pgk.begin();gk1!=pgk.end();gk1++)
    {
        cout<<*gk1<<" ";
    }*/
    cout<<"\np que op \n";
    while(!pgk.empty())
    {
        cout<<pgk.top()<<" ";
        pgk.pop();
        
    }
    /*static<int>::iterator gk1;
    cout<<"static op \n";
    for(gk1=sgk.push();gk1!=sgk.pop();gk1++)
    {
        cout<<*gk1<<" ";
    }*/
    cout<<"static op \n";
    while(!sgk.empty())
    {
        cout<<sgk.top()<<" ";
        sgk.pop();
        
    }
    
    
     
    
}