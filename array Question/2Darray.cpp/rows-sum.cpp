// #include<iostream>
// using namespace std;

//     int issum(int arr[][3] , int i, int j){
//         cout<<"wait!"<<" ";
         
//          for(int i=0; i<3; i++){
//          int res = 0 ;
//            for(int j=0; j<3; j++){
//             res+=arr[i][j];
//         }
//         cout<<res<<" ";
//       }
//       cout<<endl;
//     }
//     int main(){
//     int arr[3][3];


//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin>>arr[i][j];
//         }
//     }


//         for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     issum(arr,3,3);
//      return 0;
// }


//largest row sum
#include<iostream>
#include<climits>
using namespace std;

    int largestrowsum(int arr[][3] , int i, int j){
        cout<<"wait!"<<" ";
        
        int maxi = INT_MIN ;
        int rowindex=-1;
         for(int i=0; i<3; i++){
         int res = 0 ;
           for(int j=0; j<3; j++){
            res+=arr[i][j];
        }
       if(res>maxi){
        maxi=res;
        rowindex=i;
       }
       
      }
    cout<<rowindex;
    }
    int main(){
    int arr[3][3];


    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }


        for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

   int ans= largestrowsum(arr,3,3);
     return 0;
}