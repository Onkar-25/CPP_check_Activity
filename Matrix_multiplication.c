#include<stdio.h>
main()
{
    int mat1[20][20],mat2[20][20],ans[20][20],r1,c1,r2,c2,i,j,k,sum;
    printf("Enter the rows and columns of first matrix=");
    scanf("%d %d",&r1,&c1);
    printf("\nEnter the rows and columns of second matrix=");
    scanf("%d %d",&r2,&c2);
    if(c1==r2)
    {
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            mat1[i][j]=rand()%100;
            mat2[i][j]=rand()%100;
        }
    }
    printf("\nElements of first matrix are\n");
    printf("mat1=   ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n\t");
    }

    printf("\nElements of second matrix are\n");
    printf("mat2=   ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n\t");
    }
    printf("\nmat1+mat2 =\t");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum=0;
            for(k=0;k<c1;k++)
            {
                sum=sum+(mat1[i][k]*mat2[k][j]);
            }
            ans[i][j]=sum;
            printf("%d\t",ans[i][j]);
        }
        printf("\n\t\t");
    }

    }
    else
    {
        printf("Multiplication cant be performed");
    }

}
