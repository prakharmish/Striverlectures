/*
1
22
333
4444
55555
 */
#include <iostream>
using namespace std;
void print4(int n) {
    for(int i = 1; i <=n;i++) {
        for(int j = 1; j<=i;j++) {
            cout << i << " "; // On every row we are printing the row number itself.
        }
    }
    cout << endl;
}

int main(){
     int t;
    cin >>t;
    for(int i = 0; i < t; i ++) {
        int n;
        cin >> n;
        print4(n);
    }
    
    return 0;
}
    
    