#include <iostream>
using namespace std;

int main(){
   //we want our line of code to be executed minimum for one time 
    int i =2;
    do {
        cout<< "Striver " << i << endl;
        i = i + 1;
    } while(i<=1);
    cout << i << endl;

    return 0;
}