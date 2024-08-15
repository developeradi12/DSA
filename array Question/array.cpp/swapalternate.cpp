#include<iostream>
using namespace std;


void ans(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void printArray(int arr[],int n){
    for(int i=0;i<=n-1;i+=2){
        if(i+1<n){
      swap(arr[i],arr[i+1]);
        }
    }
    
}
int main()
{
    int arr[6]={2,5,8,1,9,4};
    printArray(arr,6);
    ans(arr,6);
    return 0;
}