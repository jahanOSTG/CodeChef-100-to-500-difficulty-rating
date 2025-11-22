#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	int first=a*c;
	int second=b*c;
	
	if(first<second)cout<<second;
	else cout<<first;

}
