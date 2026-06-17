#include <bits/stdc++.h>
#include <time.h>
#define n 7

using namespace std;

pair<int, int> moves[4];

int result = 0;
int visited = 0;

bool isValid(pair<int,int> m, int x, int y){
  x = x + m.first;
  y = y + m.second;

  if (x<0 || x>=n || y<0 || y>=n )
    return false;
  return true;
}

vector<vector<int>> grid (n, (vector<int> (n, 0)));


void search(int x,int y){
  visited++;
  grid[x][y] = 1;
  if (visited == n*n && (x==n-1 && y==n-1)){
    result++;
    visited--;
    grid[x][y]=0;
    return;
  }
  else if (visited != n*n && (x==n-1 && y==n-1)){
    visited--;
    grid[x][y]=0;
    return;
  }

  for (int i=0; i<4; i++){
    if (!isValid(moves[i], x, y))
      continue;
    
    // make move:
    if (!grid[x+moves[i].first][y+moves[i].second]){
      search(x+moves[i].first, y+moves[i].second); 
    }
  }
  grid[x][y]=0;
  visited--;
}


int main(){
  /// moving left:
  moves[0] = {0,-1};

  // moving down:
  moves[1] = {1,0};

  // moving right:
  moves[2] = {0,1};

  // moving up:
  moves[3] = {-1,0};

  clock_t start_time = clock();
  search(0,0);
  clock_t end_time = clock();

  double cpu_time_used = ((double)(end_time-start_time)) / CLOCKS_PER_SEC;
  cout << "Count for n=" << n << ": " << result<< endl;
  cout << "Execution time(s): " << cpu_time_used << endl; 


  return 0;
}
