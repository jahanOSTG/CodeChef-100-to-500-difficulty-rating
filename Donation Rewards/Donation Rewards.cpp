#include<iostream>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;
       if(x<=3){
        cout<<"BRONZE"<<endl;
       }else if(x>3 && x<=6){
           cout<<"SILVER"<<endl;
       }else{
           cout<<"GOLD"<<endl;
       }

  }
}

