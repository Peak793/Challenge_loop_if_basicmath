#include<stdio.h>
#include<math.h>
int main()
{
	int x, y, i, j, k = 0;
	double xbar=0,sd=0, sum = 0, sigma = 0;
	scanf_s("%d %d",&x,&y);
		if (x < y) //check if x is more than y
		{
			for (i = x; i <= y; i++)//print all number and calculate sum
			{
				printf("%d ", i);
				k++;
				sum += i;
			}
			printf("\n");
			xbar = sum / k;
			printf("Average = %.1lf\n", xbar);
			for (i = x; i <= y; i++)
			{
				sigma += pow(i-xbar,2);
			}
			sum = sigma / (k-1);
			sd = sqrt(sum);
			printf("SD = %.2lf", sd);
		}
		else {
			for (j = x; j >= y; j--)
			{
				printf("%d ", j);
				k++;
				sum += j;
			}
			printf("\n");
			xbar = sum / k;
			printf("Average = %.1lf\n", xbar);
			for (j = x; j >= y; j--)
			{
				sigma += pow(j-xbar, 2);
			}
			sum = sigma / (k - 1);
			sd = sqrt(sum);
			printf("SD = %.2lf", sd);
		}
		return 0;
}