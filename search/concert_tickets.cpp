#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,m;
  cin >> n >> m;

  multiset <int> s;
  for (int i=0; i<n; i++){
    int x;
    cin >> x;
    s.insert(x);
  }
  
  int max_price;
  for (int i=0; i<m; i++){
    cin >> max_price;
    auto upper_it = s.upper_bound(max_price);
    
    if (upper_it == s.begin()){
      // all elements strictly greater
      cout << -1 << " ";
      continue;
    }
    else if (upper_it == s.end()){
      // all elements equal or lesser
      auto last = s.end();
      last--;
      cout << *last << " ";
      s.erase(last);
      continue;
    }

    upper_it--;
    cout << *upper_it << " ";
    s.erase(upper_it);
  }

  return 0;
}
