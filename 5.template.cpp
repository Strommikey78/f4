#include<iostream>
using namespace std;
template<typename T>
void selection(T arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        if(min_idx!=i){
            T temp=arr[i];
            arr[i]=arr[min_idx];
            arr[min_idx]=temp;
        }
    }
}
template<typename T>
void display(T arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int A[]={5,4,3,2,1};
    int n1=(sizeof(A)/sizeof(A[0]));
    cout<<"original array :";
    display(A,n1);
    cout<<endl;
    selection(A,n1);
    cout<<"sorted array :";
    display(A,n1);
    cout<<endl;
    float A1[]={5.21,4.32,3.20,2.45,1.3};
    int n2=(sizeof(A)/sizeof(A[0]));
    cout<<"original array (float):";
    display(A1,n2);
    cout<<endl;
    selection(A1,n2);
    cout<<"sorted array(float):";
    display(A1,n2);
    return 0;

}