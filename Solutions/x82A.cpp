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
    int n;
    cin>>n;
    int divisor=1;
    int subtractor=5;

    string arr[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    while(n>subtractor){
        n-=subtractor;
        subtractor*=2;
        divisor*=2;
    }
    cout<<arr[(int)ceil((float)n/divisor)-1];
}