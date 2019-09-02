#include<iostream>

using namespace std;

int main()
{
	int i,j,arr[100],n,k;
	cout<<"how many?";
	cin>>n;
	for(i=0;i<n;i++)
	{ cout<<"enter";
		cin>>arr[i];
	}
		//show
		cout<<"unsorted list"<<"\n";
		for(i=0;i<n;i++)
	{ cout<<arr[i]<<" ";
		
	}


for(j=1;j<n;j++)
{
k=arr[j]; /*k is to be inserted at proper place*/
for(i=j-1;i>=0 && arr[i]>k ;i--)
{
	arr[i+1]=arr[i];
}
arr[i+1]=k;

}
cout<<"\nSorted list is :\n";
for (i = 0; i < n; i++)
{cout<< arr[i];
}return 0;
}
