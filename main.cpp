#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
  int n, m;
  cin>>n>>m;
  vector<int> arr(0, n);
  int x[m];
  for(int i = 1; i<n+1; i++){
    int temp;
    cin>>temp;
    arr.push_back(temp);
  }
  sort(arr.begin(), arr.end());
  for(int i = 1; i<m+1; i++){
    cin>>x[i];
    if(binary_search(arr.begin( ), arr.end(), x[i])){
      // cout<<" ESPANOL ";
      cout<<lower_bound(arr.begin( ), arr.end(), x[i])-arr.begin()+1<<" ";
      continue;
    }
    cout<<-1<<" ";
  }
}