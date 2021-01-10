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
    int arr[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }   
    int maximum=arr[1];
    for(int i=1;i<=n;i++){
        maximum=max(maximum,arr[i]);
    }
    cout<<maximum;
}
