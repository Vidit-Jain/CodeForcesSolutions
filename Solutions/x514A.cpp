#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48
#define MOD 1000000007
#define ll long long
string invert(string str,int index){
    int digit=ctoi(str.at(index));
    if(digit>=5 && !(index==0 && digit==9)){
        digit=9-digit;
        str[index]=digit+'0';
    }
    return str;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin>>str;
    int n=str.size();
    for(int i=0;i<n;i++) str=invert(str,i);
    cout<<str;
}