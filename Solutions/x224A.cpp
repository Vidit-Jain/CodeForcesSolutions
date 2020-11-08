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
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    for(int i=1;i<=min(arr[0],arr[1]);i++){
        if(arr[0]%i==0 && arr[1]%i==0){
            int l=i,b=arr[0]/i,h=arr[1]/i;
            if(b*h==arr[2]){
                cout<<(l+b+h)*4<<"\n";
                break;
            }
        }
    }
}