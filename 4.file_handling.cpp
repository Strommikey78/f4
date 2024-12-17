#include<iostream>
#include<fstream>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    int age;
    void getdata(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter salary:";
        cin>>salary;
        cout<<"Enter age:";
        cin>>age;
    }
    void showdata(){
        cout<<"name:"<<name<<"\nSalary:"<<salary<<"\nAge:"<<age<<endl;
    }
};
int main(){
    fstream file;
    int n;
    cout<<"Enter the number of employee:";
    cin>>n;
    Employee emp;
    //Write to file
    file.open("employee.txt",ios::out | ios::binary);
    for(int i=0;i<n;i++){
        cout<<"Enter detail of employee "<<(i+1)<<":\n";
        emp.getdata();
        file.write((char*)&emp,sizeof(emp));
    }
    file.close();
    file.open("Employee.txt",ios::in|ios::binary);
    cout<<"\nEmployee details:";
    for(int i=0;i<n;i++){
        cout<<"Employee "<<(i+1)<<endl;
        file.read((char*)&emp,sizeof(emp));
        emp.showdata();
    }
    file.close();
    return 0;
}
