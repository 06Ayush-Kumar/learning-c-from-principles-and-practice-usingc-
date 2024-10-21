// we gonna make a vector first
// syntax =vector<data_type>name of vector={}

#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> ayush={1,2,3,4,56};  // we created a vector named ayush with data type of integer 
  cout<<ayush.size()              // .size(_) use to find the size of vector
  vector<int> bd(5);        // we have given size of vector as 5

// FOR PRINTING ELEMENT OF A VECTOR THERE ARE 2 WAYS:

// 1st way

for(int i:ayush){
    cout<i<<"\t";
// 2nd way(it is mostly use)
// 2nd method have lot of benefits which we gonna learn in few minutes

for(const auto & i:ayush){      // in this auto and const are use so no need for data type
    cout<<i<<"\t";

return 0;
}

// for adding element or replacing element in a vector there are 2 ways 
//1. to use .push_back()= it will push or place that element in lats of vector
//2. to use vector_name.insert(vector_name.begin()+x,elem. which you want to add)
//x== at what position you want to add the element

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 4, 56};
    vector<string> a = {"ayush", "mohan", "mukjes"};
    
    // Add "papa" to vector 'a'
    a.push_back("papa");

    // Insert "mummy" at the third position
    a.insert(a.begin() + 2, "mummy");

    cout << v[1] << '\n' << a[3] << '\n';

    // Print elements of vector 'a' one by one
    for (const auto &elem : a) {
        cout << elem << " ";
    }

    return 0;
}

// few examples base on adding elem. or replacing elem. in vector

#include<iostream>
#include<vector>
using namespace std;
using str=string;
int main(){
    vector <int> v={1,2,4,6,};
    //v[4]=68;   // will not work
    v.push_back(7);    // inserting 7 at last of vector
    v.insert(v.begin()+0,5);  // inserting 5 at first postion (o index you can call)
    for (const auto &elem : v) {
       cout << elem << " ";
    }
        return 0;
}



//FOR MODIFYING ELEMENT OF A VECTOR

// 1st way(more basic way)


#include<iostream>
using namespace std;
#include<vector>
using str=string;
int main(){
    vector<int>v;
    int size;
    int number;
    cout<<"enter the size of vector";
    cin>>size;
    int j=0;
    while(j<size){
        cin>>number;
        v.push_back(number);   // it wad created by me ,but use the below one as it it better
        ++j;
    }
    for (const auto &elem:v){
        cout<<elem<<"\t";
    }
    return 0;
}

// 2nd way(better than the first )

#include<iostream>
#include<vector>
using namespace std;
using str=string;
int main(){
    vector<int>amop;
    int number;
    while(cin>>number){
        amop.push_back(number);
    }
for(const auto &i:amop){
    cout<<i+1<<"\t";    // in this the elem. of vector here only
}
    return 0;
}
