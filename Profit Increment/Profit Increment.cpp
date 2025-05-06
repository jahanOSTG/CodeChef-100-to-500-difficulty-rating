#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        c=a+(a/10);
        d=a-b;
        cout<<abs(d-c)<<endl;
    }
}
