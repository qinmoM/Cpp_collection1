void My_Sort1(int* arr, int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < num; j++)
		{
			int n = arr[i];
			if (arr[j] < n)//更改排序方式只需要改这里的符号。
			{
				arr[i] = arr[j];
				arr[j] = n;
			}
		}
	}
}