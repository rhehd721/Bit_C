#include<stdio.h>
#pragma warning(disable:4996)
#include<time.h>
#include<stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

#ifndef    // if not define 즉, 정의가 되어있지 않다면! 
#ifdef    // if define 즉, 정의가 되어 있다면! 

#define RED

main() {




}








/*
#define pi 3.14
#define square(x) 1
#define PR(x) printf("%d \n", x)
#define abss(x) x<0 ? (-1*x) : x
#define three_max(a,b,c) a>b? a>c?a:c : b>c?b:c
#define swap(x,y) do{int t ; t=x; x=y; y=t;}while(0)  //  ;  으로 인한 문제를 do while 로 해결
main() {

	printf("%f\n", pi);
	printf("%d\n", square(5));
	PR(3);
	printf("%d\n", abss(-2));
	printf("%d\n", three_max(3, 2, 5));
	int a = 5;
	int b = 3;
	swap(a, b);
	printf("5가 : %d\n3이 : %d",a,b);

}
*/

/*
main() {

	int count = 0;
	char str[100];

	printf("원하는 문장의 갯수를 입력하세요 : ");
	scanf("%d", &count);

	while(1) {

		char** p = (char**)malloc((sizeof(char*) * count));

		for (int i = 0;i < count; ++i) {
		
		printf("\n%d번째 문장을 입력하세요 : ", i+1);
		scanf("%s", str);

		
		p[i] = (char*)malloc((sizeof(char) * strlen(str))+1);

		strcpy(p[i], str);

		printf("\n%d번째 문장 : ",i+1);
		puts(p[i]);
		
		
		}
		break;
	}


}
*/


/*
main() {


	///////////////////////////!!!!!!!!!!!!!!!!!!!!!!질문!!!!!!!!!!!!!!!!!!!!!!//////////////////
	
	char add[100];

	printf("자신의 주소를 입력하세요 : \n");
	scanf("%s", add);

	char* c = (char*)malloc(    ((sizeof(char))   *   (strlen(add))) +1 )   ;

	for (int i = 0; i < strlen(add); ++i){
	c[i] = add[i];
	printf("%c", c[i]);
	}
	printf("\n%s", c);


	free(c);
	


}
*/

/*
main() {

	int cnt;
	char buff[100];
	int tot = 0;

	FILE* wp, * rp;
	rp = fopen("dog.jpg", "rb");
	wp = fopen("강아지1.jpg", "wb");
	while (1)
	{

		cnt = fread(buff, sizeof(char), 100, rp);

		if (cnt < 100)  // 파일의 끝을 만났거나 파일이 깨졌을 경우
		{
			if (feof(rp) != 0)  //끝이라면
			{
				fwrite(buff, sizeof(char), cnt, wp);
				tot += cnt;
				puts("복사 완료\n");
				printf("마지막 복사된 바이트 : %d\n", cnt);
				printf("총 복사된 바이트 : %d\n", tot);
			}
			else
			{
				puts("복사 실패");
			}
			break;
		}

		fwrite(buff, sizeof(char), 100, wp);
		tot += 100;

	}

	fclose(rp);
	fclose(wp);


}
*/


/*
main() {

	FILE* fp;

	//쓰기부분
	//fp = fopen("a.txt", "w"); // 파일이 없으면 자동생성
								// 파일이 있으면 내용삭제하고 생성
	//fprintf(fp, "%d %s\n", 1, "AAAA");

	//fclose(fp); // 쓰여지는것을 보자

	// 읽기부분
	//int num;
	//char str[100];

	//fp = fopen("a.txt", "r"); // 없으면 error
	//fscanf(fp, "%d %s", &num, str);
	//fclose(fp);
	//printf("% d % s\n", num, str);			// 알아서 모니터로 출력해라
	//fprintf(stdout, "% d % s\n", num, str);	// 모니터로 출력해라

	// update 부분
	//fp = fopen("a.txt", "a"); // 없으면 error
	//fprintf(fp, "%d %s\n", 2, "ccc");	// 모니터로 출력해라
	//fclose(fp);

	// 읽기부분
	int num;
	char str[100];
	fp = fopen("a.txt", "r"); // 없으면 error
	while (1){
	fscanf(fp, "%d %s", &num, str);

	if (feof(fp) != 0) { //0이면 중간 //??? 끝
		break;
	}
	printf("% d % s\n", num, str);			// 알아서 모니터로 출력해라
	}
	fclose(fp);
}
*/