#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>v1;
    v1.push_back(12);
    v1.push_back(80);
    cout<<v1[0]<<" "<<v1[1]<<endl;
    v1.clear(); //now cleared
    v1.push_back(90);
    for(int i=0; i<v1.size(); i++){
        cout<<" "<<v1[i];
    }
}