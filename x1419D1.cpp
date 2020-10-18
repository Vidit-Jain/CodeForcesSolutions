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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    vector<int> smaller,larger;
    for(int i=0;i<=n/2-1;i++){
        smaller.push_back(arr[i]);
    }
    for(int i=n/2;i<n;i++){
        larger.push_back(arr[i]);
    }
    reverse(larger.begin(),larger.end());
    auto x=smaller.begin();
    auto y=larger.begin();
    int count=0;
    cout<<(int)(ceil(n/2.0)-1)<<"\n";
    while(count<n){
        if(count%2==0 && y!=larger.end()){
            cout<<*y<<" ";
            y++;
        }
        else if(x!=smaller.end()){
            cout<<*x<<" ";
            x++;
        }
        count++;
    }
}