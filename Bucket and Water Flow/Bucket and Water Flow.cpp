#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int t,a,b,c,d,e;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c>>d;
        e=a+c*d;
        if(e>b){
            cout<<"overflow"<<endl;
        }else if(e==b){
             cout<<"filled"<<endl;
            }else{
            cout<<"Unfilled"<<endl;
            
        }

    }
}
