#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,n,loc=-1,data;
	char ch;
	cout<<"how many";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter";
		cin>>arr[i];
	}
	do{cout<<"data to be searched for";
	cin>>data;
	for(i=0;i<n;i++)
	{
		if(data == arr[i])
		{loc=i+1;
	}
}
	if(loc !=-1)
	{
		cout<<"data found in"<<loc<<"posiion";
	}
	else
	{
		cout<<"data not found";
	}
	cout<<"\nsearch again?";
	cin>>ch;
}while(ch=='y');
	return 0;
}
