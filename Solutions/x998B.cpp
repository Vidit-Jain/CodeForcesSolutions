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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,b;
    cin>>n>>b;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bool split[n];
    for(int i=0;i<n;i++) split[i]=false;
    int eo[2]={0};
    vector<int> v;
    for(int i=0;i<n-1;i++){
        eo[arr[i]%2]++;
        if(eo[0]==eo[1]){
            split[i]=true;
            v.push_back(abs(arr[i]-arr[i+1]));
        }
    }
    sort(v.begin(),v.end());
    int a=0;
    int highest=0;
    for(auto s:v){
        if(a+s<=b){
            highest++;
            a+=s;
        }
        else break;
    }
    cout<<highest<<"\n";

}