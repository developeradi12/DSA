#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int>&a){
    int n=a.size();
    for (int i = 0; i <n-1; i++)
    {
        int min_idx=-1;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[min_idx]){
              min_idx=j;
            }
    if(min_idx!=i){
                swap(a[i],a[min_idx])  ;
                }
        }
    }
    
}
int main(){
    int n ;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    selectionsort(a);

    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}