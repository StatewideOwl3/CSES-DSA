#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, x;
  cin >> n >> x;
  vector<int> weights(n,0);
  for (int i=0; i<n; i++){
    cin >> weights[i];
  }

  sort(weights.begin(), weights.end());

  int j=n-1;
  int i=0;
  int ans=0;
  while(i<j){
    if (weights[i] + weights[j] <= x){
      ans++;
      i++;
      j--;
      continue;
    }
    ans++;
    j--;
  }
  if (i==j){
    ans++;
  }
  cout << ans;
  return 0;
}
