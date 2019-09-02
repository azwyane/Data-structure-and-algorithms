#include<iostream>
using namespace std;
struct node
{
int info;
struct node *link;
}*first;

int main()
{ 
	int m;
	char ch;
	struct node *ptr,*cpt;
	first=NULL;
	
	ptr= (struct node*)malloc(sizeof(struct node));
	cout<<"\nEnter the element:";
cin>>m;
ptr->info=m;
ptr->link=first;
first=ptr;
	A:
{

cout<<"\nEnter the element:";
cin>>m;
cpt= (struct node*)malloc(sizeof(struct node));

cpt->info=m;
ptr->link=cpt;
ptr=cpt;
}
cout<<"add again";
cin>>ch;
if (ch=='y' || ch=='Y')
{
	goto A;
}
ptr->link=NULL;

ptr=first;
cout<<"\n\nList is :\n";
while(ptr!=NULL)
{
cout<< ptr->info<<"\n";
ptr=ptr->link;
}
cout<<"\n";


return 0;
}
