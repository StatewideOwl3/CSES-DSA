#include <bits/stdc++.h>

using namespace std;

int main (int argc, char *argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<int> a (n,0);
  for (int i=0; i<n; i++){
    cin >> a[i];
  }

  // find maximum sum of a sub array ending at index k
  // either itself of itself + max sub arr sum ending at index k-1
  long long int max_sum = a[0];
  long long int prev = a[0];

  for (int i=1; i<n; i++){
    prev = a[i] >  prev + a[i] ? a[i] : prev + a[i];
    max_sum = max_sum > prev ? max_sum : prev;
  }
  
  cout << max_sum;
  
  return 0;
}
