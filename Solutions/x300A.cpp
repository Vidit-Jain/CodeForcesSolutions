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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int negativeindex=-1,positiveindex=-1,zeroindex=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<0) negativeindex=i;
        else if(arr[i]>0) positiveindex=i;
        else zeroindex=i;
    }
    cout<<"1 "<<arr[negativeindex]<<"\n1 "<<arr[positiveindex]<<"\n";
    cout<<n-2<<" 0 ";
    for(int i=0;i<n;i++){
        if(i==negativeindex || i==positiveindex || i==zeroindex) continue;
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}