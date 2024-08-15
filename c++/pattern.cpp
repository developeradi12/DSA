/*pattern question */

// #include<iostream>
// using namespace std ;
// int main(){

//     for(int i=0;i<3;i++){
//         for (int j=0;j<6;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int n ,m;
//     cin>>n>>m;
//     for (int i=0;i<=n;i++)
//     {
//         for (int j=0;j<=m;j++)
//         {
//           if(i==0||j==0||i==n||j==m){
//           cout<<"*";}
//           else{
//             cout<<" ";
//           }
//         }
//     cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int  main()
// {
//     int n;
//     cin >>n;
//     for (int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
        
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int  main()
// {
//     int n;
//     cin >>n;
//     for (int i=0;i<=n;i++){
//         for(int j=0;j<=n-i;j++){
//             cout<<"*";
        
//         }
//         cout<<endl;
//     }
//     return 0;
// }






// #include<iostream>
// using namespace std;
// int  main()
// {
//     int n;
//     cin >>n;
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for (int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    for (int i=1;i<=n;i++){
        for (int j=i;j<=n;j++){
            cout<<j;
        }
        for(int j=1;j<=(i-1);j++){
            cout<<j;
        }
      cout <<endl;
    }
    return 0;
}



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >>n;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             cout<<j;
//         } 
//       cout <<endl;
//     }
//     return 0;
// }



//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n,m;
//     cin>>n>>m;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=m;j++){
//             if(i==1||j==1||i==n||j==m){
               
//                cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//     cout<<endl;}
// return 0;
//  }



// #include<iostream>
//  using namespace std;
//  int main(){
//     int n,m;
//     cin>>n>>m;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=m;j++){
//             if((i+j)%2==0){
               
//                cout<<1;
//             }
//             else{
//                 cout<<2;
//             }
//         }
//     cout<<endl;}
// return 0;
//  }





// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n ;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//     cout<<j;}
//     for(int j=i-1;j>=1;j--){
//         cout<<j;
//     }
//     cout<<endl;
// }
// return 0;
// }


// #include <iostream>
// using namespace std ;
// int main()
// {
//     int n =5;

//     // cin >>n ;

//     for (int i=1;i<=n;i++)
//     {
        
//          for (int j=0;j<n-i;j++)
//          {
//                 cout<<" ";
//                 }
//                 int no_of_char=(2*i)-1;
//         for (int j=0;j<no_of_char;j++)
//         {
//             char ch =(char)('A'+j);
//             cout<<ch;    
//         }
//     cout<<"\n";}
//      for (int i=n+1;i<=2*n-1;i++)
//         {
//           int no_of_spaces=(i-n);
//           for (int j=0;j<no_of_spaces;j++){
//             cout<<" ";
//           }  
//         }
     
    
//     return 0;
// }
