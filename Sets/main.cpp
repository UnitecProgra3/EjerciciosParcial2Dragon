#include <iostream>
#include <set>

using namespace std;

int main()
{
    cout<<"--Insert--"<<endl;
    set<int>mi_set;
    mi_set.insert(20);
    mi_set.insert(10);
    mi_set.insert(30);
    mi_set.insert(20);

    cout<<"--Find--"<<endl;
    set<int>::iterator i = mi_set.find(20);
    if(i!=mi_set.end())
    {
        cout<<"Existe"<<endl;
    }else
    {
        cout<<"No existe"<<endl;
    }

    cout<<"--Iteradores--"<<endl;
    for(set<int>::iterator i=mi_set.begin();
        i!=mi_set.end();
        i++)
        cout<<*i<<endl;

    cout<<"--Multiset--"<<endl;
    multiset<int>mi_multiset;
    mi_multiset.insert(20);
    mi_multiset.insert(10);
    mi_multiset.insert(30);
    mi_multiset.insert(20);

    for(multiset<int>::iterator i=mi_multiset.begin();
        i!=mi_multiset.end();
        i++)
        cout<<*i<<endl;


    return 0;
}
