#include<cstdio>
#include<stack>
int N;
int arr[100001];
char result[200002];
int main()
{
    scanf("%d",&N);
    for (int i = 1; i <= N;i++){
      scanf("%d",&arr[i]);
    }

    int counter = 1, j = 0;
    std::stack<int> st;


    st.push(-1);
    for (int i = 1; i <= N;){
        if(counter>N+1){printf("NO");return 0;}
        if(arr[i] != st.top() || st.top() == -1){
            st.push(counter++);
            result[j++] = '+';
        }else{
            if(arr[i] == st.top()){
                st.pop();
                result[j++] = '-';;
            }
            else{
                st.push(counter);
                result[j++] = '+';
                st.pop();
                result[j++] = '-';
            }
            i++;
        }
    }

    for(int i=0;result[i] != NULL;i++){
        printf("%c\n",result[i]);
    }
    return 0;
}
