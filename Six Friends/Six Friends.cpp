#include<iostream>
using namespace std;
int main(){
    int t,x,y,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        a=x*3;
        b=y*2;
        if(a>=b){
            cout<<b<<endl;
        }else{
            cout<<a<<endl;
        }

}

}
