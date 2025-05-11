#include<iostream>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;
    int smax;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if((a<b && a>c) || (a>b && a<c)){
            smax=a;
        }else if((b<a && b>c) || (b>a && b<c)){
            smax=b;
        }else{
            smax=c;
        }
        cout<<smax<<endl;
    }

}
