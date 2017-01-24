#include<cstdio>
#define _USE_MATH_DEFINES
#include<cmath>

int main(void){
	double N;
	scanf("%lf", &N);
	printf("%.6lf\n%.6lf", M_PI*N*N, 2 * N*N);
	return 0;
}

/*
PI 상수 값 을 외울 순 없다, but 포함 math.h 파일에 포함 되어있기때문에
위와같이 미리 헤더선언전에 미리 정의해준후 사용하면 된다.
*/