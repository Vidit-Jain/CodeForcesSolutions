#include <bits/stdc++.h>
using namespace std;
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
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    int rows[n];
    int columns[m];
    for(int i=0;i<n;i++) rows[i]=i;
    for(int j=0;j<m;j++) columns[j]=j;
    for(int i=0;i<k;i++){
        char ch;
        int a,b;
        cin>>ch>>a>>b;
        a--;
        b--;
        if(ch=='r'){
            int temp=rows[a];
            rows[a]=rows[b];
            rows[b]=temp;
        }
        else if(ch=='c'){
            int temp=columns[a];
            columns[a]=columns[b];
            columns[b]=temp;
        }
        else{
            cout<<arr[rows[a]][columns[b]]<<"\n";
        }
    }
}