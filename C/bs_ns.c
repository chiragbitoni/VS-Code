#include <stdio.h>
int binary_search(int arr[], int n, int val)
{
int low = 0, high = n - 1; int mid = (low + high) / 2;
while (low <= high)
{
if (arr[mid] == val)
{
return mid;
}
else if (arr[mid] < val)
{
low = mid + 1;
}
else
{
high = mid - 1;
}
mid = (low + high) / 2;
}
return -1;
}
int main()
{ int n;
printf("Enter size of an Array\n");
scanf("%d", &n);
int arr[n], val, result;
printf("Enter Element of an Array\n");
for (int i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
printf("Enter Value to find out\n");
scanf("%d", &val);
result = binary_search(arr, n, val);
if (result == -1)
{
printf("Item Not Found!");
} else
{
printf("Item found at Index %d and position %d", result,
result + 1);
}

return 0;
}
