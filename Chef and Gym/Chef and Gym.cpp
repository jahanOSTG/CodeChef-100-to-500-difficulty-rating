#include<iostream>

using namespace std;

int main() {
    int t, x,y,z;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >>x>>y>>z;
        if ((x+y)<=z) {
            cout << 2 << endl;
        }else if(x>z ){
            cout <<0 << endl;
        } else {
            cout <<1 << endl;
        }
    }
}

