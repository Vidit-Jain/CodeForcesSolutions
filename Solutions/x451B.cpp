#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48
#define itoc(a) a+'0'
#define MOD 1000000007
#define ll long long
bool isSorted(ll arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]) return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    ll arr[n];
    int startingindex=-1;
    int lastindex=-1;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            if(startingindex==-1){
                startingindex=i-1;
            }
            lastindex=i;
        }
        else if(startingindex!=-1) break;
    }
    if(startingindex!=-1)sort(arr+startingindex,arr+lastindex+1);
    if(startingindex==-1){
        startingindex=0;
        lastindex=0;
    }

    if(isSorted(arr,n)) cout<<"yes\n"<<startingindex+1<<" "<<lastindex+1<<"\n";
    else cout<<"no\n";

}