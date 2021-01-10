#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
/*
9
537 871 1028 1 633 821 82 205 177
*/
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],arrsorted[n],minnumber=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arrsorted[i]=arr[i];
            minnumber=min(minnumber,arr[i]);
        }
        sort(arrsorted,arrsorted+n);

        bool flag=true;
        for(int i=0;i<n;i++){
            if(arrsorted[i]!=arr[i] && arrsorted[i]%minnumber!=0){
                flag=false;
                break;
            }
        }
        cout<<(flag?"YES\n":"NO\n");
    }
    
}