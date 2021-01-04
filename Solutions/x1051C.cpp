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
    int n;
    cin>>n;
    int arr[n];
    map<int,int> m;
    int freq[4]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(m.find(arr[i])==m.end()){
            m[arr[i]]=1;
            freq[1]++;
        }
        else{
            m[arr[i]]++;
            if(m[arr[i]]==2){
                freq[1]--;
                freq[2]++;
            }
            if(m[arr[i]]==3){
                freq[2]--;
                freq[3]++;
            }
        }
    }
    if(freq[1]%2==0){
        cout<<"YES\n";
        int x=0;
        for(int i=0;i<n;i++){
            if(m[arr[i]]==1){
                cout<<(char)('A'+x);
                x=1-x;
            }
            else{
                cout<<'A';
            }
            
        }
        cout<<"\n";
    }
    else if(freq[3]){
        cout<<"YES\n";
        int fix=1;
        int x=0;
        for(int i=0;i<n;i++){
            if(m[arr[i]]==1){
                cout<<(char)('A'+x);
                x=1-x;
            }
            else{
                if(m[arr[i]]>=3 && fix==1){
                    fix--;
                    cout<<'B';
                }
                else cout<<'A';
            }
        }
        cout<<"\n";
    }
    else cout<<"NO\n";
}