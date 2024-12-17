#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct personalrecord{
    string name;
    string dob;
    string phonenumber;
};
void displayrecord(const personalrecord &record ){
    cout<<"Name:"<<record.name<<endl;
    cout<<"DOB:"<<record.dob<<endl;
    cout<<"Phonenumber"<<record.phonenumber<<endl;
    cout<<"----------------------------------------"<<endl;
}

//comparisonn function to sort by names:
bool comparebyname(const personalrecord &a,const personalrecord &b ){
    return a.name < b.name;
}
int main(){
    vector<personalrecord>records;
    int n;
    cout<<"Enter the number of records:";
    cin>>n;
    cin.ignore();

    //input record from the user:
    for(int i=0;i<n;i++){
        personalrecord record;
        cout<<"Enter detais for "<<(i+1)<<" record "<<endl;
        cout<<"name:";
        getline(cin,record.name);
        cout<<"DOB (DD/MM/YYYY):";
        getline(cin,record.dob);
        cout<<"Phone Number:";
        getline(cin,record.phonenumber);
        records.push_back(record);
    }

    //sorting the records by name:
    sort(records.begin(),records.end(),comparebyname);

    //Display sorted records:
    cout<<"\n records sorted by name:\n";
    for(vector<personalrecord>::iterator it=records.begin();it!=records.end();++it){
        displayrecord(*it);
    }
    //searching for a record by name:
    string searchname;
    cout<<"Enter the name to search:";
    getline(cin,searchname);

    bool found=false;
    for(vector<personalrecord>::iterator it=records.begin();it!=records.end();++it){
        if(it->name==searchname){
            cout<<"Record found"<<endl;
            displayrecord(*it);
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"REcord not found"<<endl;
    }
    return 0;
    }

