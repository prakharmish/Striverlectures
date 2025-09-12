/*
*
* *
* * *
* * * * *  line of symmetry
* * * *
* * *
* *
*
*/
//Symmetrical pattern
// 9 rows = 2n-1 times  ( n = 5 )
// Till the symmetrical portion then number of starts = row number



#include<iostream>
using namespace std;


    void pattern10(int n){

        for(int i = 1; i <=2*n-1 ; i++){
            int stars = i;
            if(i>n) stars = 2*n-i;
             for(int j =1;j<=stars;j++){
                cout<<"*";
             }
             cout<<endl;

        }

    }
    int main(){
        int t;
        cin>>t;
        for(int i = 0; i<t ;i++){
            int n;
            cin>>n;
            pattern10(n);
        }
    }
