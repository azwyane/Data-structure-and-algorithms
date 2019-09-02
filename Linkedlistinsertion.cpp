#include<iostream>
using namespace std;
struct node
{
float info;
struct node *link;
}*first;

int main()
{ 
	int m,ok;
	char ch;
	struct node *ptr,*cpt;
	 
	first=NULL;
	
	ptr= new node;
	cout<<"\nEnter the element:";
cin>>m;
ptr->info=m;
ptr->link=first;
first=ptr;
	A:
{
	
cout<<"\nEnter the element:";
cin>>m;
cpt= new node;

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
B:
ptr=first;

cout<<"\n\nList is :\n";
while(ptr!=NULL)
{
cout<< ptr->info<<"\n";
ptr=ptr->link;
}
cout<<"\n";
//imsertion fromt 
cout<<"insertion \n";
cout<<"1:first postion\n";
cout<<"2:last postion\n";
cout<<"3:any postion\n";

cin>>ok;
switch(ok)
{
	case 1:
	{
		cout<<"data";
cin>>m;
node *tmp = new node;


        tmp -> info = m;
        tmp-> link = first;
        first = tmp;
        
        goto B;
        break;
}


case 2:
{
	cout<<"data";
cin>>m;
node *tmp = new node;
tmp->info=m;
ptr=cpt;

	ptr->link=tmp;
	
	cpt=tmp;
	cpt->link=NULL;
	goto B;
	break;
}

case 3:
{ int pos;
	cout<<"data";
cin>>m;
node *tmp = new node;
cout<<"position";
cin>>pos;
ptr=first;
for(int i=1;i<pos;i++)
{
	ptr=ptr->link;
}
tmp->info=m;
tmp->link=ptr->link;
ptr->link=tmp;
goto B;
break;
}



default:
{
	cout<<"wrong choice";
	break;
}
}

return 0;
}
