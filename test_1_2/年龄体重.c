# include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
int main()
{
	int i;
	while (i <= 10)
	{
		if (i == 5)
		continue;
		printf("%d", i);
		i++;
	}
	/*int age =10;
	double weight = 70;

	age = age+1;
	printf("%d\n", age);
	
	weight = weight + 1;
	printf("%lf\n", weight);*/

	/*int i = 3, j;
	j = i++;
	printf("i=%d,j=%d\n", i++, j);
	j = ++i;
	printf("i=%d,j=%d\n", i++, j);
	j = --i;
	printf("i=%d,j=%d\n",i--, j);
	j = i--;
	printf("i=%d,j=%d\n", --i, j);*/
	
	return 0;
}
