#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x;
    for(int i=0; i<x;i++){
        cin>>y;
        int z=y/10;
        int p=100;
        if(p>z){
            cout<<p<<endl;
        }else{
            cout<<z<<endl;
        }
    }
}
