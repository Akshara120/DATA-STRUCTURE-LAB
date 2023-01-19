#include <stdio.h>
void main()
{
int a[10],b[7],c[20],n1,n2,m,i,j,k;
//first array
printf("enter the size of the array:");
scanf("%d",&n1);
printf("enter the element of the array:");
for(i=0;i<n1;i++){
    scanf("%d",&a[i]);
}
//second array
printf("enter the size of the array:");
scanf("%d",&n2);
printf("enter the element of the array:");
for(j=0;j<n2;j++){
    scanf("%d",&b[j]);
}
i=0;j=0;k=0;
while(i<n1 && j<n2)
{   
 if(a[i]<b[j])
{ 
c[k]=a[i];
  i++;k++;
}
else if(a[i]>b[j])
{ 
c[k]=b[j];
  j++;k++;
}
else{
    c[k]=a[i];
  i++;
  j++;
  k++;
}
}
while(i<n1)
{ 
c[k]=a[i];
  i++;
  k++;
}
while(j<n2)
{ 
c[k]=b[j];
j++;
k++;
}
m=k;

printf("elements are\n");
for(k=0;k<m;k++)
{
printf("%d\n",c[k]);
}
}


