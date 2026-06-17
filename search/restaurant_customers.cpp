#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<pair<int,char>> p;
  for (int i=0; i<n; i++){
    int x,y;
    cin >> x >> y;
    p.push_back({x,'X'});
    p.push_back({y,'Y'});
  }

  sort(p.begin(), p.end());

  int count = 0;
  int ans = 0;
  for (int i=0; i<2*n; i++){
    pair<int,char> t = p[i];
    if (t.second == 'X'){
      count++;
    }
    else{
      count--;
    }
    ans = max(ans, count);
  }
  cout << ans;
  return 0;
}
