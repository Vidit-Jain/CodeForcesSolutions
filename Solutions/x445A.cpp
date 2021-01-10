#include <bits/stdc++.h>
using namespace std;
#define length(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define tolowercase(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define touppercase(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ctoi(a) (int)a-48;
#define MOD 1000000007
#define ll long long
char BW[]={'B','W'};
char **grid;
int n,m;

void fillNeighbours(int value,int row,int column){
    if(grid[row][column]!='.') return;
    grid[row][column]=BW[value];
    int rr[]={0,0,1,-1};
    int cc[]={1,-1,0,0};
    for(int i=0;i<4;i++){
        int a=rr[i]+row;
        int b=cc[i]+column;
        if(a<0 || b<0) continue;
        if(a>=n || b>=m) continue;
        if(grid[a][b]!='.') continue;
        fillNeighbours(1-value,a,b);
    }
}
void generateGrid(){
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fillNeighbours(0,i,j);
        }
        }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    grid=new char*[n];
    for(int i=0;i<n;i++)grid[i]=new char[m];
    for(int i=0;i<n;i++){
        string word;
        cin>>word;
        for(int j=0;j<m;j++){
            grid[i][j]=word.at(j);
        }
    }
    generateGrid();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<grid[i][j];
        }
        cout<<"\n";
    }

}