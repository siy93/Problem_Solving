//재귀로 푸는 더 좋은 방법이 있을 것 같다.

#include <iostream>
#include <queue>
#include <set>

using namespace std;

int arr[101];
int N;

bool isCycle(int num){
    int next = num;
    
    for(int i=1;i<=N;i++){
        if(arr[next] == num){return true;}
        next = arr[next];
    }
    return false;
}

int main()
{
    scanf("%d",&N);

    for(int i=1;i<=N;i++) 
      scanf("%d",&arr[i]);
      
    set<int> s;
    set<int>::iterator it;

    for(int i=1;i<=N;i++){
      if(isCycle(i)){s.insert(i);}
    }

    printf("%d\n",s.size());
    
    for(it=s.begin();it!=s.end();it++){
        printf("%d\n",*it);
    }
    return 0;
}

