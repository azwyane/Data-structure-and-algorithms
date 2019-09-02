#include<iostream>
using namespace std;

int main()
{
	int array[10],n,i;
	int m,l,u,key;
		cout<<"how many";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter";
		cin>>array[i];
	}
	l=0;
	u=n-1;
	m= (l+u)/2;
	cout<<"enter the key to search";
	cin>>key;
	while(key !=array[m] && l <= u)
{
if (key > array[m] )
l=m+1;
else
u=m-1;
m=(l+u)/2;
}
if (key == array[m])
cout<<"found";
else
cout<<"not found";
return 0;
}
