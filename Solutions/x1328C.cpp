#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48
#define itoc(a) (char)(a+'0')
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        cin>>n>>str;
        string a="",b="";
        int index=n;
        for(int i=0;i<n;i++){
            if(str[i]!='1'){
                int num=(ctoi(str[i]))/2;
                a=a+itoc(num);
                b=b+itoc(num);
            }
            else{
                a=a+'1';
                b=b+'0';
                index=i+1;
                break;
            }
        }
        for(int i=index;i<n;i++){
            a=a+'0';
            b=b+str[i];
        }
        
        cout<<a<<"\n"<<b<<"\n";

    }
}