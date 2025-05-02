
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=(a*2)+b;
    int y=(c*2)+d;
    if(x==y){
        cout<<"Equal"<<endl;
    }else if(x>y){
        cout<<"Messi"<<endl;
    }else{
        cout<<"Ronaldo"<<endl;
    }
}
