#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		bool pos=arr[0]>0?true:false;
		ll sum=0,maxe=arr[0];
		for(int i=0;i<n;i++){
			bool currpos=arr[i]>0?true:false;
			if(currpos!=pos){
				sum+=maxe;
				pos=currpos;
				maxe=arr[i];
			}
			else{
				maxe=max(maxe,arr[i]);
 
			}
		}
		sum+=maxe;
		cout<<sum<<endl;
	}
}
