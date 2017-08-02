#include<iostream>
#include<vector>

typedef long long ll;

using namespace std;
int N,S;

int main(void)
{
    vector<ll> v;
    ll num,min=100001;

    cin >> N >> S;
    for(int i=0;i<N;i++){
        cin>> num;
        v.push_back(num);
    }

    ll temp,sum;

    for(int i=0;i<N;i++){
        temp = 0,sum = 0;
        for(int j=i;j<N;j++){
            sum += v[j];
            temp++;
            if(sum >= S){
                if(temp < min){min = temp;}
                break;
            }
        }
    }

    if(min == 100001){cout<<0;}
    else{cout<<min;}

    return 0;
}
