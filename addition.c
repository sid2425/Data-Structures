#include<stdio.h>
void main()
{
    int a[2][3];
    int b[2][3];
    int c[2][3];
    int d[2][3];
    int i,j;
    printf("Please Enter the elements of the first Matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Please Enter the ELement at position %d",i+j);
            scanf("%d",&a[i][j]);
        }
         printf("\n");
    }
    printf("Please Enter the elements of the Second Matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Please Enter the ELement at position %d",i+j);
            scanf("%d",&b[i][j]);
        }
         printf("\n");
    }
    printf("The Elements of The first Matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\n",a[i][j]);
        }
         printf("\n");
    }
    printf("The Elements of The Second Matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\n",a[i][j]);
        }
         printf("\n");
    }
   printf("The ELements of The third Matrix\n");
   for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\n",c[i][j]);
        }
        printf("\n");
    }
    printf("The ELements of The Fourth Matrix\n");
   for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
            printf("%d\n",d[i][j]);
        }
        printf("\n");
    }
}