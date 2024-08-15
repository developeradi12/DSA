// /*print all the element of the array recursvely*/
// #include <iostream>
// using namespace std;
// void f(int *arr, int idx, int n){
//     if(idx==n){
//         return ;
//     }
//     cout<< arr[idx]<<"\n";
//      f(arr,idx+1,n);

// }
// int main(){
//     int arr[]={6,1,9,4,5};
//     int n = 5;
//     f(arr,0,n);
//     return 0;
// }

/*Q2 print the max value of the array [3,10,3,2,5]*/

// #include<iostream>
// using namespace std;
// int f(int *arr, int idx ,int n){
//     if(idx==n-1){
//         return arr[idx];
//     }
//     return max(arr[idx],f(arr,idx+1,n));
// }
// int main(){
//     int arr[]={3,10,3,3,2,5};
//     int n=5;
//     cout<<f(arr,0,n);
//     return 0;
// }


/*Q3 find the sum of the values of arr*/

// #include<iostream>
// using namespace std;
// int f(int *arr, int idx, int n){
//          if(idx==n-1){
//             return arr[idx];
//          }
//          return arr[idx]+f(arr, idx+1,n);
// }
// int main(){
//     int arr[]={2,3,5,20,1};
//     int n=5;
//     cout<<f(arr,0,n);
//     return 0;
// }

