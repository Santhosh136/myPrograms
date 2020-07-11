#include<stdio.h>

int migratoryBirds(int a[],int n) {
    int f[5]={0};
    for(int i=0;i<n;i++) {
        f[a[i]-1]++;
        printf("%d\n",a[i]-1);
    }
    int index,max = 0;
    for(int i=0;i<5;i++) {
        printf("&&&&%d\n", f[i]);
        if(max < f[i]) {
            max = f[i];
            index = i;
        }
    }
    return index+1;
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int index = migratoryBirds(a,n);
    printf(">>>%d",index);
}
