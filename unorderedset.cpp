#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>students {1,2,6,5,7,9};
    unordered_multiset<int>student{12,13,13,25,65};
    cout<<"size of unorderedset="<<students.size()<<endl;
    //cout<<students[11]<<endl;
    for(unordered_set<int>::iterator ite=students.begin();ite!=students.end();++ite)
    cout<<" "<<*ite<<endl;
    /*cout<<"reverse iterator\n";
     for(unordered_set<int>::reverse_iterator ite=students.rbegin();ite!=students.rend();++ite)
    cout<<" "<<*ite<<endl;*/
    cout<<"insertion";
    students.insert(50);
    for(unordered_set<int>::iterator ite=students.begin();ite!=students.end();++ite)
    cout<<" "<<*ite<<endl;
    cout<<"\nassigning";
    unordered_set<int>stds(students.begin(),students.end());
    for(unordered_set<int>::iterator ite=stds.begin();ite!=stds.end();++ite)
    cout<<" "<<*ite<<endl;
    stds.erase(stds.begin(),stds.find(50));
    unordered_set<int>::iterator ite;
    for(ite=stds.begin();ite!=stds.end();++ite)
    {
        cout<<"erase"<<*ite;
    }
    cout<<"size of unorderedmultiset="<<student.size()<<endl;
    //cout<<student[1]<<endl;
    for(unordered_multiset<int>::iterator ite=student.begin();ite!=student.end();++ite)
    cout<<" "<<*ite<<endl;
    /*cout<<"reverse iterator\n";
     for(unordered_multiset<int>::reverse_iterator ite=student.rbegin();ite!=student.rend();++ite)
    cout<<" "<<*ite<<endl;*/
    cout<<"insertion";
    student.insert(20);
    for(unordered_multiset<int>::iterator ite=student.begin();ite!=student.end();++ite)
    cout<<" "<<*ite<<endl;
    cout<<"\nassigning";
    unordered_multiset<int>std(student.begin(),student.end());
    for(unordered_multiset<int>::iterator ite=std.begin();ite!=std.end();++ite)
    cout<<" "<<*ite<<endl;
    std.erase(std.begin(),std.find(20));
    unordered_multiset<int>::iterator ite1;
    for(ite1=std.begin();ite1!=std.end();++ite1)
    {
        cout<<"\t"<<*ite1;
    }
    return 0;
}