#include<iostream>

#include <algorithm>

using namespace std;
int main() {
    int t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a>>b;
        if((b*30)<=a){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}
