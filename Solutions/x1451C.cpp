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
        int n,k;
        string str1,str2;
        cin>>n>>k>>str1>>str2;
        int count1[26]={0},count2[26]={0};
        for(int i=0;i<n;i++){
            count1[str1[i]-'a']++;
            count2[str2[i]-'a']++;
        }
        bool flag=true;
        for(int i=0;i<25;i++){
            if(count1[i]<count2[i]){
                flag=false;
                break;
            }
            if(count1[i]>count2[i]){
                if((count1[i]-count2[i])%k==0){
                    count1[i+1]+=count1[i]-count2[i];
                    count1[i]=count2[i];
                    
                }
                else{
                    flag=false;
                    break;
                }
            }
        }
        if(count1[25]!=count2[25]) flag=false;
        if(!flag) cout<<"No\n";
        else cout<<"Yes\n";
    }
}