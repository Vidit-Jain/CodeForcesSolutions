#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,a;
    cin>>n>>a;
    int arr[n+1];
    for(int i=1;i<=n;i++) cin>>arr[i];
    int total=0;
    for(int len=0;len<=n;len++){
            int temp = 0;
            int possible = 0;
            if (a - len >0){
                possible++;
                if(arr[a-len]==1) temp++;
            }
            if(a+len<=n){
                possible++;
                if(arr[a+len]==1) temp++;
            }
            if(temp==possible) {
                if(len==0) temp/=2;
                total+=temp;
            }
    }
    cout<<total<<"\n";
}