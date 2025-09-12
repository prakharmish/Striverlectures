/*
*********
 *******
  *****
   ***
    *
*/

//0th row --> (0,9,0)
//1st row --> (1,7,1)
//2nd row --> (2,5,2)
//3rd row --> (3,3,3)
//4th row --> (4,1,4)

//for spaces 
#include<iostream>
using namespace std;

void pattern8(int n){
    for(int i =0;i<n;i++){
        for(int j = 0;j<i;j++){
            cout<<" ";
        }

            for(int j =0; j< 2*n-(2*i+1);j++){
                cout<<"*";
            }

            for(int j =0;j<i;j++) {
                cout << " ";
            }
            cout<<endl;
    }
}
int main ( ){
    int t;
    cin >>t;
    for(int i = 0;i<t;i++){
        int n;
        cin >>n;
        pattern8(n);
    }
    return 0;
}