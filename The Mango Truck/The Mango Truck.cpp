#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,d,e;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        d=abs((b-c)/a);
        e=d*a+b;
        if(d<=c){
            cout<<d<<endl;
        }else{
            cout<<0<<endl;
        }

    }
}
