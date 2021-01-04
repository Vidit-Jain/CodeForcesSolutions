#include <bits/stdc++.h>
using namespace std;
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n=str.size();
        int stack1=0,stack2=0,pairs=0;
        for(int i=0;i<n;i++){
            if(str[i]=='(') stack1++;
            else if(str[i]=='[') stack2++;
            else if(str[i]==')' && stack1){
                stack1--;
                pairs++;
            }
            else if(str[i]==']' && stack2){
                stack2--;
                pairs++;
            }
        }
        cout<<pairs<<"\n";
    }
}