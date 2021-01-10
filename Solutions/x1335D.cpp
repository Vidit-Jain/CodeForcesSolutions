#include <iostream>
#include <algorithm>
#include <string.h>
#include <sstream>
using namespace std;
int main(){
  int t,i,j;
  cin>>t;
  while(t--){
    int grid[9][9];

    for(i=0;i<9;i++){
      string line;
      cin>>line;
      long number=stoi(line);
      for(j=8;j>=0;j--){
        grid[i][j]=number%10;
        number/=10;
      }
    }
    for(i=0;i<9;i++){
      int i1=(i*3)%9 +(i*3)/9;
      grid[i][i1]++;
      if(grid[i][i1]==10) grid[i][i1]=1;
    }

    for(i=0;i<9;i++){
      for(j=0;j<9;j++){
        cout<<grid[i][j]<<"";
      }
      cout<<"\n";
    }
  }
  return 0;
}
