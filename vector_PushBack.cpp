#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>Student_RollNo;
    bool flag = false;
    while (flag == false)
    {
    cout<<"How many numbers you want to insert: ";
    int TotalStudent;
    cin>>TotalStudent;
    cout<<"Enter Roll NO: ";
        for(int i=0; i<TotalStudent; i++){
        int student;
        cin>>student;
        Student_RollNo.push_back(student);
    }
    char ch;
    cout<<"Do you want insert more numbers reply with (y/n): ";
    cin >> ch;
    if(ch == 'y'){
        flag = false;
    }
    else{
        flag = true;
    }
    }
    int size = Student_RollNo.size();
    for(int i=0; i<size; i++){
        cout << " "<<Student_RollNo[i];
    }
    return 0;
}

