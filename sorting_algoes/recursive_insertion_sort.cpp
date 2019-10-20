// Recursive insertion sort

#include <bits/stdc++.h>
using namespace std;

void input(int arr[],int n)
{
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
}

void output(int arr[],int n) //function to display output of array.
{
	for(int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;
}

void recursive_insertion_sort(int arr[],int n)  //recursive funtion for insertion sort. complexity is 0(n^2).
						//it is one of many sorting algorithms.
{
	if(n <= 1) return;

	recursive_insertion_sort(arr,n-1);

	int j = arr[n-1];
	int st = n - 2;

	while(st >= 0 && arr[st] > j)
	{
		arr[st+1] = arr[st];
		st = st-1;
	}
	arr[st+1] = j;
}

int main()
{
	int n,arr[100];
    cin>>n;

    input(arr,n);
    recursive_insertion_sort(arr,n);
    output(arr,n);

    return 0;
}
