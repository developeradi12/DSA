#include<iostream>
using namespace std;
int main(){
    int x=1;
    int *ptr=&x;
    cout<<ptr<<" "<<(*ptr)<<" ";
}