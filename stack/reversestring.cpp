#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str= "ADITYA";
    stack<char>s;
    for(int i=0; i<str.length();i++){
        char ch =str[i];
        s.push(ch);
    }
    string ans="";

    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();   // remove the top element
    }
    cout<<"answer is:"<<ans<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    private:
    bool knows(vector<vector<int> >& M, int a, int b, int n) {
        if(M[a][b] == 1)
            return true;
        else
            return false;
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        //step1: push all element in stack
        for(int i=0; i<n; i++) {
            s.push(i);
        }   
        
        //step2: get 2 elements and copare them
        
        while(s.size() > 1) {
            
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b,n)){
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        int ans = s.top();
        //step3: single element in stack is potential celeb
        //so verify it
        
        int zeroCount = 0;
        
        for(int i=0; i<n; i++) {
            if(M[ans][i] == 0)
                zeroCount++;
        }
        
        //all zeroes
        if(zeroCount != n)
            return -1;
        
        //column check
        int oneCount = 0;
        
        for(int i=0; i<n; i++) {
            if(M[i][ans] == 1)
                oneCount++;
        }
        
        if(oneCount != n-1)
            return -1;
        
        return ans;
        
    }
};
   bool knows(vector<vector<int> >& M, int a, int b ){
        if(M[a][b]==1){
            return true;
        }
        else{
            false;
        }
    }
    
    public:
  
    int celebrity(vector<vector<int> >& M, int n) 
    {
     stack<int>s;
     // step 1  push all element into the stack
     for(int i=0; i<n ; i++){
         s.push(i);
     }
     
     //step2  
      while(s.size()>1){
         int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
          
          if(knows(M,a,b)){
              s.push(b);
          }
          else{
              s.push(a);
          }
      }
      int ans = s.top();
     //step3: single element in stack is potential celeb
        //so verify it
        int zerocount=0;
      for(int i=0; i<n; i++){
          if(M[ans][i]==0){
              zerocount++;
          }
          
      }
      
      if(zerocount!=n)
      return-1;
      
      int onecount=1;
      
      for(int i= 0 ;i< n ; i++){
          if(M[i][ans]==1){
              onecount++;
          }
      }
      
      if(onecount!=n-1)
      return -1;
      
      return ans;
      
    }
      