#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
int n,i,min,ind;  
printf("Enter a number of material points\n");
scanf("%d",&n);
srand(time(NULL));
int arr[n];
for (i=0; i<n; i++){
arr[i] = rand() % 30;
printf("%d   ",arr[i]);}
printf("\n");
while (1){
min=arr[0];
ind=0;
for (i=0; i<n-1; i++){
if (min>arr[i+1]) {min=arr[i+1]; ind=i+1;}
else if (min<arr[i+1]) continue;}
if (ind==n-1) arr[ind-1]=arr[ind-1]+arr[ind];
else arr[ind+1]=arr[ind]+arr[ind+1];
for(i=ind; i<n-1; i++){
arr[i]=arr[i+1];}
for (i=0; i<n-1; i++){
printf("%d   ",arr[i]);}
printf("\n");
n=n-1;
if (n==1)return 0;}}
