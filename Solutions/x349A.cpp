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

    int n;
    cin>>n;
    int flag=1;
    int abc[3]={0,0,0};
    for(int i=0;i<n;i++){
        
        int a;
        cin>>a;
        if(a==25){
            abc[2]++;
        }
        else if(a==50){
            if(abc[2]!=0){
                abc[2]--;
                abc[1]++;
            }
            else flag=0;
        }
        else{
            if(abc[1]!=0 && abc[2]!=0){
                abc[1]--;
                abc[2]--;
                abc[0]++;
            }
            else if(abc[2]>=3){
                abc[2]-=3;
                abc[0]++;
            }
            else flag=0;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}