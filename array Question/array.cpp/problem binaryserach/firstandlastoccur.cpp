#include <iostream>
using namespace std;

// first occurence of element
int firstoccu(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    int ans = 0;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end= mid - 1 ;
        }

        if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid= start+(end-start)/2;
    }
    return ans;
}

 // last occurence of element
 int lastoccu(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    int ans = 0;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            start= mid +1  ;
        }

        if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid= start+(end-start)/2;
    }
    return ans;
}
int main() {
      int arr[5]={1,2,3,3,5};
     int result1 = firstoccu(arr,5,2);
     int result2 = lastoccu(arr, 5 ,2);
    cout << "firstindex:"<<result1<<endl;
     cout << "lastindex:"<<result2<<endl;
    return 0;
}
