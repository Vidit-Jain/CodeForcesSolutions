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
void stacks(int height,int arr[],int n,bool visited[],int currindex){
    visited[currindex]=true;
    for(int i=currindex;i<n;i++){
        if(arr[i]>=height && !visited[i]){
            stacks(height+1,arr,n,visited,i);
            break;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr,arr+n);
    bool visited[n];
    for(int i=0;i<n;i++) visited[i]=false;
    int total=0;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            total++;
            stacks(1,arr,n,visited,i);
        }
    }
    cout<<total<<"\n";

}