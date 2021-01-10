#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=2;i<=n;i++){
        cin>>arr[i];
    }
    stack<int> s;
    int x=n;
    while(x!=1){
        s.push(x);
        x=arr[x];
    }
    cout<<1<<" ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}