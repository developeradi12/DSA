#include<iostream>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;
     int A[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>A[i][j];
        }
    }

    int o,p;
    cin>>o>>p;
    int B[o][p];
     for(int i=0; i<o; i++){
        for(int j=0; j<p; j++){
            cin>>B[i][j];
        }
    }

    if(m!=o){
        cout<<"matrix multipliction not possible"<<endl;
    }

    int C[n][p];
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            int value=0;
            for(int k=0; k<m; k++){
               value+=A[i][k]*B[k][j];
            }
            C[i][j]=value;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            cout<<C[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}