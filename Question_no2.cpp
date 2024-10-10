#include<iostream>
using namespace std;
int main(){
    int arr[15],i,del,n;
    cout<<"Entre the array"<<endl;
    cin>>n;
    cout<<"Enter the Element in array :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the positon to Delate"<<endl;
    cin>>del;
    if(del>=n){
        cout<<"Delation is not possible"<<endl;
    }
    else{
        for(i=del;i<n-1;i++){
            arr[i]=arr[i+1];
        }
    }
    cout<<"The array after delation"<<endl;
    for(i=0;i<n-1;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}