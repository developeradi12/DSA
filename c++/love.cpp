#include <iostream>
#include<math.h>
using namespace std;

int main () {
  int n ;
   cin>> n;
   int ans=0;
  int pow=1;
   while(n>0){
    int digit=n%10;
    ans=(digit*pow)+ans;
   pow*=2;
    n=n/10;
   
   }
   cout<<ans << endl ;
}