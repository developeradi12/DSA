#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>&sort,int first,int last)\
{
    int pivot= sort[last];
    int i=first-1;
    for(int j=first; j<last;j++)
    {
        if(sort[j]<pivot)
        {                                       /*agar arr me j index vali value pivot element se large h then i 
                                                index of arr ko ++ kar do and swap kar do index of i ko index of j se*/
            i++;
            swap(sort[i],sort[j]);
        }
    }
      swap(sort[i+1],sort[last]);
                return i+1;
}

void QuickSort(vector<int>&sort,int first,int last){
        if(first>=last){
            return ;
        }
        int pi = partition(sort,first,last);
        QuickSort(sort,first,pi-1);
        QuickSort(sort,pi+1,last);
}
int main(){
    int c;
    cin>>c;
    vector<int>sort(c);
    for(int i=0; i<c ;i++){
        cin>>sort[i];
    }
    QuickSort(sort,0,c-1);

    for(int i=0; i<c; i++){
        cout<<sort[i]<<" ";

    }cout<<endl;
    return 0;

}