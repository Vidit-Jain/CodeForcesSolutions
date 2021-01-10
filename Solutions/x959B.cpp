#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
int *parent;
int *cost;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k,m;
    cin>>n>>k>>m;
    unordered_map<string,int> dictionary;
    parent=new int[n+1];
    cost=new int[n+1];
    for(int i=1;i<=n;i++){
        parent[i]=i;
    }
    
    for(int i=1;i<=n;i++){
        string word;
        cin>>word;
        dictionary.insert(make_pair(word,i));
    }
    for(int i=1;i<=n;i++){
        cin>>cost[i];
    }
    for(int j=0;j<k;j++){
        int x;
        cin>>x;
        if(x==1){
            int temp;
            cin>>temp;
        }
        else{
            int arr[x];
            int minindex;
            for(int i=0;i<x;i++){
                cin>>arr[i];
                if(i==0) minindex=arr[i];
                else if(cost[arr[i]]<cost[minindex]){
                    minindex=arr[i];
                }
            }
            for(int i=0;i<x;i++){
                parent[arr[i]]=minindex;
            }
        }
    }
    ll total=0;
    for(int i=0;i<m;i++){
        string word;
        cin>>word;
        total+=cost[parent[dictionary.at(word)]];
    }
    cout<<total;

}