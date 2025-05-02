#include<iostream>

using namespace std;
int main() {
    int t, x;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >>x;
        if (x<3) {
            cout << "LIGHT" << endl;
        }else if(x>=3 && x<7){
            cout << "MODERATE" << endl;
        } else {
            cout << "HEAVY" << endl;
        }
    }
}
