#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define MOD 1000000007
#define ll long long
#define MAXN 110
int n;
int X[MAXN];
int Y[MAXN];
bool visited[MAXN];
int dfs(int s){
    visited[s]=true;
    for(int i=0;i<n;i++){
        if((X[i]==X[s] || Y[i]==Y[s]) && !visited[i]) dfs(i);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        visited[i]=false;
        cin>>X[i]>>Y[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(i);
            count++;
        }
    }
    cout<<count-1;
}