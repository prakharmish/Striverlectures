#include <iostream>
using namespace std;

int main(){
    string s = "Striver ";
    int len = s.size();
    s[len -1 ] = 'z';
    cout << s[2];  
    cout << s[len -1];
      return 0;
}