/*
* * * * *
* * * *
* * *
* *
*
1row --> 5 times
2 --> 4
3 --> 3
4 --> 2
5 --> 1      (total rows-current row +1)
*/
#include<iostream>
using namespace std;
void print5(int n) {
    for(int i =1; i <= n; i++ ) {
        for(int j =0; j <n-i+1; j++) { // OR j = 1; j <= n-i+1
            cout << "* ";
        }
        cout <<endl;
    }
}
int main(){
     int t;
    cin >>t;
    for(int i = 0; i < t; i ++) {
        int n;
        cin >> n;
        print5(n);
    }
    
    return 0;
}




