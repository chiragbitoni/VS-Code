#include <stdio.h>
void bubble_sort(int arr[], int n)
{
for (int i = 1; i < n; i++)
{
for (int j = 0; j < n - i; j++)
{
if (arr[j] > arr[j + 1])
{
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
printf("Sorted Array is:\n");
for (int i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
}
int main()
{
int n;
printf("Enter size of an Array\n");
scanf("%d", &n);
int arr[n];
printf("Enter Elements of an Array\n");
for (int i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
bubble_sort(arr, n);
return 0;
}
