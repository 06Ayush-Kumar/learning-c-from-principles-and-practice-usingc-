// we gonna make a vector first
// syntax =vector<data_type>name of vector={}

#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> ayush={1,2,3,4,56};  // we created a vector named ayush with data type of integer 
  cout<<ayush.size()              // .size(_) use to find the size of vector
  vector<int> bd(5);        // we have given size of vector as 5

// now to print element of vector ayush there are 2 ways:
// 1st way
for(int i:ayush){
    cout<i<<"\t";
// 2nd way(it is mostly use)
// 2nd method have lot of benefits which we gonna learn in next file
for(const auto & i:ayush){
    cout<<i<<"\t";

return 0;
}
