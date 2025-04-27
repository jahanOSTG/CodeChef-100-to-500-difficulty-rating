#include<iostream>
using namespace std;
int main(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int p=abs(a-b);
    int q=abs(x-y);
    if(p<q){
        cout<<"First"<<endl;
    }else if(p==q){
        cout<<"Both"<<endl;
    }else{
        cout<<"Second"<<endl;
    }
}
