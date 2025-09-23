#include<stdio.h>
int main()
{
int m,n,i,j,k;
printf("enter the number of rows and columns of the matrixes:");
scanf("%d%d",&m,&n);
int A[m][n],B[m][n],Sum[m][n],sub[m][n],mul[m][n];
printf("enter the elements of matrix A:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&A[i][j]);
printf("enter the elements of matrix B:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&B[i][j]);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
Sum[i][j]=A[i][j]+B[i][j];
for(i=0;i<m;i++)
for(j=0;j<n;j++)
sub[i][j]=A[i][j]-B[i][j];
if(m==n)
{
for(i=0;i<m;i++){
for(j=0;j<n;j++){
mul[i][j]=0;
for(k=0;k<n;k++)
{
mul[i][j]+=A[i][j]*B[i][j];
}
}
}
}
printf("\n Matrix Addition:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d",Sum[i][j]);
printf("\n");
}
printf("\n Matrix Substraction:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d",sub[i][j]);
printf("\n");
}
if(m==n)
{
printf("\n Matrix Multiplication");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d",mul[i][j]);
printf("\n");
}
}
else
{
printf("\nMatrix multiplication not possible.\n");
}
return 0;
}
