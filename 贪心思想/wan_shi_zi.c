#include<stdio.h>
#include<stdlib.h>
//贪心思想，玩石子问题。
void bubble(int arr[], int n)
{
	int i = 0;
	int j = 0;
	for (i=0; i < n; ++i)
	{
		for (j = 0; j < n - 1 - i; ++j)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}		
	}
	
}
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
		int sum = 0;
		printf("请输入石子数\n");
		int n = 0;
		scanf("%d", &n);
		//printf("请输入每个石子代表的得分\n");
		//int max = 0;//载重量
		//scanf("%d", &max);
		int arr[20] = { 0 };
		printf("输入%d个石子代表的分数\n", n);
		for (i = 0; i < n; ++i)
		{
			scanf("%d", arr + i);
		}
		
		
		for (i = 0; i < n - 1; ++i)
		{
			bubble(arr+i, n-i);
			arr[i + 1] = arr[i] + arr[i + 1];;
			sum += arr[i + 1];
		}
		printf("%d\n", sum);
	system("pause");
	return 0;
}