/*given an integer array arr, move all 0's to the end of it while maintaining the relative order of the non - zero elements.?

  note:- that you must do this in place without making a copy of the array*/

  #include<iostream>
#include<vector>
 using namespace std;
  
  void sort(vector<int>&arr){
    int n = arr.size();
    for(int i=n-1 ; i>=0; i--){
                    bool flag = false;
                    int j=0;
      while(j!=i){
            if(arr[j]== 0 && arr[j+1]!= 0)
            {
                swap(arr[j],arr[j+1]);
                flag = true;
            }
            j++;
            }
            if(!flag){
                break;         
        }
    }
  }
  int main(){
    int n;
    cin>> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr);
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
 return 0;
  } 
