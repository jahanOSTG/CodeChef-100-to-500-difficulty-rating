#include<iostream>
using namespace std;

int main(){
    int a;
    float b;
    cin >> a >> b;

    if ((a + 0.50) > b) {
        cout << b << endl;
    } else if (a % 5 != 0) {
        cout << b << endl;
    } else {
        cout << b - (a + 0.50) << endl;
    }
}
