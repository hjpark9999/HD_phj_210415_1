#include <stdio.h>

void main()
{
	int i;


	printf("1���� ū ����  �Է��غ�����.\n");
	scanf_s("%d", &i);
	if (i < 1) {
		printf("Error\n");
	}
	else if (i % 2 == 0) {
		printf("¦��\n");		
	}
	else printf("Ȧ��\n");
	
	fgetc(stdin);
}