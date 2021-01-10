#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
bool comparepairs(pair<int,int> &a,pair<int,int> &b){
    if(a.first==b.first) return a.second<b.second;
    return a.first<b.first;
}
void printDirections(pair<int,int> &a,pair<int,int> &b){
    for(int i=0;i<b.first-a.first;i++){
        cout<<"R";
    }
    for(int i=0;i<b.second-a.second;i++){
        cout<<"U";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> v;
        v.push_back({0,0});
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            pair<int,int> p={x,y};
            v.push_back(p);
        }
        sort(v.begin(),v.end(),comparepairs);
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i].first<<" "<<v[i].second<<"\n";
        // }
        bool flag=true;
        for(int i=1;i<v.size();i++){
            if(v[i].second<v[i-1].second){
                flag=false;
                break;
            }
        }
        if(!flag)cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(int i=1;i<v.size();i++){
                printDirections(v[i-1],v[i]);
            }
            cout<<"\n";
        }
    }
}
