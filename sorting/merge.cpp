#include<iostream>
#include<vector>
using namespace std;

    void merge(vector<int>&arr,int l,int mid, int r){
        //crete 2 temp arrays
        int an=mid-l+1;
        int bn=r-mid;
        int a[an];
        int b[bn];
        for(int i=0 ;i<an;i++){
            a[i]=arr[l+i];
        }
        for(int j=0; j<bn ; j++){
            b[j]=arr[mid+1+j];
        }
        int i=0;  //initial index of first subarray
        int j=0;  //initial index of second subarray
        int k=l;  //intial index of merged subarray

        while(i<an && j<bn){
            if(a[i]<b[j]){
                arr[k++]=a[i++];
            }
            else{
                arr[k++]=b[j++];
            }
        }
        while(i<an){
              arr[k++]=a[i++];
        }
         while(j<bn){
              arr[k++]=b[j++];
         }

    }

void mergesort(vector<int>&arr,int l, int r){
    //base case
    if(l>=r){
        return;
    }
    int mid = (l+r)/2; //for finding mid in array
    mergesort(arr,l,mid);  //for left part
    mergesort(arr,mid+1,r);  // for right part
    merge(arr,l,mid,r);
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n ; i++)
    {
        cin >> arr[i];
    }
    mergesort(arr, 0, n-1);
     
    for(int i=0; i<n ; i++)
    {
        cout << arr[i]<<" ";
    }cout<<endl;
    return 0;
}
