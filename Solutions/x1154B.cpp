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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int diff=0;
    int flag=0;
    int abc=0;
    int index=-1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]) {
            abc++;
            index=i;
        }
    }

    if(abc==1){
        int sum=arr[index]-arr[index-1];
        if(sum%2==0){
            diff=sum/2;
        }
        else diff=sum;
    }
    else if(abc==2 || abc==0){
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1]) {
                if (diff == 0) diff = arr[i] - arr[i - 1];
                else if (arr[i] - arr[i - 1] != diff) {
                    flag = 1;
                    break;
                }
            }
        }
    }
    else flag=1;

    if(flag) cout<<"-1\n";
    else cout<<diff<<"\n";
}