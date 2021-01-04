#include <bits/stdc++.h>
using namespace std;
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define MOD 1000000007
#define ll long long
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
#define pq priority_queue
#define ff first
#define ss second
#define pb push_back
#define DBG(vari) cerr<<#vari<<" = "<<(vari)<<endl;
#define file_read(x,y) freopen(x, "r", stdin); \
                  freopen(y, "w", stdout);
int reverse(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
        sum*=10;
    }
    return sum;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int num=0;
        string str="";
        int sum=0;
        if(x<=45){
            for(int i=9;i>0;i--){
                if(sum+i<=x){
                    sum+=i;
                    str=(char)(i+48)+str;
                    num*=10;
                    num+=i;
                }
                else{
                    num*=10;
                    str=(char)(x-sum+48)+str;
                    num+=x-sum;
                    break;
                }
                if(sum==x) break;
            }
            num=reverse(num);
            cout<<str<<"\n";
        }
        else cout<<"-1\n";
    }
}