// Recursive bubble sort

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

void recursive_bubble_sort(int arr[],int beg,int end)
{
	if(beg >= end) return;
    recursive_bubble_sort(arr,beg+1,end);
    if(beg+1<=end && arr[beg] > arr[beg+1])
    {
    	arr[beg] = arr[beg]^arr[beg+1];
    	arr[beg+1] = arr[beg]^arr[beg+1];
    	arr[beg] = arr[beg]^arr[beg+1];
    	recursive_bubble_sort(arr,beg+1,end);
    }
}

int main()
{
	int n,arr[100];
    cin>>n;

    input(arr,n);
    recursive_bubble_sort(arr,0,n-1);
    output(arr,n);

    return 0;
}