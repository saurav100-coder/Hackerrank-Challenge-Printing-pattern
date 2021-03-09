#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int i,j,k,z,c=n*2-2,d;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
            printf("%d ",j);
        for(k=c;k>=1;k--)
            printf("%d ",i);
        c-=2;
        if(i==n) {
            printf("\n");
            continue;
        }
        d=i+1;
        for(z=d;z<=n;z++)
        {
            printf("%d ",z);
        }
        printf("\n");
    }
    c=1;
    for(i=2;i<=n;i++)
    {
        for(j=n;j>=i;j--)
            printf("%d ",j);
        for(k=c;k>=1;k--)
            printf("%d ",i);
        c+=2;
        for(z=i;z<=n;z++)
            printf("%d ",z);
        printf("\n");
    }


}
