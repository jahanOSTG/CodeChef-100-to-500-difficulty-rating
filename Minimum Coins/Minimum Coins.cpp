#include<iostream>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;
      if(x<10){
        cout<<x<<endl;
      }else if(x/10==0){
          cout<<0<<endl;
      }else{
          cout<<x%10<<endl;
      }
    }
}
