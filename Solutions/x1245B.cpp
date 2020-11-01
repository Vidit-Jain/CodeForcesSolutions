#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
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
        int n;
        cin>>n;
        int abc[3]={0};
        cin>>abc[0]>>abc[1]>>abc[2];
        string str1;
        cin>>str1;
        int count[3]={0};
        for(int i=0;i<n;i++){
            if(str1[i]=='R') count[0]++;
            else if(str1[i]=='P') count[1]++;
            else count[2]++;
        }
        string str="";
        int wins=0;
        for(int i=0;i<n;i++){
            if(str1[i]=='R'){
                count[0]--;
                if(abc[1]>0){
                    wins++;
                    abc[1]--;
                    str=str+'P';
                }
                else{
                    if(abc[2]>count[1]){
                        abc[2]--;
                        str=str+'S';
                    }
                    else if(abc[0]>count[2]){
                        abc[0]--;
                        str=str+'R';
                    }
                    else{
                        if(abc[2]>0) {
                            abc[2]--;
                            str=str+'S';
                        }
                        else{
                            abc[0]--;
                            str=str+'R';
                        }
                    }
                }
            }
            else if(str1[i]=='P'){
                count[1]--;
                if(abc[2]>0){
                    wins++;
                    abc[2]--;
                    str=str+'S';
                }
                else{
                    if(abc[1]>count[0]){
                        abc[1]--;
                        str=str+'P';
                    }
                    else if(abc[0]>count[2]){
                        abc[0]--;
                        str=str+'R';
                    }
                    else{
                        if(abc[1]>0) {
                            abc[1]--;
                            str=str+'P';
                        }
                        else{
                            abc[0]--;
                            str=str+'R';
                        }
                    }
                }
            }
            else if(str1[i]=='S'){
                count[2]--;
                if(abc[0]>0){
                    wins++;
                    abc[0]--;
                    str=str+'R';
                }
                else{
                    if(abc[2]>count[1]){
                        abc[2]--;
                        str=str+'S';
                    }
                    else if(abc[1]>count[0]){
                        abc[1]--;
                        str=str+'P';
                    }
                    else{
                        if(abc[2]>0){
                            abc[2]--;
                            str=str+'S';
                        }
                        else {
                            abc[1]--;
                            str=str+'P';
                        }
                    }
                }
            }
        }
        if(wins*2>=n){
            cout<<"YES\n"<<str<<"\n";
        }
        else cout<<"NO\n";
        
    }
}