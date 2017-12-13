#include<iostream>
#include<queue>

using namespace std;

struct Point{
  int x,y;
};

int map[26][26];
int direction[4][2] = { {0,1},{0,-1},{1,0},{-1,0}};

int main()
{ 
    int N;
    cin >> N;
    
    // for(int i=0;i<N;i++){
    //     string str;
    //     cin >> str;
    //     for(int j=0;j<str.size();j++)
    //         map[i][j] = str[j]-48;
    // }
    // 아래가 더 간단하다. 
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%1d",&map[i][j]);
        }
    }
    
    queue<Point> q;
    priority_queue<int,vector<int>,greater<int>> q2;
    struct Point p;
    int count = 0;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(map[i][j]){
                count++;
                p.x = i,p.y = j;
                q.push(p);
                
                int innerCount = 0;
                
                while(!q.empty()){
                    Point curPos = q.front();
                    q.pop();
                    map[curPos.x][curPos.y] = 0;
                    innerCount++;
                    Point nextPos;
                    
                    for(int k=0;k<4;k++){
                        nextPos.x = curPos.x + direction[k][0];
                        nextPos.y = curPos.y + direction[k][1];
                        if((nextPos.x >= 0 && nextPos.x < N && nextPos.y >= 0 && nextPos.y < N) && map[nextPos.x][nextPos.y] == 1){
                            map[nextPos.x][nextPos.y] = 2;
                            q.push(nextPos);
                        }
                    }
                }
                q2.push(innerCount);
            }
        }
    }
    
    cout << count << endl;
    for(int i=0;i<count;i++){
        cout<<q2.top()<<endl;
        q2.pop();
    }
    
    return 0;
}
