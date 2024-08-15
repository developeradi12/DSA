// #include<iostream >
// using namespace std;
// int main(){
//     int arr[]={1,2,1,2,3,4,3};
//     int size=7;
//     int ans=0;
//     for (int i=0; i<size;i++){
//         for (int j = i+1; j <size; j++)
//         {
//             if (arr[i]==arr[j]){
//                arr[i] = arr[j] = 0;
//                            }
//         }
//     }
//     for(int i=0;i<size;i++){
//         if(arr[i]>0){
//           cout<<arr[i]<<endl;
//         }
//     }
//     return 0;
// } 





// #include <iostream>
// #include <climits>
// using namespace std;

// int largestElementIndex(int array[], int size){
//     int max = INT_MIN;
//     int maxindex=-1;
//     for(int i=0; i<size; i++){
//         if (array[i]>max){
//             max=array[i];
//             maxindex=i;
//         }
//         }

//        return maxindex;
    
// }

// int main()
// {
//        int array[]={2,3,5,7,6,1};
//        int indexoflargest = largestElementIndex(array,6);
//         cout<<array[indexoflargest]<<endl;
//           array[indexoflargest]=-1;
//           int indexSecondlargest = largestElementIndex(array,6);
//           cout<<array[indexSecondlargest]<<endl;
//           return 0;

// }




#include<iostream>
#include<climits>
using namespace std;


int SecondLargestElement(int arr[],int n){
int max = INT_MIN;;
    int secmax=INT_MIN;
   
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]>secmax && arr[i]!=max){
            secmax=arr[i];
        }
    }
    return secmax;
    }

int main(){
     int arr[]={2,3,5,7,6,7,1};
     int n=7;

     cout<<SecondLargestElement(arr,n)<<endl;
   return 0;
}
