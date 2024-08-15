/*give an array of names of the fruit  you are supposed to sort it in lexicographical order using the selection sort*/

#include<iostream>
       //for strcmp ans strcpy
#include <string.h>
using namespace std;

void sortfruit(char fruit[][60],int n ){

    for(int i=0; i<n-1; i++){

        //finding minimum element
        int min_index = i;
        for(int j = i+1; j<n; j++){
             if ( strcmp(fruit[min_index], fruit[j] ) >0) {
                min_index = j;
             }
        }

        //palce the min element at the beginning

        if(i!=min_index){
             char temp[60];
             strcpy(temp, fruit[i]);
            strcpy(fruit[i],fruit[min_index]);
           
            strcpy(fruit[min_index],temp);
        }
    }
}
int main(){
    char fruit[][60]={"papaya","apple","lime","watermelon","mango","kiwi"};

    int n = sizeof(fruit)/sizeof(fruit[0]);

    sortfruit(fruit,n);

    for(int i=0 ;i<n; i++){
        cout<<fruit[i]<<" ";
    } cout<<endl;
    return 0;
}