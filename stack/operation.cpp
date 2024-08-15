#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int top;
    int* arr;
    int size;


 Stack(int size){
    this->size=size;
    arr = new int[size];
    top = -1;
 }

 void push(int element){
     if(size-top>1){
        top++;
        arr[top]=element;
     }
     else{
        cout<<"stack is overflow";
     }
 }
 void pop (){
    if(top>=0){
        top--;
    }
    else {
        cout<<"stack is underflow";
    }
 }   

 int peek(){
    if(top>=0){
        arr[top];
    }
    else{
        cout<<"stack is empty";
    }
 } 

 bool empty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
 }
 
};

int main() {
    Stack st(5);
    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);
    st.push(66);
    st.push(77);
cout<<endl;
  cout<<"top of stack:"<<st.peek()<<endl;
   st.pop();
    cout<<"top of stack:"<<st.peek()<<endl;

}