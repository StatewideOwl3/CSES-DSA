#include <bits/stdc++.h>

using namespace std;

int main (int argc, char *argv[]) {
  int n;
  cin >> n;
  unordered_set<int> input;
  vector<int> vec_input(n);
  set<pair<int,int>> num_index_map;

  int x;
  for (int i=0; i<n; i++){
    cin >> x;
    input.insert(x);
    vec_input[i] = x;
    num_index_map.insert({input[i],i});
  }

  int passes = 0;
  while(input.count() > 0){
    passes++;
    auto it1 = num_index_map.begin(); // smallest
    int index = *it1.second;
    for (int i=index; i<n; i++){
      num_index_map.erase(it1);
      auto it2 = input.find(*it1.first);
      input.erase(*it1.first);
      it2++;
      if ()
    }
    
  }
  return 0;
}



