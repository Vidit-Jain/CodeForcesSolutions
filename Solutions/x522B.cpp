#include <bits/stdc++.h>
using namespace std;
#define lsb(x) (x&(-x))
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) ((int)a-48)
#define itoc(a) (a+'0')
#define MOD 1000000007
#define ll long long
#define ull unsigned long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n][2];
    int highest=0,highestindex=0;
    ll total=0;
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
        total+=arr[i][0];
        if(arr[i][1]>highest){
            highestindex=i;
            highest=arr[i][1];
        }
    }
    int secondhighest=0;
    for(int i=0;i<n;i++){
        if(highestindex!=i && arr[i][1]>secondhighest){
            secondhighest=arr[i][1];
        }
    }

    for(int i=0;i<n;i++){
        int a=(highest==arr[i][1])?secondhighest:highest;
        cout<<(total-arr[i][0])*a<<" ";
    }
    cout<<"\n";

}