    #include <bits/stdc++.h>
    using namespace std;
    #define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
    #define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
    #define lsb(x) (x&(-x))
    #define ctoi(a) (int)a-48
    #define itoc(a) a+'0'
    #define MOD 1000000007
    #define ll long long
    short dist[1000][1000][4];
    string arr[1000];
    short r,c;
    void DFS(int prev,short row,short column){
        short rr[]={-1,0,1,0};
        short rc[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            short nr=row+rr[i],nc=column+rc[i];
            if(!(nr>=r || nr<0 || nc>=c || nc<0 || arr[nr][nc]=='*' )){
                if(dist[row+rr[i]][column+rc[i]][i]==1000 || (dist[row+rr[i]][column+rc[i]][i]>dist[row][column][prev] + (i!=prev))){
                    dist[row+rr[i]][column+rc[i]][i]=dist[row][column][prev] + (i!=prev);
                    if(dist[row+rr[i]][column+rc[i]][i]<=2)DFS(i,row+rr[i],column+rc[i]);
                }
            }
            
        }
    }
    void DFSstart(short row,short column){
        for(int i=0;i<1000;i++){
            for(int j=0;j<1000;j++){
                for(int k=0;k<4;k++){
                    dist[i][j][k]=1000;
                }
            }
        }
        for(int i=0;i<4;i++) {
            dist[row][column][i]=0;
        }
        short rr[]={-1,0,1,0};
        short rc[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            short nr=row+rr[i],nc=column+rc[i];
            if(!(nr>=r || nr<0 || nc>=c || nc<0 || arr[nr][nc]=='*' )){
                    dist[row+rr[i]][column+rc[i]][i]=0;
                    DFS(i,row+rr[i],column+rc[i]);
            }
            
        }
     
    }
     
     
    int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        cin>>r>>c;
        short s_row,s_column,t_row,t_column;
        for(int i=0;i<r;i++){
            cin>>arr[i];
            for(int j=0;j<c;j++){
                if(arr[i][j]=='S'){
                    s_row=i;
                    s_column=j;
                }
                else if(arr[i][j]=='T'){
                    t_row=i;
                    t_column=j;
                }
            }
        }
        DFSstart(s_row,s_column);
        short b=3;
        for(int i=0;i<4;i++) b=min(b,dist[t_row][t_column][i]);
        if(b<=2) cout<<"YES\n";
        else cout<<"NO\n";
    }
