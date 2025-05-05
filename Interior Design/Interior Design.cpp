#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,d;
    int x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c>>d;
        x=a+b;
        y=c+d;
       if(x<=y){
        cout<<x<<endl;
      }else{
          cout<<y<<endl;
      }
}

}
