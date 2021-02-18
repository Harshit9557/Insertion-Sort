#include<stdio.h>
int main()
{
    int n,i,j,t,*p;
    printf("Enter Limit of Array :\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=1;i<n;i++)
    {
        t=*(p+i);
        j=i-1;
        while((t<*(p+j)) && j>=0)
        {
            *(p+j+1)=*(p+j);
            j--;
        }
        *(p+j+1)=t;
    }
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
    free(p);
    p=NULL;
    return 0;
}

