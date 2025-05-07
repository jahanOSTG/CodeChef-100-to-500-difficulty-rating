
#include<iostream>
using namespace std;
int  main(){
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if((a*100)<(b*10)){
            cout<<"Disposable"<<endl;
        }else{
        cout<<"Cloth"<<endl;
        }
    }
}
