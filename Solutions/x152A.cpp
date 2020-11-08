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
bool isSuccessful(string arr[],int n,int m,int index){
    bool flag=false;
    for(int i=0;i<m;i++){
        bool x=true;
        for(int j=0;j<n;j++){
            x=x&&(arr[j][i]<=arr[index][i]);
        }
        flag=flag || x;
    }
    return flag;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    string arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int count=0;
    for(int i=0;i<n;i++) count+=isSuccessful(arr,n,m,i);
    cout<<count<<"\n";
}