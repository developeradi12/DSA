#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int>&arr){
    int n=arr.size();
    for(int i=0; i<n-1;i++){
       for( int j=0; j<n; j++){
        if(arr[j+1]<arr[j]){
            swap(arr[j],arr[j+1]);
        }
       }
    }return;
}
int main(){
    int n;
    cin>>n ;
    vector<int>arr(n);
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
return 0;
}