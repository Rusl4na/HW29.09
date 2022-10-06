#include <stdio.h>
#include <stdlib.h>
 
int main () {
int n,f,i;
n=1;
int *a;
a = (int*)malloc(n * sizeof(int));  
printf("Enter first element of massive\n");
scanf("%d",&a[0]);
for (i=0;i<n;i++)
{printf("a[%d] = %d\n", i,a[i]);}
while (1)
{ printf("1- Add \n");
printf("2- Insert\n");
printf("3- Size\n");
printf("4- Remove\n");
printf("5- Set\n");
printf("6- Get\n");
printf("7- Exit\n");
printf("Enter your choice\n");
int s;
scanf("%d",&s);
switch (s)
{case 1:{
int b; 
printf("Add\n");
scanf("%d",&b);
n=n+1;
a = (int*)realloc(a, n * sizeof(int));
a[n-1]=b;
for (i=0;i<n; i++)
{printf("%d  ",a[i]);}
printf("\n");}; break;
case 2:{
int k,c; 
printf("Item\n");
scanf("%d",&c);
printf("Index\n");
scanf("%d",&k);
n=n+1;
a = (int*)realloc(a, n * sizeof(int));
for (i=n; i>k; i--)
{a[i]=a[i-1];}
a[k]=c;
for (i=0;i<n; i++)
{printf("%d  ",a[i]);}
printf("\n");}; break;
case 3: {  printf("%d \n ",n);};break;
case 4: { int l;
printf("Index\n");
scanf("%d",&l);
n=n-1;
a = (int*)realloc(a, n*sizeof(int *));
for (i=l;i<n;i++){
a[i]=a[i+1];}
for (i=0;i<n; i++)
{printf("%d     ",a[i]);}
printf("\n");};break;
case 5:{
int v,w; 
printf("Item\n");
scanf("%d",&v);
printf("Index\n");
scanf("%d",&w);
a[w]=v;
for (i=0;i<n; i++)
{printf("%d  ",a[i]);}
printf("\n");}; break;
case 6:{
int q; 
printf("Index\n");
scanf("%d",&q);
printf("%d  \n",a[q]);}; break;
case 7: printf("Program is over\n");return 0;
default : printf("An invalid option has been selected. Repeat entry\n"); continue;}
}
return 0;}
