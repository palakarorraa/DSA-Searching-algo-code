#include<iostream>
using namespace std;
int main(){
    int n,key;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[100];
    cout<<"Enter"<<n<<"elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search:";
    cin>>key;
    
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Found at"<<i<<"position";
            return 0;
        }
    }
    cout<<"Not found";
    return 0;
}