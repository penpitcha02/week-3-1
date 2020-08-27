#include <stdio.h>
int main()
{
	int hr, min, cost;
	printf("hour: ");
	scanf_s("%d", &hr);
	printf("minute: ");
	scanf_s("%d", &min);
	if ((hr == 1 && min == 00) || (hr == 0 && min < 60))
	{
		printf("Free for the first hour");
	}
	else
	{
		cost = (hr + 1) * 30;
		printf("%d baht", cost);
	}
	return 0;
}