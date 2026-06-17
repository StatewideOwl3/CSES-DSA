#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, m, k;
  cin >> n >> m >> k;

  vector<int> applicants(n,0);
  vector<int> apartments(m,0);
  
  for (int i=0; i<n; i++){
    cin >> applicants[i];
  }
  for (int i=0; i<m; i++){
    cin >> apartments[i];
  }

  sort(applicants.begin(), applicants.end());
  sort(apartments.begin(), apartments.end());

  int ans = 0;
  int i=0; // index for applicants
  int j=0; // index for apartments
  while (i<n && j<m){
    int delta = applicants[i] - apartments[j];
    if (abs(delta) <= k){
      i++; j++; ans++;
      continue;
    }
    if (delta < 0){
      i++;
    }
    if (delta > 0){
      j++;
    }
  }
  cout << ans;
  return 0;
}
