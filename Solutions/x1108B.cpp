#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
bool isprime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0) return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int answer=INT_MIN;
    for(int i=n-2;i>=0;i--){
        if(arr[n-1]%arr[i]!=0 || arr[i]==arr[i+1]) {
            answer=arr[i];
            break;
        }
    }
    cout<<arr[n-1]<<" "<<answer;
}