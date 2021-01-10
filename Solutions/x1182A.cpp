#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;

    cout<<(ll)(((n%2==0)?pow(2,n/2):0));
}