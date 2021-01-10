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
    int a,b;
    cin>>a>>b;
    stack<int> sequence;
    sequence.push(b);
    while(a<b){
        if(b%10==1)
            b/=10;
        else if(b%2==0)
            b/=2;
        else break;
        sequence.push(b);
    }
    if(a!=b) cout<<"NO";
    else{
        cout<<"YES\n"<<sequence.size()<<"\n";
        while(!sequence.empty()){
            cout<<sequence.top()<<" ";
            sequence.pop();
        }
    }
}   