#include<stdio.h>
#pragma warning(disable:4996)
#include<time.h>
#include<stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

#ifndef    // if not define ��, ���ǰ� �Ǿ����� �ʴٸ�! 
#ifdef    // if define ��, ���ǰ� �Ǿ� �ִٸ�! 

#define RED

main() {




}








/*
#define pi 3.14
#define square(x) 1
#define PR(x) printf("%d \n", x)
#define abss(x) x<0 ? (-1*x) : x
#define three_max(a,b,c) a>b? a>c?a:c : b>c?b:c
#define swap(x,y) do{int t ; t=x; x=y; y=t;}while(0)  //  ;  ���� ���� ������ do while �� �ذ�
main() {

	printf("%f\n", pi);
	printf("%d\n", square(5));
	PR(3);
	printf("%d\n", abss(-2));
	printf("%d\n", three_max(3, 2, 5));
	int a = 5;
	int b = 3;
	swap(a, b);
	printf("5�� : %d\n3�� : %d",a,b);

}
*/

/*
main() {

	int count = 0;
	char str[100];

	printf("���ϴ� ������ ������ �Է��ϼ��� : ");
	scanf("%d", &count);

	while(1) {

		char** p = (char**)malloc((sizeof(char*) * count));

		for (int i = 0;i < count; ++i) {
		
		printf("\n%d��° ������ �Է��ϼ��� : ", i+1);
		scanf("%s", str);

		
		p[i] = (char*)malloc((sizeof(char) * strlen(str))+1);

		strcpy(p[i], str);

		printf("\n%d��° ���� : ",i+1);
		puts(p[i]);
		
		
		}
		break;
	}


}
*/


/*
main() {


	///////////////////////////!!!!!!!!!!!!!!!!!!!!!!����!!!!!!!!!!!!!!!!!!!!!!//////////////////
	
	char add[100];

	printf("�ڽ��� �ּҸ� �Է��ϼ��� : \n");
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
	wp = fopen("������1.jpg", "wb");
	while (1)
	{

		cnt = fread(buff, sizeof(char), 100, rp);

		if (cnt < 100)  // ������ ���� �����ų� ������ ������ ���
		{
			if (feof(rp) != 0)  //���̶��
			{
				fwrite(buff, sizeof(char), cnt, wp);
				tot += cnt;
				puts("���� �Ϸ�\n");
				printf("������ ����� ����Ʈ : %d\n", cnt);
				printf("�� ����� ����Ʈ : %d\n", tot);
			}
			else
			{
				puts("���� ����");
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

	//����κ�
	//fp = fopen("a.txt", "w"); // ������ ������ �ڵ�����
								// ������ ������ ��������ϰ� ����
	//fprintf(fp, "%d %s\n", 1, "AAAA");

	//fclose(fp); // �������°��� ����

	// �б�κ�
	//int num;
	//char str[100];

	//fp = fopen("a.txt", "r"); // ������ error
	//fscanf(fp, "%d %s", &num, str);
	//fclose(fp);
	//printf("% d % s\n", num, str);			// �˾Ƽ� ����ͷ� ����ض�
	//fprintf(stdout, "% d % s\n", num, str);	// ����ͷ� ����ض�

	// update �κ�
	//fp = fopen("a.txt", "a"); // ������ error
	//fprintf(fp, "%d %s\n", 2, "ccc");	// ����ͷ� ����ض�
	//fclose(fp);

	// �б�κ�
	int num;
	char str[100];
	fp = fopen("a.txt", "r"); // ������ error
	while (1){
	fscanf(fp, "%d %s", &num, str);

	if (feof(fp) != 0) { //0�̸� �߰� //??? ��
		break;
	}
	printf("% d % s\n", num, str);			// �˾Ƽ� ����ͷ� ����ض�
	}
	fclose(fp);
}
*/