#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool dp[1000009];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	dp[0]=true;
	dp[1]=true;
	for(int i=2;i<1000009;i++){
		if(i*i>=1000009) break;   
		for(int j=i*i;j<1000009;j+=i){
			dp[j]=true;
		}
	}
	while(t--){
		ll x;
		cin>>x;
		double root=sqrt(x);
		if(root==int(root) & !dp[int(root)])
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
