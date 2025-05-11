#include<iostream>
using namespace std;
int main(){
    int t,a,b;
    float c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        c=a*1.07;
        if(c<b){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
}
