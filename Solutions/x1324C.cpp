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
    while(t--){
    int curr=0,maxjump=0;
    string word;
    cin>>word;
    for(int i=0;i<length(word);i++){
        curr++;
        maxjump=max(curr,maxjump);
        if(word.at(i)=='R'){
            curr=0;
        }
    }
    curr++;
    maxjump=max(curr,maxjump);
    cout<<maxjump<<"\n";
    }
}