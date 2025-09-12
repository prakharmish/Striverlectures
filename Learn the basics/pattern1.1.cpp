 /*
 * * * *
 * * * *
 * * * *
 * * * *
 */


// 0th row --> 4 stars 
// 1st row --> 4 stars till the 3rd row.
// Whenever i = 0 , j will be 0,1,2,3
// Whenever i = 1, j will be 0,1,2,3
#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i =0;i<n;i++){
        for(int j = 0; j <n;j++){
            cout<<"* ";
        }
        // As soon as N stars are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}
int main (){
    //Test Cases..our pattern function should run these many times.
    int t; //for test cases
    cin >> t;
    for(int i = 0; i<t;i++){
        int n;
        cin >> n;
        print1(n);
    }
    // int n;
    // cin >> n;
    // print1(n);

}