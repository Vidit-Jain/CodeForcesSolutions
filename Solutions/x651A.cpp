#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    int count=0;
    while(1){
        if(a>b){
            b++;
            a-=2;
        }
        else{
            a++;
            b-=2;
        }
        count++;
        if(a<0 || b<0) count--;
        if(a<=0 || b<=0) break;
    }
    cout<<count<<endl;
}   