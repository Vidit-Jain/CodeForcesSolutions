#include <bits/stdc++.h>
using namespace std;
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define lsb(x) (x&(-x))
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long
#define file_read(x,y) freopen(x, "r", stdin); \
                  freopen(y, "w", stdout);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int dul[3]={0};
        int n=str.size();
        for(int i=0;i<n;i++){
            dul[0]+=(isdigit(str[i]))?1:0;
            dul[1]+=(isupper(str[i]))?1:0;
            dul[2]+=(islower(str[i]))?1:0;   
        }
        int p=( ((dul[0]==0)?1:0) + ((dul[1]==0)?1:0) + ((dul[2]==0)?1:0));
        // cout<<p<<"\n";
        if(p==0){}
        else if(p==2){
            if((dul[0]==0) && (dul[1]==0)){
                str[0]='0';
                str[1]='A';
            }
            else if((dul[0]==0 )&& (dul[2]==0)){
                str[0]='0';
                str[1]='a';
            }
            else if((dul[1]==0) && (dul[2]==0)){
                str[0]='A';
                str[1]='a';
            }
        }
        else if(p==1){ 
            char x;
            if(dul[0]==0) x='0';
            else if(dul[1]==0) {
                x='A';
            }
            else x='a';
            for(int i=0;i<n;i++){
                
                if((isdigit(str[i]))&&(dul[0]>=2)){
                    // cout<<"c\n";
                    str[i]=x;
                    break;
                }
                if((isupper(str[i]))&&(dul[1]>=2)){
                    // cout<<"b\n";
                    str[i]=x;
                    break;
                }
                if((islower(str[i]))&&(dul[2]>=2)){
                    // cout<<"a\n";
                    str[i]=x;
                    break;
                }
            }
        }
        else{
            str[0]='0';
            str[1]='A';
            str[2]='a';
        }
        cout<<str<<"\n";
    }
}