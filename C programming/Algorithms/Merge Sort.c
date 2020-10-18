#include <stdio.h>
#include <stdlib.h>

int n;

void merge(int a[], int s, int e)
{
    int mid = (s+e)/2;
    int i = s;
    int j = mid + 1;
    int k = 0;

    int temp[n];

    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }

    while(i<=mid)
    {
        temp[k++] = a[i++];
    }
    while(j<=e)
    {
        temp[k++] = a[j++];
    }

    for(i=s, j=0; i<=e; i++,j++)
    {
        a[i] = temp[j];
    }
}

void mergesort(int a[], int s, int e)
{
    int mid;
    if(s<e)
    {
    mid = (s+e)/2;

    mergesort(a, s, mid);
    mergesort(a, mid+1, e);

    merge(a, s, e);
    }
}

int main()
{

    int a[n];
    int i;
    printf("Hello World!\nThis is the program for Merge Sort\n");
    printf("Enter size of array:\n");
    scanf("%d", &n);
    printf("Enter the numbers for array in any random fashion:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Unsorted Array:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    mergesort(a, 0, n-1);
    printf("\nSorted Array:\n");
    for(i = 0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
