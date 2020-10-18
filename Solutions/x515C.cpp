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
void addToVector(vector<int> &v,int digit){
    if(digit==0 || digit==1) return;
    if(digit==4){
        v.push_back(2);
        v.push_back(2);
        v.push_back(3);
    }
    else if(digit==8){
        v.push_back(2);
        v.push_back(2);
        v.push_back(2);
        v.push_back(7);
    }
    else if(digit==9){
        v.push_back(3);
        v.push_back(3);
        v.push_back(2);
        v.push_back(7);
    }
    else if(digit==6){
        v.push_back(3);
        v.push_back(5);
    }
    else v.push_back(digit);

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string str;
    cin>>n>>str;
    vector<int> v;
    for(int i=0;i<n;i++){
        addToVector(v,ctoi(str[i]));
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(auto s:v){
        cout<<s;
    }
}