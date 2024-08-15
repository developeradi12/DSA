// Q1 factorial 

// #include<iostream>
// using namespace std;
// int f(int n){
//     if (n==1)
//     {
//     return 1;}
//     return n*f(n-1);
// }
// int main(){
//     int result=f(5);
//     cout<<result;
//     return 0;
// }



// Q2 find nth fibonacci number sum

// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n==0 or n==1)
//     {return n;}
//     return fib(n-1) + fib(n-2);
                    /*assumption and self work*/
// }
// int main(){
//     int ans = fib(6);
//     cout<<ans;
//     return 0 ;
// }



// Q3 find the sum of its digit

// #include<iostream>
// using namespace std;

// int fsum(int n){              
      /*function define*/
//   if(n<=9 and n>=0 ) {return n;} 
       /*base case*/
//     return f(n/10)+(n%10);
        /*assumption and self work*/
// } 
// int main(){
//     int sum = fsum(1234);
//     cout<<sum;
//     return 0;
// }


// Q4 find the value of p^q 

// #include<iostream>
// using namespace std;
//    int f(int p, int q){
//     if(q==0){
//         return 1;
//     }/*base case (handling condition)*/
//     return p* f(p, q-1);
//    }
// int main(){
//     int square=f(2,3);
//     cout<<square ; 
//     return 0;
// }


#include<iostream>
using namespace std;
int f(int p ,int q){
    if (q==0){return 1;}
    if (q % 2  ==0){
        int result=f(p,q/2);
        return result *result;
    }
       else{
        int result = f(p,(q-1)/2);
        return p*result*result;
    }
}
int main(){
    int ans=f(2,4);
    cout<<ans;
    return 0;
}