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
    int n;
    cin>>n;
    int arr[n];
    int negatives=0;
    bool hasPositive=false;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        negatives+=(arr[i]<0);
        if(arr[i]>0) hasPositive=true;
    }
    vector<int> nv,pv,zv;
    if(hasPositive){
        for(int i=0;i<n;i++){
            if(arr[i]<0 && nv.size()==0) nv.push_back(arr[i]);
            else if(arr[i]>0 && pv.size()==0) pv.push_back(arr[i]);
            else zv.push_back(arr[i]);
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]<0 && nv.size()==0) nv.push_back(arr[i]);
            else if(arr[i]<0 && pv.size()<2) pv.push_back(arr[i]);
            else zv.push_back(arr[i]);
        }
    }
    cout<<nv.size()<<" ";
    for(auto s:nv){
        cout<<s<<" ";
    }
    cout<<"\n"<<pv.size()<<" ";
    for(auto s:pv){
        cout<<s<<" ";
    }
    cout<<"\n"<<zv.size()<<" ";
    for(auto s:zv){
        cout<<s<<" ";
    }
    cout<<"\n";
}