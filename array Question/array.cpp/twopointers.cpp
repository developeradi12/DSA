/*sort zeroes&ones in array */
/*1 method*/

// #include<iostream>
// #include<vector>
// using namespace std;

// void Sort( vector<int>&v){
//     int zeroes_count=0;
//     for(int i=0; i<v.size(); i++)
//     {
//         if(v[i]==0)
//         {
//             zeroes_count++;
//         }
//     }

//     for(int i=0; i<v.size() ;i++)
//     {
//          if(i< zeroes_count)
//          {
//             v[i]=0;
//          }
    

//     else
//     {
//         v[i]=1;
//     }    
//     }
// }


// int main(){
//     int n;
//     cin>>n;
//     vector<int>v;

//     for(int i=0; i<n; i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }

//  Sort(v);
//     for(int i=0 ; i<n; i++){
//        cout<<v[i]<<" ";

//     }cout<<endl;
//     return 0;
// }


/*2 method*/
//  #include<iostream>
// #include<vector>
// using namespace std;

// void Sort( vector<int>&v){
//     int left_ptr=0;
//     int right_ptr=v.size()-1;

//     while( left_ptr<right_ptr){
//         if(v[left_ptr]==1 && v[right_ptr]==0){
//            v[left_ptr ++]=0;
//            v[right_ptr --]=1;}
//         if(v[right_ptr]==1){
//             right_ptr--;
//         }
//         if(v[left_ptr]==0){
//             left_ptr++;
//         }
//     }
    
//    return;
//    }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>v;

//     for(int i=0; i<n; i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }

//  Sort(v);
//     for(int i=0 ; i<n; i++){
//        cout<<v[i]<<" ";

//     }cout<<endl;
//     return 0;
// }




/*sort even odd in arr*/
 
//  #include <iostream>
//  #include<vector>
//  using namespace std;


// void sort( vector<int>&v)
// {
//     int left_ptr=0;
//     int right_ptr=v.size()-1;

//     while( left_ptr<right_ptr)
//     {
//         if(v[left_ptr]%2==1 && v[right_ptr]%2==0)
//            {
//              swap(v[left_ptr],v[right_ptr]);
//              right_ptr--;
//              left_ptr++;
//            }

//         if(v[right_ptr]%2==1)
//            {
//             right_ptr--;
//            }
//         if(v[left_ptr]%2==0)
//            {
//             left_ptr++;
//            }
//     }
// }
//  int main(){
//     int n;
//     cin >>n;
//     vector<int>v;


//     for (int i=0; i<n; i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }

//     sort(v);

//     for(int i=0; i<n; i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;
//  }
 


 #include<iostream>
 #include<algorithm>
 #include<vector>
 using namespace std;
void sort( vector<int>&v)
{    
    vector<int> ans;
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr<=right_ptr)
    {
        if(abs(v[left_ptr])<abs(v[right_ptr]))
        {
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else
            {
           
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
            }
            
    }
       reverse(ans.begin(), ans.end());
             for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }cout<<endl;

   
}
 int main(){
    int n;
     cin>>n;
     vector<int>v;
    
     for (int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sort(v);

   return 0;
 }
