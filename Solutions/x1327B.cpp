#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define MOD 1000000007
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool pairedgirl[n+1],pairedboy[n+1];
        pairedgirl[0]=true;
        pairedboy[0]=true;
        for(int i=1;i<=n;i++){
            pairedgirl[i]=false;
            pairedboy[i]=false;
        }
        list<int> preferences[n+1];
        for(int i=1;i<=n;i++){
            int k;
            cin>>k;
            for(int j=0;j<k;j++){
                int a;
                cin>>a;
                preferences[i].push_back(a);
            }
        }
        int lastunpaired=-1;
        for(int i=1;i<=n;i++){
            for(auto s:preferences[i]){
                if(!pairedboy[s]){

                    pairedgirl[i]=true;
                    pairedboy[s]=true;
                    break;
                }
            }
            if(!pairedgirl[i])
                lastunpaired=i;
        }
        int abc=-1;
        for(int i=1;i<=n;i++){
            if(!pairedboy[i]){
                abc=i;
            } 
        }
        if(abc==-1 && lastunpaired==-1){
            cout<<"OPTIMAL\n";
        }
        else{
            cout<<"IMPROVE\n"<<lastunpaired<<" "<<abc<<"\n"; 
        }
    }
}