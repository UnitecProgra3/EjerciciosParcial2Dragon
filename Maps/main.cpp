#include <iostream>
#include <map>

using namespace std;

int main()
{
    cout<<"--Map--"<<endl;
    map<string,int>mi_map;
    mi_map["B"]=20;
    mi_map["A"]=10;
    mi_map["C"]=30;
    mi_map["B"]=40;

    for(map<string,int>::iterator i=mi_map.begin();
        i!=mi_map.end();
        i++)
    {
        pair<string,int>pair_actual = *i;
        cout<<pair_actual.first<<","<<pair_actual.second<<endl;
    }

    cout<<"--Find--"<<endl;

    if(mi_map["B"])
    {
        cout<<"Existe"<<endl;
    }else
    {
        cout<<"No existe"<<endl;
    }

    cout<<"--Multimap--"<<endl;
    multimap<string,int>mi_multimap;

    pair<string,int> mi_pair1("B",20);
    pair<string,int> mi_pair2("A",10);
    pair<string,int> mi_pair3("C",30);
    pair<string,int> mi_pair4("B",40);

    mi_multimap.insert(mi_pair1);
    mi_multimap.insert(mi_pair2);
    mi_multimap.insert(mi_pair3);
    mi_multimap.insert(mi_pair4);

    for(multimap<string,int>::iterator i=mi_multimap.begin();
        i!=mi_multimap.end();
        i++)
    {
        pair<string,int>pair_actual = *i;
        cout<<pair_actual.first<<","<<pair_actual.second<<endl;
    }

    cout<<"--Find--"<<endl;

    multimap<string,int>::iterator i = mi_multimap.find("X");
    if(i!=mi_multimap.end())
    {
        cout<<"Existe"<<endl;
    }else
    {
        cout<<"No existe"<<endl;
    }

    return 0;
}
