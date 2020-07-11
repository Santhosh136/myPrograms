#include<stdio.h>
#include<stdlib.h>

void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[100000];    
    int i,j,k;
    i=i1;    
    j=i2;    
    k=0;
    
    while(i<=j1 && j<=j2)      
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    
    while(i<=j1)    
        temp[k++]=a[i++];
        
    while(j<=j2)    
        temp[k++]=a[j++];
        
    
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}

void mergesort(int a[],int i,int j)
{
    int mid;
        
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid);        
        mergesort(a,mid+1,j);    
        merge(a,i,mid,mid+1,j);    
    }
}
 

int main() {
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int *a,i;
    a = (int*) calloc(n, sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    mergesort(a,0,n-1) ;        // sorts the array upto kth element;
    // for(int i=0;i<n;i++)
    //     printf("%d ",*(a+i));
    int min = 99999999;
    for(i=0;i<=n-k;i++) {
        if(min > a[i+(k-1)] - a[i]) {
            min = a[i+(k-1)] - a[i];
        }
    }
    printf("%d",min);
    
}
