#include<iostream>
using namespace std;
bool isSorted(int *arr , int n){
    //base case
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaining = isSorted(arr+1 ,n-1);
        return remaining;
    }
    

}
int main(){

    int arr[6]={2,5,7,10,12,15};
    int n=6;
    int ans =isSorted(arr, n);
    if(ans){
          cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array id not sorted"<<endl;
    }
  return 0;
}