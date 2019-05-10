//#include<stdio.h>
//#include<stdlib.h>
////贪心思想，过河问题。
//void bubble(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i=0; i < n; ++i)
//	{
//		for (j = 0; j < n - 1 - i; ++j)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//			
//	}
//	for (i = 0; i < n; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//		int sum = 0;
//		printf("请输入人数\n");
//		int n = 0;//表示人数
//		scanf("%d", &n);
//		printf("请输入船的最大载重量\n");
//		int max = 0;//载重量
//		scanf("%d", &max);
//		int arr[20] = { 0 };
//		printf("输入%d个人的质量\n", n);
//		for (i = 0; i < n; ++i)
//		{
//			scanf("%d", arr + i);//键入人的重量
//		}
//		bubble(arr,n);
//		printf("\n");
//		for (i = 0, j = n - 1;i<=j ;)
//		{
//			if (arr[i] + arr[j] < max)
//			{
//				i++;
//				j--;
//				++count;
//			}
//			else
//			{
//				j--;
//				++count;
//			}
//		}
//		printf("%d \n", count);
//	system("pause");
//	return 0;
//}