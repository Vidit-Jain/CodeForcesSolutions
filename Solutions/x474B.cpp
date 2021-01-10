#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
int wormpileindex[1000001]={0};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int currindex=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i];j++){
            wormpileindex[currindex++]=i+1;
        }
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        cout<<wormpileindex[a]<<"\n";
    }
    
}