//sorted the char of string

#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

string countsort(string str){
    vector<int> temp(26,0);
   //
    for(int i=0 ; i<str.length(); i++){
        int index = str[i]-'a';
        temp[index]++;
    }

    int j=0;
    //reconstruct sorted string 
    for(int i=0; i<26; i++){
        while(temp[i]--){
          str[j++] = i+'a';
        }
    }
    return str;
}

int main(){
    string str;
    cin>>str;
    cout<<countsort(str)<<endl;
    return 0;
}
