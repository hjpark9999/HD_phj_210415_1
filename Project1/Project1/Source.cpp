#include <stdio.h>

void main()
{
	int i;


	printf("1보다 큰 수를  입력해보세요.\n");
	scanf_s("%d", &i);
	if (i < 1) {
		printf("Error\n");
	}
	else if (i % 2 == 0) {
		printf("짝수\n");		
	}
	else printf("홀수\n");
	
	fgetc(stdin);
}