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

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k>n)
            cout<<"NO\n";    
        else if((n%2==0 && k%2==0) || (n%2==1 && k%2==1)){
            cout<<"YES\n";
            for(int i=0;i<k-1;i++){
                cout<<"1 ";
            }
            cout<<(n-k+1)<<"\n";
        }
        else if(n%2==0 && k%2==1){
            if(n/2>=k){
                cout<<"YES\n";
                for(int i=0;i<k-1;i++){
                    cout<<"2 ";
                }
                cout<<(n-2*(k-1))<<"\n";
            }
            else cout<<"NO\n";
        }
        else if(n%2==1 && k%2==0){
            cout<<"NO\n";
        }
        
    }
}