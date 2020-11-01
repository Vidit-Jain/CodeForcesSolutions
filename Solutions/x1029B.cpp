#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long

ll calc(ll n,ll arr[]){
    int highest=1;
    int currindex=0;
    for(int i=0;i<n-1;i++){
        int j=i;
        while(j<n-1 && arr[j+1]<=2*arr[j])
            j++;
        highest=max(highest,j-i+1);
        i=j;
    }
    return highest;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<calc(n,arr)<<"\n";
}