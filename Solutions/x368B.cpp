#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    unordered_set<int> set;
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int unique[n];
    unique[n-1]=1;
    set.insert(a[n-1]);
    for(int i=n-2;i>=0;i--){
            unique[i]=unique[i+1];
            if(set.find(a[i])==set.end()){
                set.insert(a[i]);
                unique[i]++;
            }
    }
    for(int i=0;i<m;i++){
        int l;
        cin>>l;
        cout<<unique[l-1]<<endl;
    }

}