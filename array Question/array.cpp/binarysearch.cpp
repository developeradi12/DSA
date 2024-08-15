#include<iostream>
using namespace std;


int BinarySearch(int arr[],int key, int n){
   int start = 0;
   int end = n-1;
    int mid = start + (start+end)/2;    ///find mid value of array
    while(start<=end)
    {
        
    if(arr[mid]==key){          //compare mid with key
        return mid;
    }

    if(arr[mid]<key){               
          start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start + (end-start)/2;
  }
  return-1;
}
int main(){

 int even[6]={2,4,6,8,10,12};
 int odd[5]={5,25,30,35,40};

 int EvenIdx = BinarySearch(even,10,6);
 cout<<"key is present at index:"<<EvenIdx<<" "<<endl;
 int oddIdx = BinarySearch(odd,14,5);
 cout<<"key is present at index:"<<oddIdx<<" ";

}