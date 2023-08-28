#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(12);
    bool IsEmpty = false;
    if(v1.empty()){
        IsEmpty=true;
    }
    cout<<"IsEmpty = "<<IsEmpty<<endl;
}