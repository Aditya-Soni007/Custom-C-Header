#include<stdio.h>
#include<stdlib.h>
#include"adi007.h"
#define kruskal krus
void sorted(int a[],int c);
int krus[50][50];
void main()
{  int n,i,j,a[50][50],arr[100],k,flag=0;
printf("enter the number of vertices present in the graph\n");
scanf("%d",&n);
printf("enter the adjcency matrix of the graph\n");
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
int c=1;
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        if(a[i][j]!=0)
        {
            arr[c]=a[i][j];
            c++;
        }
    }
}
sorted(arr,c);
int key,l,count=0;
for(i=1;i<c;i++)
{
    key=arr[i];
    flag=0;
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=n;k++)
            {
                if(key==a[j][k])
                {
                    for(l=1;l<=n;l++)
                    {
                        if(krus[j][l] && krus[l][k]!=0)
                        {
                            flag=1;
                        }
                    }
                    if(flag==0)
                    {
                        krus[j][k]=krus[k][j]=key;
                        count++;

                    }

                }
            }
        }
}
printf("The adjacency matrix of the matrix is : \n");
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        printf("%d ",krus[i][j]);
    }
    printf("\n");
}

}



void sorted(int a[],int c)
{
    int i,j,temp;
    for(i=1;i<c-1;i++)
    {
        for(j=1;j<c-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=1;i<c;i++)
        printf("%d ",a[i]);

    printf("\n");
}













