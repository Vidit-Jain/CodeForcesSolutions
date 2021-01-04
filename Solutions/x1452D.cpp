#include <bits/stdc++.h>
using namespace std;
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 998244353
#define ll long long

int power(ll x, unsigned int y,ll p)  
{  
    ll sum = 1;
    x = x % p;  
    if (!x) return 0;
    while (y > 0)  
    {  
        if (y % 2)  
            sum = (sum*x) % p;  
  
        y/=2; 
        x = (x*x) % p;  
    }  
    return sum;  
} 

ll powmod(ll a, ll b, ll p){
    a %= p;
    if (a == 0) return 0;
    ll product = 1;
    while(b > 0){
        if (b&1){    
            product *= a;
            product %= p;
            --b;
        }
        a *= a;
        a %= p;
        b /= 2;    
    }
    return product;
} 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ll arr[max(3ll,n+1)];
    arr[0]=arr[1]=arr[2]=1;
    ll prefix=3;
    for(int i=3;i<=n;i++){
        arr[i]=(prefix-arr[i-1])%MOD;
        prefix+=(arr[i])%MOD;
    }
    ll x= powmod(power(2,n,MOD),MOD-2,MOD)%MOD;
    cout<<(x*arr[n])%MOD<<"\n";
}
