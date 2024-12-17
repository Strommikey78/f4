#include<iostream>
using namespace std;
class Publication{
    public:
    float price;
    string title;
    Publication(){
        price=0.0;
        title="";
    }
    void getdata(){
        cout<<endl<<"Enter the title of the publication:";
        cin>>title;
        cout<<"Enter the price of the publication:";
        cin>>price;
    }
    void showdata(){
        cout<<"The title of the publication is "<<title<<endl;
        cout<<"The price of the publication is "<<price<<endl;
    }
};
class Book:public Publication{
    public:
    int page_count;
    void getdata(){
        Publication::getdata();
        cout<<"Enter the page count of the book:";
        cin>>page_count;
        try{
            if(page_count<0){
                throw 1;
            }
        }
        catch(int a){
            cout<<"You should enter proper page count";
            page_count=0;
            title="";
            price=0.0;
        }
    }
    void showdata(){
        Publication::showdata();
        cout<<"Page count of a book is:"<<page_count;
    }
};
class Tape:public Publication{
    public:
    int playing_time;
    void getdata(){
        Publication::getdata();
        cout<<"Enter the playing time of cassete:";
        cin>>playing_time;
        try{
            if(playing_time<0){
                throw 1;
            }
        }
        catch(int a){
            cout<<"Enter the valid playing time"<<endl;
            playing_time=0;
        }
    }
    void showdata(){
        Publication::showdata();
        cout<<"Playing time:"<<playing_time;
    }
};
int main(){
    Book b1;
    Tape t1;
    b1.getdata();
    b1.showdata();
    t1.getdata();
    t1.showdata();
    return 0;
}