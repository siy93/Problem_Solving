#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<map>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int K,L,id;
	map<int,int> m;
	map<int,int>::iterator it;
	vector<pair<int,int>> v;
	scanf("%d %d",&K,&L);
	for(int i=0;i<L;i++){
	   scanf("%d",&id);
	   m[id] = i;     
	}
    
    for(it = m.begin();it != m.end(); it++)
        v.push_back(make_pair(it->second,it->first));
    
    sort(v.begin(),v.end());
    
    int num = min(K,int(v.size()));
	
	for(int i=0;i<num;i++){
	   printf("%08d\n",v[i].second);
	}
	
	return 0;
}
