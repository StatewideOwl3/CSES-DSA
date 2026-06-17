#include <bits/stdc++.h>

using namespace std;

int main (int argc, char *argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, target;
  cin >> n >> target;
  vector<int> arr(n,0);

  for (int i=0; i<n; i++){
    cin >> arr[i];
  }
  
  map<int,int> m;
  
  for (int i=0; i<n; i++){
    if (m.count(arr[i])){
      cout << m[arr[i]] + 1 << " " << i + 1;
      return 0;
    }
    else{
      m[target-arr[i]] = i;
    }
  }

  cout << "IMPOSSIBLE";

  return 0;
}
