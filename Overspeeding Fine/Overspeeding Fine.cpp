
#include<iostream>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;
        if(x<=70){
            cout<<0<<endl;
        }else if(x>70 && x<=100){
            cout<<500<<endl;
        }else{
            cout<<2000<<endl;
        }
    }
}
