/*given two string s and t return true if it is an anagram of s and false otherwise ?
constraits : string s and t will only contain lowercase alphabetical characters*/


#include<iostream>
#include<string.h>
#include<vector>
using namespace std;


bool anagram(string s1,string s2){
 // check equal no of character
    if(s1.size()!=s2.size()){
        return false;
    }
    //store frequencies of characters
    vector<int>freq(26,0);
    for(int i=0; i<s1.size();i++){
         freq[s1[i]-'a']++;
         freq[s2[i]-'a']--;
    } 
    //checking every character is 0 
       for(int i=0;i<26;i++){
        if (freq[i]!=0){
            return false;
        }
       }
       return true;       
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    
    if(anagram(s1,s2)){
        cout<<"true"<<endl;;
    }
    else{
        cout<< "false"<<endl;;
    }
    return 0;
}
