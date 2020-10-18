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
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int firstone=INT_MIN,lastone=INT_MIN;
        int total=0;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
                firstone=lastone;
                lastone=i;
                if(firstone!=INT_MIN) {
                    total += max(((lastone-firstone) / (k + 1))-1, 0);
                }
                else{
                    total+= max(ceil((lastone-k)/(double)(k+1)),0.0);
                }
            }
        }

        if(firstone==INT_MIN && lastone==INT_MIN){
            total=ceil((double)n/(k+1));
        }
        else if(str[n-1]!='1'){
            total+=ceil((n-lastone)/(double)(k+1))-1;
        }
        cout<<total<<"\n";
    }
}