#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    string s;
    map<string,int>mymap;
    map<string,int>::iterator i;
    mymap.insert(pair<string,int>("Maharashtra",12));
    mymap.insert(pair<string,int>("Gujrat",10));
    mymap.insert(pair<string,int>("Goa",3));
    mymap.insert(pair<string,int>("Bihar",9));
    mymap.erase("Goa");
    for(i=mymap.begin();i!=mymap.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;

    }
    cout<<"Enter the state name :"<<endl;
    cin>>s;
    cout<<"Population of state "<<s<<"="<<mymap[s]<<endl;
    cout<<"Population of state Goa(in millions)= "<<mymap["Goa"];
    return 0;
    
}
