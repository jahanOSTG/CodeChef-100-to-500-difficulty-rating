#include<iostream>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;
    for(int i=0; i<t;i++){
        cin>>a>>b>>c;
        if((b-c)<a){
            cout<<"NO"<<endl;
        }else{
             cout<<"YES"<<endl;
        }
    }
}
