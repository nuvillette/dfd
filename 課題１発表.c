#include <stdio.h>

int main()
{

    int i;

    int num;

    int fact = 1;

    printf("���R������͂��Ă������� = ");
    scanf_s("%d", &num);

    for (i = 1; i <= num; ++i) {
        fact = fact * i;
    };

    printf("�u%d�v�̊K��́u%d�v�ł��B\n", num, fact);

    return 0;
}
