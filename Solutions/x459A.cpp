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

    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2){
        int sidelength=y2-y1;
        cout<<x1+sidelength<<" "<<y2<<" "<<x1+sidelength<<" "<<y1<<"\n";

    }
    else if(y1==y2){
        int sidelength=x2-x1;
        cout<<x1<<" "<<y1+sidelength<<" "<<x2<<" "<<y2+sidelength<<"\n";
    }
    else if(abs(y2-y1)==abs(x2-x1)){
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<"\n";
    }
    else cout<<"-1\n";
}
