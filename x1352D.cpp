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
int *something1(int arr[],int n,int x,int bpos,int needed){
    int *a=new int[3];
    a[0]=0;
    a[1]=0;
    a[2]=x;
    for(int i=x;i<n && i<=bpos;i++){
        a[0]++;
        a[2]=i+1;
        a[1]+=arr[i];
        if(a[1]>needed) break;
    }
    return a;
}
int *something2(int arr[],int n,int x,int apos,int needed){
    int *b=new int[3];
    b[0]=0;
    b[1]=0;
    b[2]=x;
    for(int i=x;i>=0 && i>=apos;i--) {
        b[2] = i - 1;
        b[0]++;
        b[1] += arr[i];
        if (b[1]> needed) break;
    }

    return b;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int apos=0,bpos=n-1,needed=0,a=0,b=0,moves=0;
        while(true){
            int *first=something1(arr,n,apos,bpos,needed);
            apos=first[2];
            needed=first[1];
            a+=first[1];
            moves=(first[0]==0)?moves:moves+1;
            if(apos>=n || apos>bpos){

                break;
            }
            int *second=something2(arr,n,bpos,apos,needed);
            bpos=second[2];
            needed=second[1];
            b+=second[1];
            moves=(second[0]==0)?moves:moves+1;
            if(bpos<0 || apos>bpos) {

                break;

            }
        }
        cout<<moves<<" "<<a<<" "<<b<<"\n";

    }
}