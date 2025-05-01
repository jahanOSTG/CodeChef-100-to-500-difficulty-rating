#include<iostream>
using namespace std;
int main(){
    int t,x,y,z;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        if(x>y){
               z=x-y;
            cout<<z<<endl;
        }else{
            cout<<"0"<<endl;
        }

    }


}
