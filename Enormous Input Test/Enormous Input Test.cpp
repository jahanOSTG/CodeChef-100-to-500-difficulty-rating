#include<iostream>
using namespace std;
int main(){

    int t,a,n;
    cin>>t;
    cin>>a;
     int count=0;

    for(int i=0;i<t;i++){

            cin>>n;
            if(n%a==0){
                count++;
            }


    }
    cout<<count<<endl;
}

