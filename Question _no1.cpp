#include<iostream>
using namespace std;
int main(){
    int arr[10],i,n,x,pos;
    cout<<"Enter the array size :"<<endl;
    cin>>n;
    cout<<"Enter the Element in array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the new element to insert :"<<endl;
    cin>>x;
    cout<<"Enter the index position to insert item"<<endl;
    cin>>pos;
    for(i=n;i>=pos;i--){
     arr[i]=arr[i-1];
    }
       arr[pos]=x;
       n++;
       cout<<"new array"<<endl;
       for(i=0;i<n;i++){
        cout<<""<<arr[i];
       }
       return 0;
}