#include<iostream>

#include <algorithm>

using namespace std;
int main() {
    int t, a, b;
    int sum = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a;
        int sum = 0;
        while (a != 0) {
            b = a % 10;
            sum = sum + b;
            a = a / 10;


        }

        cout << sum << endl;



    }
}
