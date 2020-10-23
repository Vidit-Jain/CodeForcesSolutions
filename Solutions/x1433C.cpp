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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int peak=-2;
        for(int i=0;i<n;i++){
            if(i==0){
                if(arr[i]>arr[i+1]) peak=i;
            }
            else if(i==n-1){
                if(arr[i]>arr[i-1]){
                    if(peak==-2) peak=i;
                    else peak=(arr[i]>arr[peak])?i:peak;
                } 
            }
            else if(arr[i]>arr[i+1] || arr[i]>arr[i-1]){
                if(peak==-2) peak=i;
                else peak=(arr[i]>arr[peak])?i:peak;
            }
        }
        int backwards=peak,forwards=peak;
        if(peak!=-2){
        int size=arr[peak];
        while(backwards || forwards<n-1){
            int f=forwards,b=backwards;
            if(backwards && size>arr[backwards-1]){
                size++;
                backwards--;
            }
            if(forwards!=n-1 && size>arr[forwards+1]){
                size++;
                forwards++;
            }
            if(f==forwards && b==backwards) break;
        }
        }
        if(backwards!=0 || forwards!=n-1){
            cout<<"-1\n";
        }
        else cout<<peak+1<<"\n";
    }
}