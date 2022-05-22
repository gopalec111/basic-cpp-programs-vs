#include<iostream>
#include<map>
#include<string>
//#include<utility>
using namespace std;
int main()
{
    map<int,string>students {{11,"gopal"},{12,"radha"},{13,"ram"}};
    multimap<int,string>student {{15,"gopal"},{12,"radha"},{13,"ram"}};
    cout<<"size of map="<<students.size()<<endl;
    cout<<students[11]<<endl;
    for(map<int,string>::iterator ite=students.begin();ite!=students.end();++ite)
    cout<<" "<<(*ite).first<<":"<<(*ite).second<<endl;
    cout<<"reverse iterator\n";
     for(map<int,string>::reverse_iterator ite=students.rbegin();ite!=students.rend();++ite)
    cout<<" "<<(*ite).first<<":"<<(*ite).second<<endl;
    cout<<"insertion";
    students.insert(pair<int,string>(14,"parimala"));
    for(map<int,string>::iterator ite=students.begin();ite!=students.end();++ite)
    cout<<" "<<(*ite).first<<":"<<(*ite).second<<endl;
    cout<<"\nassigning";
    map<int,string>stds(students.begin(),students.end());
    for(map<int,string>::iterator ite=stds.begin();ite!=stds.end();++ite)
    cout<<" "<<(*ite).first<<":"<<(*ite).second<<endl;
    stds.erase(stds.begin(),stds.find(14));
    map<int,string>::iterator ite;
    for(ite=stds.begin();ite!=stds.end();++ite)
    {
        cout<<"\t"<<ite->first<<":"<<ite->second;
    }
    cout<<"size of multimap="<<student.size()<<endl;
    //cout<<student[1]<<endl;
    for(multimap<int,string>::iterator ite=student.begin();ite!=student.end();++ite)
    cout<<" "<<(*ite).first<<":"<<(*ite).second<<endl;
    cout<<"reverse iterator\n";
     for(multimap<int,string>::reverse_iterator ite=student.rbegin();ite!=student.rend();++ite)
    cout<<" "<<(*ite).first<<":"<<(*ite).second<<endl;
    cout<<"insertion";
    student.insert(pair<int,string>(14,"parimala"));
    for(multimap<int,string>::iterator ite=student.begin();ite!=student.end();++ite)
    cout<<" "<<(*ite).first<<":"<<(*ite).second<<endl;
    cout<<"\nassigning";
    multimap<int,string>std(student.begin(),student.end());
    for(multimap<int,string>::iterator ite=std.begin();ite!=std.end();++ite)
    cout<<" "<<(*ite).first<<":"<<(*ite).second<<endl;
    std.erase(std.begin(),std.find(14));
    multimap<int,string>::iterator ite1;
    for(ite1=std.begin();ite1!=std.end();++ite1)
    {
        cout<<"\t"<<ite1->first<<":"<<ite1->second;
    }
    return 0;
}