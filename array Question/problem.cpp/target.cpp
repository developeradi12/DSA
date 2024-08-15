#include<iostream>
using namespace std;
int main(){

    int arr []={3,4,6,7,1};
    int size=5;
    int targetsum =7;
    int ans=0;

    for (int i=0; i<size; i++){
        for (int j=i+1; j<size; j++){
            if (arr[i]+arr[j]==targetsum){
                ans++;
            }
        }
   }
   cout<<ans<<endl; 
  return 0;
    
}