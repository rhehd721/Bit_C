#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void SortFunc(int arr[10]);
int main()
{
    int org[10];
    int i = 0;


    srand(time(NULL));


    /* 1�� : 0~100 ������ ���� �� �ο�*/
    for (i = 0; i < 10; ++i) {
        org[i] = (rand() % 100);
        int j = 0;
        for (j = 0; j < i; ++j) {
            while (org[i] == org[j]) {
                org[i] = (rand() % 100);
                j = 0;
            }
        }
    }

    /* ���� �� ��� */
    for (i = 0; i < 10; ++i)
        printf("%4d", org[i]);
    printf("\n\n");

    SortFunc(org);

    /* ���� �� ��� */
    for (i = 0; i < 10; ++i)
        printf("%4d", org[i]);
    printf("\n\n");

    return 0;
}


void SortFunc(int arr[10])
{
    int select = 0;
    printf("* 0�� = ��������, 1�� = �������� * \n  ���ڸ� �Է��ϼ��� ==>  ");
    scanf("%d", &select);
    int* ptr1 = 0;
    int* ptr2 = 0;
    int min = 0;
    int i = 0;
    int j = 0;



    //2�� : ���� ���� �˰��� // ��������
    if (select == 0) {
        printf("���������� ����մϴ�");
        for (i = 0;i < 10;++i) {
            for (j = i + 1;j < 10;++j) {
                if (arr[i] < arr[j]) {
                    ptr1 = &arr[i];
                }
                else if (arr[i] > arr[j]) {
                    ptr1 = &arr[j];
                }
                min = *ptr1;
                ptr2 = &arr[i];
                *ptr1 = *ptr2;
                *ptr2 = min;
            }

        }

    }


    //3�� : ���� ���� �˰��� // �յ� ���ؼ� ū�� �ڷ�
    else if (select == 1) {
        printf("���������� ����մϴ�");
        while (j < 10) {
            for (i = 0; i < 9; ++i) {
                if (arr[i] < arr[i + 1]) {
                    ptr1 = &arr[i];
                    min = *ptr1;
                    ptr2 = &arr[i];
                    *ptr1 = *ptr2;
                    *ptr2 = min;
                }
                else if (arr[i] > arr[i + 1]) {
                    ptr1 = &arr[i + 1];
                    min = *ptr1;
                    ptr2 = &arr[i];
                    *ptr1 = *ptr2;
                    *ptr2 = min;
                }
            }
            j = j + 1;
        }
    }

}