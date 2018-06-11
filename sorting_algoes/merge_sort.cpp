// // Merge sort`

// #include <bits/stdc++.h>
// using namespace std;

// void input(int arr[],int n)
// {
// 	for(int i = 0; i < n; i++)
// 	{
// 		cin>>arr[i];
// 	}
// }

// void output(int arr[],int n)
// {
// 	for(int i = 0; i < n; i++)
// 	{
// 		cout<<arr[i]<<" ";
// 	}

// 	cout<<endl;
// }

// void merge_sort(int arr[],int brr[],int crr[],int n,int m)
// {
// 	int i=0,j=0,k=0;
// 	while(i<n && j<m)
// 	{
// 		if(arr[i]>brr[j])
// 		{
// 			arr[k++] = brr[j++];
// 		}
// 		else
// 		{
// 			crr[k++] = arr[i++];
// 		}
// 	}

// 	while(i<n)
// 	{
// 		crr[k++] = arr[i++];
// 	}

// 	while(j<m)
// 	{
// 		crr[k++] = brr[j++];
// 	}
// }

// int main()
// {
// 	int n,m,brr[50],arr[100];
//     cin>>n>>m;

//     input(arr,n);
//     input(brr,m);
//     merge_sort(arr,brr,n,m);
//     output(arr,n+m);

//     return 0;
// }


// Merge sort

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

void func(int arr[],int n)
{
	
}

int main()
{
	int n,arr[100];
    cin>>n;

    input(arr,n);
    
    output(arr,n);

    return 0;
}