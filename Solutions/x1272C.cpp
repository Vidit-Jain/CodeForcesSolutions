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
bool isWorking(ll k,char workingKeys[],char currkey){
    for(int i=0;i<k;i++){
        if(workingKeys[i]==currkey) return true;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    char workingKeys[k];
    for(int i=0;i<k;i++){
        cin>>workingKeys[i];
    }
    ll sum=0;
    ll currStreak=0;
    for(int i=0;i<n;i++){
        if(!isWorking(k,workingKeys,str.at(i))){
            sum+=(currStreak*(currStreak+1))/2;
            currStreak=0;
        }
        else currStreak++;
    }
    sum+=(currStreak*(currStreak+1))/2;
    cout<<sum<<"\n";
}