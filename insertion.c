#include<stdio.h>
void main(){
int i,j,k,a[10],n;
printf("\n how many elements you want to sort?");
scanf("%d",&n);
printf("\n enter elements for an array");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=1;i<n;i++){
k=a[i];
for(j=i-1;j>=0&&k<a[j];j--){
a[j+1]=a[j];
}
a[j+1]=k;
}
printf("\n after sorting the elements are:");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
}


