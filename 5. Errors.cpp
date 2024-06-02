// catch and throw are used in c++ just like try and except in python
// example of throw:

#include<iostream>
using namespace std;
class wrong_arguments{};
int area(int a,int b){
    if (a <=0 || b<=0  ){
        throw wrong_arguments{};
    }
    else{
        return a*b;
    }
}
  

int main(){
    cout<<area(2,-1);   // it will just give wrong_arguments
    return 0;
    
}

// using catch wth throw
// catch is used to diplay some message when throw function is applied

#include<iostream>
using namespace std;
class wrong_arguments{};
int area(int a,int b){
    if (a <=0 || b<=0  ){
        throw wrong_arguments{};
    }
    else{
        return a*b;
    }
}
  

int main(){
    try{
        cout<<area(2,-64);
    }
    
        catch( wrong_arguments){  // as we can see the input are negative thats why throw will be used .But here we cant print other thing on diplay rather than wrong_argument by using catch 
            cout<<"pls dont give negative input";
        }
    
    
    return 0;
}

// more example on catch and throw

#include <iostream>
#include <vector>
using namespace std;

class custom_out_of_range {};

void vector_value(int i) {
    vector<int> v = {1, 2, 3, 5, 7};
    for (int val : v) {
        if (val == i) {
            cout << i << " is in the vector" << endl;
            return;  // Return after printing if the value is found in the vector
        }
    }
    throw custom_out_of_range{};  // Throw an exception if the value is not found
}

int main() {
    try {
        vector_value(1);  // Check for a value in the vector
    } catch (const custom_out_of_range&) {  // Catch the custom exception by reference
        cout << "The value is not in the vector." << endl;
    }
    return 0;
}

