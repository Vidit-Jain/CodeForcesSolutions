#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
#define pq priority_queue
#define ff first
#define ss second
#define pb push_back
#define tc int t; cin>>t; while(t--)
#define file_read(x,y) freopen(x, "r", stdin); \
                  freopen(y, "w", stdout);
/*DEBUGGING START*/
#define DBG(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr <<"[ "<< *it << " = " << a << " ]"<< endl;
    err(++it, args...);
}
template<typename T, typename... Args>
void DBGV(T a){
    cout<<"[ ";
    for(auto s:a) cout<<s<<", ";
    cout<<"]"<<endl;
}
template<typename T, typename... Args>
void DBGP(T a){
    cout<<"[ ";
    for(auto s:a) cout<<"("<<s.ff<<", "<<s.ss<<"), ";
    cout<<"]"<<endl;
}
/*DEBUGGING END*/
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    tc{
        ll n;
        cin>>n;
        n*=2;
        vi arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        ll c;
        bool flag=true;
        for(int i=n-2;i>=0;i--){
            flag=true;
            vb visited(n,0);
            visited[i]=1;
            visited[n-1]=1;
            c=arr[n-1];
            map<ll,ll> m;
            vii path;
            path.pb({arr[n-1],arr[i]});
            m[i]=n-1;
            m[n-1]=i;
            vi hack(n);
            for(int q=0;q<n;q++){
                hack[q]=q;
            }
            hack[i]++;
            hack[n-1]++;
            for(int j=n-2;j>=0;j--){
                if(visited[j]) continue;
                visited[j]=true;
                ll low=lower_bound(arr.begin(),arr.begin()+j,c-arr[j])-arr.begin();
                // if(arr[low]!=c-arr[j]){
                //     flag=false;
                //     break;
                // }
                if(!(hack[low]<n && arr[hack[low]]==(c-arr[j])&&!visited[hack[low]])){
                    flag=false;
                    break;
                }
                visited[hack[low]]=true;
                hack[low]++;
                path.pb({arr[j],arr[low]});
                
                c=arr[j];
            }
            if(flag){
                cout<<"YES\n";
                vb v2(n,0);
                cout<<path[0].ff+path[0].ss<<"\n"; 
                // for(auto s:m){
                //     if(!v2[s.ff]){
                //         v2[s.ff]=true;
                //         v2[s.ss]=true;
                //         cout<<arr[s.ff]<<" "<<arr[s.ss]<<"\n";
                //     }
                // }
                for(auto s:path){
                    cout<<s.ff<<" "<<s.ss<<"\n";
                }
                break;
            } 
        }
        if(flag==false) cout<<"NO\n";
    }

}
