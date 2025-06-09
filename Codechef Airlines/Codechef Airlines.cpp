
#include<iostream>
using namespace std;
int main(){

    int t,a,b,c,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        d=a*10;
        if(d<=b){
            cout<<d*c<<endl;
        }else{
            cout<<b*c<<endl;
        }

    }
}
