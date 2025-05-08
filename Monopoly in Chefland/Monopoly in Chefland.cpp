#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int t,a,b,c,d,e;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        d=max(a,max(b,c));
        e=a+b+c;

        if(a==b && b==c){
            cout<<"No"<<endl;
        }else if((e-d)>=d){
             cout<<"No"<<endl;
            }else if((e-d)<d){
            cout<<"yes"<<endl;
        }

    }
}
