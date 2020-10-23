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
int previousButtons(int a){
    int b=a%10;
    return (b-1)*10;
}
int currentDigit(int a){
    int arr[]={1,3,6,10};
    int length=0;
    while(a!=0){
        length++;
        a/=10;
    }
    return arr[length-1];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<previousButtons(n)+currentDigit(n)<<"\n";
    }
}