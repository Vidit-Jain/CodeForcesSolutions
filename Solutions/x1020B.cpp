#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define MOD 1000000007
#define ll long long
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,i,j;
	cin>>n;
	int arr[n+1];
	rep1(i,n+1) cin>>arr[i];
	bool visited[n+1];
	
	rep1(i,n+1){
		rep(j,n+1) visited[j]=false;
		int k=i;
		while(!visited[k]){
			
			visited[k]=true;
			k=arr[k];
		}
		cout<<k<<" ";
	}
}
