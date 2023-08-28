#include<iostream>
#include<vector>
using namespace std;

void Push_Back(vector<int>& v1);
void Pop_Back(vector<int>& v1);
void print(const vector<int>& v1, const string& message);

int main() {
    vector<int> v1;
    Push_Back(v1);
    print(v1, "before removing items");
    Pop_Back(v1);
    print(v1, "After removing items");

    return 0;
}

void Push_Back(vector<int>& v1) {
    cout << "How many numbers you wish to insert: ";
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cout << "Enter number: ";
        int n;
        cin >> n;
        v1.push_back(n);
    }
}

void Pop_Back(vector<int>& v1) {
    while (!v1.empty()) {
        v1.pop_back();
    }
}

void print(const vector<int>& v1, const string& message) {
    cout << message << endl;
    int size = v1.size();
    for (int i = 0; i < size; i++) {
        cout << " " << v1[i];
    }
}
