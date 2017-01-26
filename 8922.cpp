#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
int make_turple(int arr[],int count);

int main()
{
   int numTestCase;

   cin >> numTestCase;

   int ducci[15];

   while (numTestCase--) {
        int count;
        cin >> count;
        for(int i=0;i<count;i++){cin >> ducci[i];}
        ducci[count+1]=0;
        for(int i=0;i<1000;i++){
            *ducci = make_turple(ducci,count);
        }
        for(int i=0;i<count;i++){
            ducci[count+1] += ducci[i];
        }
        if(ducci[count+1] == 0){cout<<"ZERO"<<endl;}
        else{cout<<"LOOP"<<endl;}

   }
   return 0;
}

int make_turple(int arr[],int count)
{
    arr[count]= arr[0];
    for(int i=0;i<count;i++){
        arr[i] = abs(arr[i+1] - arr[i]);
    }
    return *arr;
}