#include<iostream>
using namespace std;

    bool search(int arr[], int size, int key)
    {
    for(int i=0; i<=size; i++)
     {
    if(arr[i] == key)
    {
        return 1;
    }
    }
    return 0;
    
    }
int main(){
    int arr[5]={2,8,9,-7,6,};
    cout<<"enter the key"<<endl;
    int key;
    cin>>key;
    bool found = search(arr,5,key);

     if(found){
        cout<<"key is found"<<endl;
     }
      else{
        cout<<"key is not found"<<endl;
      }
      return 0;
}