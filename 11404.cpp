#include<iostream>
#include<algorithm>
#include<vector>

#define INF 100001

using namespace std;

int main()
{
   int n, m;
   int a, b, c;
   cin >> n >> m;
   vector<vector<int> > v;

   v.resize(n);

   for (int i = 0; i < n; i++) {
      v[i].resize(n);
      v[i].assign(n, INF);
      v[i][i] = 0;
   }
   
   for (int i = 0; i < m; i++) {
      cin >> a >> b >> c;
      v[a - 1][b - 1] = min(v[a-1][b-1],c);
   }

   for (int k = 0; k < n; k++) {
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
            v[i][j] = min(v[i][j], v[i][k] + v[k][j]);
         }
      }
   }

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) printf("%d ", v[i][j] == INF ? 0 : v[i][j]);
      puts("");
   }

   return 0;
}
