#include<iostream>
using namespace std;
int main(){
    string a;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
     int first = a[0] - '0';
        int last = a[a.length() - 1] - '0';

        cout << (first + last) << endl;
    }
    }

