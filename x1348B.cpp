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
void printitLong(unordered_set<int> us,int k){
    int arr[k];
    int index=0;
    for(auto s:us){
        arr[index]=s;
        index++;
    }
    for(int i=index;i<k;i++){
        arr[i]=1;
    }
    int n=10000;
    cout<<n<<" \n";
    for(int i=0;i<n;i++){
        cout<<arr[i%k]<<" ";
    }
    cout<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        unordered_set<int> us;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            us.insert(arr[i]);
        }
        if(us.size()>k) cout<<"-1\n";
        else{
            printitLong(us,k);
        }
    }
}