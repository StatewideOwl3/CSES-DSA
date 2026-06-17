/* Author : Sai Kapil Bharadwaj
 * Date : Monday 15th June 2026, 08:51
 * Description : CSES Problem Set -> Sorting and Searching -> Movie Festival
 *
 * Scheduling Topic in ch6
 * Given n events with their start and ending times, choose a schedule that includes as many events as possible
 *
 * Many possible greedy strategies to choose on, but only one ends up being optimal always 
 *
 * Algo 1: choose shortest duration event next always
 * Algo 2: choose the event that begins earlist next always
 * Algo 3: choose the event that ends earlist next always - OPTIMAL
 *
 */


#include <bits/stdc++.h>

using namespace std;
int main(){
  int n;
  cin >> n;
  vector<pair<int,int>> v;
  for (int i=0;i <n; i++){
    pair<int,int> p;
    int start, end;
    cin >> start >> end;
    p.first = end;
    p.second = start;
    v.push_back(p);
  }

  sort(v.begin(), v.end());

  int answer = 1;
  int end = v[0].first;
  for (int i = 1; i<n; i++){
    // if the current movie starts before prev chosen movie ends:
    if (v[i].second < end) continue;

    answer++;
    end = v[i].first;
  }

  cout << answer;
  return 0;
}
