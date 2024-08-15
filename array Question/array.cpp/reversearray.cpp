#include<iostream>
using namespace std;

void reverse (int arr[] , int n){
        int start = 0;
        int end = n-1 ;
         
         while(start<=end) {
            swap(arr[start], arr[end]);
            start++;
            end--;

         }
         

}


 void printArray(int arr[], int n){
    for(int i=0; i<=n ; i++){+
        cout << arr[i] << " ";
    }
    cout<< endl;

}

int main(){
    int arr[9]={8,5,7,6,2,9,0,3,1};
        reverse(arr, 9);
        printArray (arr ,9);
    return 0;
}
