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
bool canEat(int row,int column,int r,int c,string arr[]){
    bool horizontal=true, vertical=true;
    if(arr[row][column]=='S') return false;

    for(int i=0;i<r;i++){
        if(arr[r][column]=='S') vertical=false;
    }
    for(int i=0;i<c;i++){
        if(arr[row][column]=='S') horizontal=false;
    }
    return (vertical || horizontal);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int highest=arr[0],lowest=arr[0];
    int amazing=0;
    for(int i=1;i<n;i++){
        if(arr[i]>highest){
            amazing++;
            highest=arr[i];
        }
        else if(arr[i]<lowest){
            amazing++;
            lowest=arr[i];
        }
    }
    cout<<amazing<<"\n";
}