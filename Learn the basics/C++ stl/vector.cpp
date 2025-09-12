#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v; //This lines creates an empty container {}
    v.push_back(1); // This will take one into the empty container {1}
    v.emplace_back(3); // {1,3}

    vector<pair<int, int>>vect;

    vect.push_back({1,2});
    vect.emplace_back(3,4);

    vector<int>vro(5,100); // A container container 5 100 is  already {100,100,100,100,100}defined
                           // we can always increase the size of the vector even it is predefined.
    vector<int>garbage(5); 

    vector<int> v1(5,20);
    vector<int> v2(v1);






     
}
int main(){

}