#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    ll total=(n*(n+1))/2;
    cout<<total%2<<"\n";
    total/=2;
    list<int> numbers;
    ll total2=0,n2=n;
    while(total-total2>=n2){
        total2+=n2;
        numbers.push_back(n2);
        n2--;
    }
    if(total!=total2)
        numbers.push_back(total-total2);
    cout<<numbers.size()<<" ";
    for(auto s:numbers){
        cout<<s<<" ";
    }
}