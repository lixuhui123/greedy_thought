#include<stdio.h>
#include<stdlib.h>
//̰��˼�룬��ʯ�����⡣
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
		printf("������ʯ����\n");
		int n = 0;
		scanf("%d", &n);
		//printf("������ÿ��ʯ�Ӵ���ĵ÷�\n");
		//int max = 0;//������
		//scanf("%d", &max);
		int arr[20] = { 0 };
		printf("����%d��ʯ�Ӵ���ķ���\n", n);
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