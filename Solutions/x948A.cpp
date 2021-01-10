#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define MOD 1000000007
#define ll long long
class Graph{
    public:
    int R,C;
    bool flag=false;
    char **grid;
    Graph(int R,int C){
        this->R=R;
        this->C=C;
        grid=new char*[R];
        for(int i=0;i<R;i++){
            grid[i]=new char[C];
        }
        for(int i=0;i<R;i++){
            string temp;
            cin>>temp;
            for(int j=0;j<temp.size();j++){
                grid[i][j]=temp.at(j);
            }
        }
    }
    void findSequence(){
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(grid[i][j]=='S') findNeighbours(i,j);
            }
        }
        if(flag) cout<<"No"<<endl;
        else{
            cout<<"Yes\n";
            for(int i=0;i<R;i++){
                for(int j=0;j<C;j++){
                    cout<<grid[i][j];
                }
                cout<<"\n";
            }
        }
    }
    void findNeighbours(int y,int x){
        int rr[]={-1,1,0,0};
        int cc[]={0,0,1,-1};
        for(int i=0;i<4;i++){
            int x_coord=cc[i]+x;
            int y_coord=rr[i]+y;
            if(y_coord>=R || x_coord>=C) continue;
            if(y_coord<0 || x_coord<0) continue;
            if(grid[y_coord][x_coord]=='W'){
                flag=true;
                continue;
            }
            if(grid[y_coord][x_coord]!='.') continue;
            grid[y_coord][x_coord]='D';
        }
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int R,C;
    cin>>R>>C;
    Graph g(R,C);
    g.findSequence();
}