#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>students {1,2,6,5,7,9};
    multiset<int>student{12,13,13,25,65};
    cout<<"size of set="<<students.size()<<endl;
    //cout<<students[11]<<endl;
    for(set<int>::iterator ite=students.begin();ite!=students.end();++ite)
    cout<<" "<<*ite<<endl;
    cout<<"reverse iterator\n";
     for(set<int>::reverse_iterator ite=students.rbegin();ite!=students.rend();++ite)
    cout<<" "<<*ite<<endl;
    cout<<"insertion";
    students.insert(50);
    for(set<int>::iterator ite=students.begin();ite!=students.end();++ite)
    cout<<" "<<*ite<<endl;
    cout<<"\nassigning";
    set<int>stds(students.begin(),students.end());
    for(set<int>::iterator ite=stds.begin();ite!=stds.end();++ite)
    cout<<" "<<*ite<<endl;
    stds.erase(stds.begin(),stds.find(50));
    set<int>::iterator ite;
    for(ite=stds.begin();ite!=stds.end();++ite)
    {
        cout<<"\t"<<*ite;
    }
    cout<<"size of multiset="<<student.size()<<endl;
    //cout<<student[1]<<endl;
    for(multiset<int>::iterator ite=student.begin();ite!=student.end();++ite)
    cout<<" "<<*ite<<endl;
    cout<<"reverse iterator\n";
     for(multiset<int>::reverse_iterator ite=student.rbegin();ite!=student.rend();++ite)
    cout<<" "<<*ite<<endl;
    cout<<"insertion";
    student.insert(20);
    for(multiset<int>::iterator ite=student.begin();ite!=student.end();++ite)
    cout<<" "<<*ite<<endl;
    cout<<"\nassigning";
    multiset<int>std(student.begin(),student.end());
    for(multiset<int>::iterator ite=std.begin();ite!=std.end();++ite)
    cout<<" "<<*ite<<endl;
    std.erase(std.begin(),std.find(20));
    multiset<int>::iterator ite1;
    for(ite1=std.begin();ite1!=std.end();++ite1)
    {
        cout<<"\t"<<*ite1;
    }
    return 0;
}