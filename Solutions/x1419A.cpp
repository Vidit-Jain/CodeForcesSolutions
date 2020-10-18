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
int something(int n,string str){
    int evenpos[2]={0};
    int oddpos[2]={0};
    for(int i=0;i<n;i++){
        if(i%2==0){
            int num=ctoi(str[i]);
            oddpos[num%2]++;
        }
        else{
            int num=ctoi(str[i]);
            evenpos[num%2]++;
        }
    }
    if(n%2==0){
        if(evenpos[0]>=1) return 2;
        else return 1;
    }
    else {
        if(oddpos[1]>=1) return 1;
        else return 2;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        cout<<something(n,str)<<"\n";
    }
}