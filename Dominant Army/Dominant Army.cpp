#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,a,b,c,d;
    int sum,n_max;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        sum=a+b+c;
        n_max=max({a,b,c});
        d=sum-n_max;
        if(n_max>d){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
 }
}
