#include<iostream>
using namespace std;
void mergearr(int arr1[],int n,int arr2[],int m,int arr3[]){
   int i=0;
   int j=0;
   int k=0;

   // Merging two arrays
   while(i<n && j<m) 
   {
        if(arr1[i]>arr2[j])
            {
                arr3[k++]=arr2[j++];
            }
          else
            {
                arr3[k++] = arr1[i++];
            }
     }
     // Copy remaining elements of arr1, if any
    while(i < n) {
        arr3[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while(j < m) {
        arr3[k++] = arr2[j++];
    }
}
     void print(int arr[],int size){
        for(int i= 0; i<size ; i++){
      cout<<arr[i]<<" ";
      }      cout<<endl;
     }


int main(){
int arr1[5]={1,3,5,7,9};
int arr2[3]={2,4,6};
int arr3[8]={0};      // This should be able to hold the sum of sizes of arr1 and arr2


mergearr(arr1,5, arr2, 3, arr3);

print (arr3, 8);  // The size of arr3 should be n + m
return 0;
}