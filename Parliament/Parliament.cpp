#include<iostream>
using namespace std;
int main(){
    int t,a,b;
    float c;

    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        c=a/2.0;
        if(c<=b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
}
