#include<iostream>
using namespace std;

int array[10];
//Function to merge the sub files or arrays
void merge(int l, int m, int h )
{
int temp[10];
int i = l;
int j = m+1 ;
int k = l;
while( (i <= m) && (j <=h) )
{
if (array[i] <= array[ j])
temp[k++] = array[i++] ;
else
temp[k++] = array[ j++] ;
}
/*End of while*/


while( i <= m )
temp[k++]=array[i++];



while( j <= h)
temp[k++]=array[j++];



for (i= l;i <= h ; i++)
{array[i]=temp[i];
}
}/*End of merge()*/
//Function which call itself to sort an array


void mergesort(int l, int h)

{
int m;
if ( l != h)
{
m = (l+h)/2;
mergesort( l , m );
mergesort( m+1, h );
merge(l, m, h );
}
}/*End of merge_sort*/
int main()
{
int i,n;

cout<<"\nhow many";
cin>>n;
for (i=0;i<n;i++)
{
cout<<"\nEnter element :"<<i+1<<" ";
cin>>array[i];
}
cout<<"\nUnsorted list is :\n";
for ( i = 0 ; i<n ; i++)
{cout<< array[i];
}
mergesort( 0, n-1);

cout<<"\nSorted list is :\n";
for ( i = 0 ; i<n ; i++)
{cout<< array[i];
}

return 0;
}/*End of main()*/
