// Insertion sort

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

	cout<<endl;
}

void insertion_sort(int arr[],int n)
{
	for (int i = 1; i < n; i++)
	{
		int j = arr[i];
		int st = i-1;
		while(st >= 0 && j < arr[st])
		{
			
			//{
				arr[st+1] = arr[st];
				st = st - 1;
			//}
		}
		arr[st+1] = j;
	}
}
			
int main()
{
	int n,arr[100];
    cin>>n;

    input(arr,n);
    insertion_sort(arr,n);
    output(arr,n);

    return 0;
}