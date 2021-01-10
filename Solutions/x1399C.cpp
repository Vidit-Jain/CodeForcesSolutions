#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long

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
        sort(arr,arr+n);
        int maxsum=arr[n-1]*2+1;
        int sum[maxsum]={0};
        int square[n][maxsum];
        for(int i=0;i<n;i++){
            for(int j=0;j<maxsum;j++){
                square[i][j]=false;
            }
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                    int a=arr[i]+arr[j];
                    if(!square[i][a] && !square[j][a]){
                    sum[a]++;
                    square[i][a]=true;
                    square[j][a]=true;
                    
                    }
                    
                
            }
        }
        int maxteams=0;
        for(int i=0;i<maxsum;i++){
            maxteams=max(maxteams,sum[i]);
        }
        cout<<maxteams<<"\n";
    }
}