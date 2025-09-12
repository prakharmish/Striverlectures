#include<iostream>
using namespace std;

int main(){
    // i = 1
    // i = 2
    // i = 3
    // i = 4
    // i = 5
    // i = 6



    int i; // after declaring here it will run, and the we will initial in the loop.
    for (  i = 1; i<=5;i = i + 1) { //1. variable declaration, initial only get 
    // executed for the first iteration
    //2. The condition at which it will stop
    //3. Condition at which we want it to run
    cout << "Striver "<< endl;
    }
    cout << i << endl; // it will not print i
    // Where we declare the variable the scope is limited to that.

    return 0;
}

    
    
    
    
    