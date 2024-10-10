#include<iostream>
using namespace std;
int main(){
    int arr[10],i,n,max1,max2;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
    cout<<"Enter the element an array :"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    max1=max2=0;
    for(i=0;i<n;i++){
        if(arr[i]>max1)
        {
          max2=max1;
          max1=arr[i];
        }
        else if(arr[i]>max2){
            max2=arr[i];

        }
    }
    cout<<"Second Largest Element is "<<endl;
    cout<<max2;

}