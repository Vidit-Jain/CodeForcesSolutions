#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) ((int)a-48);
#define MOD 1000000007
#define ll long long
string printalternate(int len){
    string ten="10";
    string result="";
    for(int i=0;i<len;i++){
        result+=ten;
    }
    return result;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        string number;
        cin>>number;
        int count[2]={0,0};
        for(int i=0;i<number.size();i++){
            
            int a=ctoi(number.at(i));
            count[a]++;
        }
        if(count[0]==0 || count[1]==0){
            cout<<number<<"\n";
        }
        else cout<<printalternate(number.size())<<"\n";
    }
}