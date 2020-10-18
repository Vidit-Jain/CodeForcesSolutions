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
int something(set<int> a){
    int flag=0;
    int curr=0;
    for(auto s:a){
        if(curr==s){
            curr++;
        }
        else if(curr<s){

            break;
        }
    }
    return curr;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        set<int> a, b;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (a.count(num) > b.count(num)) {
                b.insert(num);
            } else a.insert(num);
        }
        cout << something(a) + something(b) << "\n";
    }
}