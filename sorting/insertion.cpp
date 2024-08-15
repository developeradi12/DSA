#include<iostream>
#include<vector>
using namespace std;
void insertion(vector<int>&bharat){
    int palak = bharat.size();
    for(int i=0;i<palak;i++){
        int gopal=bharat[i];
        int j=i-1;
        while(j>=0 && bharat[j]>gopal){
            bharat[j+1]=bharat[j];
            j--;
        }
        bharat[j+1]=gopal;
    }return;
}
int main(){
    int n;
    cin>>n;
    vector<int>bharat(n);
    for(int i=0; i<n; i++){
        cin>>bharat[i];
    }

    insertion(bharat);
   for(int i=0; i<n; i++){
     cout<<bharat[i]<<" ";
   }cout<<endl;
   return 0;

}