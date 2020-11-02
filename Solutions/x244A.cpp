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
bool isUsed(int a,int k,int arr[]){
    for(int i=0;i<k;i++){
        if(arr[i]==a) return true;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;
    int arr[k];
    for(int i=0;i<k;i++) cin>>arr[i];
    int number=1;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
        for(int j=0;j<n-1;){
            if(!isUsed(number,k,arr)){
                cout<<number<<" ";
                j++;
            }
            number++;
        }
        cout<<"\n";
    }
    
}