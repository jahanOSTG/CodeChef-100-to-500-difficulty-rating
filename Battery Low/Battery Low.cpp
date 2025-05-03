#include<iostream>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;
        if(x<=15){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
