// Selection sort

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

void selection_sort(int arr[],int n)
{

	for (int i = 0; i < n-1; i++)
	{
		int idx = i;
		for (int j = i+1; j < n; j++)
		{
			if(arr[j] < arr[idx])
			{
				idx = j;
			}
		}
		if(i!=idx)
		{
			arr[i] = arr[i]^arr[idx]; 
			arr[idx] = arr[i]^arr[idx]; 
			arr[i] = arr[i]^arr[idx]; 
		}

	}
}

int main()
{
	int n,arr[100];
    cin>>n;

    input(arr,n);
    selection_sort(arr,n);
    output(arr,n);
    
    return 0;
}