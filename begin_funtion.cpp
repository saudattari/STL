#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(5); // add element at the end of array
    v1.push_back(28);
    v1.push_back(28);
    v1.erase(v1.begin());
    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
}