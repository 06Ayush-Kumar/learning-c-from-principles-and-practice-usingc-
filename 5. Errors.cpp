//5.6 EXCEPTION

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

//5.6.3 BAD INPUT

//1st example
#include<iostream>
using namespace std;
int  main(){
    double d=0;
    cin>>d;
    if(cin){    // as long as you give integer or decimal as input it will display hello( integer or decimal because cin is taking d which is float)
        cout<<"thanks for wrinting a number";
    }
    else{
        cout<<"please dont write non number";
    }
    return 0;
}
// 2nd example

#include<iostream>
using namespace std;
int  main(){
    double d=0;
    cin>>d;
    if(!cin){  // !con means not cin which means not integer  //The condition !cin (“not cin,” that is, cin is not in a good state) means that the previous operation on cin failed
        cerr<<"please dont write non number";
    }
    else{
        cout<<"thanks for wrinting a number";
    }
    return 0;
}
// why use crr when we can use cout?
//Distinction between Output and Error Messages: cout is used for standard output, while cerr is used for standard error. 
//This separation helps differentiate between regular program output and error messages

// examples on runtime_error
// for explaination will attach an chat gpt article


// 1st examplpe

#include <iostream>
#include <stdexcept> // Required for std::runtime_error  // takes only string  // no need to declare class becuase <stdexcept itself is a class
using namespace std;
using str = string;

// Define a custom error function
void error(str s) {
    throw runtime_error(s);  
}

int main() {
    try {
       error("enjoy you life man why are you doing coding:");

        return 0; // 0 indicates success
    }
    catch (runtime_error& e) {
        cerr << "runtime error: " << e.what() << '\n';
        // keep_window_open(); // Remove or define this function if necessary
        return 1; // 1 indicates failure
    }
}

// 2nd example

#include<iostream>
#include<stdexcept>
using namespace std;
using str=string;
void error(str s){
   // throw run_time_error(s);  // cannot use run_time_error because its not a part of <stdexcpet>
    throw runtime_error(s);
}
int main(){
    try{
        error("man go outside and play");
    }
    catch(runtime_error &e){
        cerr<<"runtime error:"<<e.what();
    }
    return 1;
}
// explaination:

// What is e.what()?
// Imagine you have a special box called runtime_error. This box is used to store error messages when something goes wrong in your program. When you catch this error box, you can open it to see what the problem was by using the what() function.

// How it works in your code:
// Throwing an Error:

// You have a function called error that throws this special box (runtime_error) with a message inside it.
// When you call error("Enjoy your life man, why are you doing coding?");, you are creating a runtime_error box with the message "Enjoy your life man, why are you doing coding?" inside it and throwing it.
// Catching the Error:

// The try block is where your program tries to run the code. If something goes wrong and an error box is thrown, it jumps to the catch block.
// catch (runtime_error& e) catches the thrown runtime_error box and gives you access to it through the variable e.
// Getting the Error Message:

// e.what() is like opening the box e and reading the message inside.
// cerr << "runtime error: " << e.what() << '\n'; prints the message from the box to the screen.
// Example in Simple Terms:
// You try to run your program.
// If something goes wrong and you call error("Enjoy your life man, why are you doing coding?");, your program throws a runtime_error box with the message inside.
// The catch block catches this error box.
// e.what() opens the box and gets the message inside: "Enjoy your life man, why are you doing coding?".
// The program then prints "runtime error: Enjoy your life man, why are you doing coding?" to the screen.
// Full Simplified Code:
// cpp
// Copy code
// #include <iostream>
// #include <stdexcept> // Required for std::runtime_error
// using namespace std;

// using str = string;

// void error(str s) {
//     throw runtime_error(s); // Create and throw a box with an error message
// }

// int main() {
//     try {
//         // Try to run this code
//         error("Enjoy your life man, why are you doing coding?"); // This will throw an error

//         return 0; // If no error, return success
//     }
//     catch (runtime_error& e) {
//         // Catch the error box
//         cerr << "runtime error: " << e.what() << '\n'; // Print the message from the box
//         return 1; // Return failure
//     }
// }
// What Happens When You Run This:
// The program tries to execute the code in the try block.
// error("Enjoy your life man, why are you doing coding?"); throws an error with the message inside.
// The catch block catches the error.
// e.what() gets the message from the error and prints it: "runtime error: Enjoy your life man, why are you doing coding?".
// The program exits with a failure code (1).
// So, e.what() is just a way to get the error message from the error box and see what went wrong in your program.



