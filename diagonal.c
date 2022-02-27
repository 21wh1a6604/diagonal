#include<Stdio.h>
int main(){
int array1[10][10],i,j,m,n,sum=0;
printf("enter no of rowss:");
scanf("%d",&m);
printf("enter no ofcolumns:");
scanf("%d",&n);
printf("enter the values into matrix");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
	{
		printf("\n enter a[%d][%d] value::",i,j);
		scanf("%d",array1[i][j]);
	}
}
printf("\n the diagonal elements of the matrix are:\n\n");
if(m==n)
{
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		if(i==j)
		printf("\t%d",array1[i][j]);
		else
		printf("\t");

	printf("\n\n");
	}
}
}
else
{
	printf("matrix is not a square matrix");
}
}
