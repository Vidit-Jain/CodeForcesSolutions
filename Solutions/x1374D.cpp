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
void printMap(unordered_map<int,int> p){
    for(auto s:p){
        cout<<s.first<<" "<<s.second<<"\n";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,int> p;
        int highestpos=0,highest=0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            int a=(k-num%k)%k;
            p[a]++;

            if(a!=0 && p[a]>highest || (p[a]==highest && a>=highestpos)){
                highestpos=a;
                highest=p[a];
            }

        ll answer=max(1+(highest-1)*(ll)k+highestpos,0ll);
        cout<<answer<<"\n";

    }
}