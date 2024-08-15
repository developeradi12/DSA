#include<iostream>

#include<vector>
using namespace std;

void reverse(vector<int>&arr ){
    int i=0;
    int j=arr.size()-1;
    while(i<=j){
        swap (arr[i],arr[j]);
        i++;
        j--;
    }
    
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     
     reverse(arr);

     for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
     }cout<<endl;
     return 0;
}