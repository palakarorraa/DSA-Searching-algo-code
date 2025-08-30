#include<iostream>
using namespace std;
int binarySearch(int arr[],int low,int high,int key){
    if(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key)
           return mid;
        else if(arr[mid]<key)
           return binarySearch(arr,mid+1,high,key);
        else
           return binarySearch(arr,low,mid-1,key);
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[100];
    cout<<"Enter"<<n<<"sorted elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search:";
    cin>>key;

    int result=binarySearch(arr,0,n-1,key);
    if(result!=-1)
        cout<<"Element found at index"<<result;
    else
        cout<<"Element not found";
    return 0;
}