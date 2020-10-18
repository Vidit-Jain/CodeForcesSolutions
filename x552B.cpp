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
    int n;
    cin>>n;
    ll arr[10];
    arr[0]=0;
    ll currnumber=0;
    for(int i=1;i<10;i++){
        arr[i]=arr[i-1]+(ll)(i*(pow(10,i)-pow(10,i-1)));
    }
    int power=0;
    for(int i=0;i<10;i++){
        if(pow(10,i)<=n){
            power=i;
        }else break;
    }
    currnumber+=arr[power];
    currnumber+=(ll)((power+1)*(n-pow(10,power)+1));
    cout<<currnumber<<"\n";
}