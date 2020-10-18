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

int createPrefix(string str,int n){
    int leftright[n],rightleft[n];
    leftright[0]=ctoi(str[0]);
    for(int i=1;i<n;i++){
        leftright[i]=leftright[i-1]+ctoi(str[i]);
    }
    rightleft[n-1]=ctoi(str[n-1]);
    for(int i=n-2;i>=0;i--){
        rightleft[i]=rightleft[i+1]+ctoi(str[i]);
    }
    int least=INT_MAX;
    for(int i=-1;i<n;i++){
        if(i==-1){
            least=min(least,min(rightleft[i+1],n-(i+1)-rightleft[i+1]));
        }
        else if(i==n-1){
            least=min(least,min(leftright[i],(i+1)-leftright[i]));
        }
        else{
            least=min(least,min(leftright[i]+n-(i+1)-rightleft[i+1],rightleft[i+1]+(i+1)-leftright[i]));
        }
    }
    return least;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        cout<<createPrefix(str,str.size())<<"\n";

    }
}