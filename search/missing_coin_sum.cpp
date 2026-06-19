#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<int> arr(n,0);
  for (int i=0; i<n; i++){
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());

  long long int missing_sum = 1;
  for (int i=0; i<n; i++){
    if (arr[i] < missing_sum + 1){
      missing_sum += arr[i];
    }
    else{
      cout << missing_sum;
      return 0;
    }
  }
  cout << missing_sum;

  return 0;
}
