#include<stdio.h>

int main()
{
    char arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = sz - 1;
    int tmp = 0;
    int i = 0;
    while(left < right)
    {
	while((left < right) && (arr[left] % 2 == 1))
	{
	    left++;
	}
	while((left < right) && (arr[right] % 2 == 0))
	{
	    right--;
	}
	if(left < right)
	{
	    tmp = arr[left];
	    arr[left] = arr[right];
	    arr[right] = tmp;
	}
    }
    for(i = 0; i < sz; i++)
    {
	printf("arr[%d] = %d\n", i, arr[i]);
    }
    getchar();
    return;
}