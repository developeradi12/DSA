#include <iostream>
#include <vector>
using namespace std;
int main() {
vector <int>v;
cout<<"size :"<< v.size() <<endl;
cout<<"capacity :"<< v.capacity() <<endl;

v.push_back(1);
cout<<"size :"<< v.size() <<endl;
cout<<"capacity :"<< v.capacity() <<endl;

v.push_back(2);
cout<<"size :"<< v.size() <<endl;
cout<<"capacity :"<< v.capacity() <<endl;

v.push_back(5);
cout<<"size :"<< v.size() <<endl;
cout<<"capacity :"<< v.capacity() <<endl;

v.resize(10);

cout<<"size :"<< v.size() <<endl;
cout<<"capacity :"<< v.capacity() <<endl;

v.insert(v.begin()+2,5);
cout<<"size :"<< v.size() <<endl;
cout<<"capacity :"<< v.capacity() <<endl;


}
