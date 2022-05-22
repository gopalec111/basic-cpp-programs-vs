#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;
int main()
{
   // int r;
    vector<int>vgk;
    queue<int>qgk;
    list<int>lgk;
    cout<<"random generator numbers";
    for(int i=0;i<50;i++)
    {
        int r=rand()%100;
       // cout<r<<" ";
        vgk.push_back(r);
    }
    for(int &i :vgk)
    {
        cout<<i<<" ";
    if(i%2==0)
    {
        qgk.push(i);
    }
    else
    {
        lgk.push_front(i);
    }
    }
    cout<<"\n";
    while(!qgk.empty())
    {
        cout<<qgk.front()<<" ";
        qgk.pop();
        
    }
    list<int>::iterator gk1;
    cout<<"\n";
    for(gk1=lgk.begin();gk1!=lgk.end();gk1++)
    {
        cout<<*gk1<<" ";
    }
    
    
     
    
}