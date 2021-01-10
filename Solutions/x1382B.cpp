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

    int t;
    cin>>t;
    string answer[2]={"First","Second"};
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int ones=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1) ones++;
            else break;
        }
        if(ones==n) cout<<answer[1-ones%2]<<"\n";
        else cout<<answer[ones%2]<<"\n";
    }
}
