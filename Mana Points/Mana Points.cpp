
#include<iostream>
using namespace std;
int main(){
    int a,b,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a<=b){
            cout<<b/a<<endl;
        }else{
            cout<<0<<endl;
        }
    }

}
