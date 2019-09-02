#include<iostream>

using namespace std;

int main()
{
	int i,j,a[10],n,k,small,tmp;
	cout<<"how many?";
	cin>>n;
	for(i=0;i<n;i++)
	{ cout<<"enter";
		cin>>a[i];
	}
		//show
		cout<<"unsorted list"<<endl;
		for(i=0;i<n;i++)
	{ cout<<a[i]<<" ";
		
	}
	
	//insertion
cout<<endl;
	for(i=0;i<n-1;i++)
	{
		small=i;
		for(k=i+1;k<n;k++)
		{
			if (a[small]>a[k])
			{ small=k;
			}
		
		}
		if (i != small)
		{
			tmp =a[i];
			a[i]=a[small];
			a[small]=tmp;
		}
		cout<<"after"<<i+1<<"pass"<<" ";
		for(j=0;j<n;j++)
		{
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
		cout<<endl;
		cout<<"sorted\n";
		for(i=0;i<n;i++)
		
		cout<<a[i]<<" ";
		return 0;
	}
	
