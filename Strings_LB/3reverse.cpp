#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
    return ch;
    }
    else {
        char temp = ch-'A' + 'a';
        return temp;
    }
}
bool isPalindrome(char name[], int n){
    char s1 = 0;
    char e1 = n-1;
    // if(toLowerCase(name[s1]) != toLowerCase(name[e1]))
    if(name[s1] != name[e1] ){
        return 0;
    }
    else {
        s1++;
        e1--;
    }
    return 1;
}
void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}
int getLength(char name[]){
    int count = 0;
    for(int i = 0 ; name[i] != '\0'; i ++){
        count ++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name "<< endl;
    cin>>name;
    cout<<"Your name is "<<endl;
    cout<<name<<endl;
    int len = getLength(name);
    cout<<"Length: "<<len<<endl;
    reverse(name, len);
    cout<<"Your name is "<< name<<endl;

    cout<<"Palindrome or NOT: " << isPalindrome(name, len)<<endl;

    cout<< " CHARACTER IS "<< toLowerCase('b')<<endl;
    cout<< " CHARACTER IS "<< toLowerCase('B')<<endl;
    return 0;
}