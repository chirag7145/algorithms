// Bubble sort

#include <bits/stdc++.h>
using namespace std;

void input(int arr[],int n)
{
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
}

void output(int arr[],int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
}

void bubble_sort(int arr[],int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n-1-i; j++)
		{
			if(arr[j+1]<arr[j])
			{
				arr[j] = arr[j]^arr[j+1];
				arr[j+1] = arr[j]^arr[j+1];
				arr[j] = arr[j]^arr[j+1];
			}
		}
	}
}

int main()
{
	int n,arr[100];
    cin>>n;

    input(arr,n);
    bubble_sort(arr,n);
    output(arr,n);

    return 0;
}