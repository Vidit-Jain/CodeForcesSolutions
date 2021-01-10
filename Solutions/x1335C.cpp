#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  while(testcases--){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    int unique=1;
    int maxsame=1;
    int currsame=1;
    for(i=1;i<n;i++){
      if(arr[i]==arr[i-1]){
        currsame++;
      }
      else{
        maxsame=max(maxsame,currsame);
        currsame=1;
        unique++;
      }
    }
    maxsame=max(maxsame,currsame);
    cout<<max(min(unique-1,maxsame),min(unique,maxsame-1))<<endl;
  }

  return 0;
}
