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

    int sum=0;
    for(int i=0;i<5;i++){
        int num;
        cin>>num;
        sum+=num;
    }
    if(sum%5==0 && sum!=0){
        cout<<sum/5;
    }
    else cout<<"-1";
}