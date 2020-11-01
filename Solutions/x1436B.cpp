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
bool isPrime(int x){
    if(x==1) return false;
    for(int i=2;i<x;i++){
        if(x%i==0) return false;
    }
    return true;
}
void printSquare(int n,int x,int y){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            cout<<"1 ";
        }
        cout<<x<<"\n";
    }
    for(int i=0;i<n-1;i++) cout<<x<<" ";
    cout<<y<<"\n";
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
        int x;
        for(int i=n;;i++){
            if(isPrime(i) && !isPrime(i-n+1)){
                x=i-n+1;
                break;
            }
        }
        int y;
        for(int i=x*(n-1)+1;;i++){
            if(isPrime(i) && !isPrime(i-x*(n-1))){
                y=i-(x*(n-1));
                break;
            }
        }
        printSquare(n,x,y);
    }
}