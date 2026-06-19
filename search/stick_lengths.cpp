#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> length (n,0);
  for(int i=0; i<n; i++){
    cin >> length[i];
  }

  sort(length.begin(), length.end());
  int median = length[n/2];
  long long int total_cost = 0;
  for (int i=0; i<n; i++){
    total_cost+=abs(median-length[i]);
  }

  cout << total_cost;
  return 0;
}
