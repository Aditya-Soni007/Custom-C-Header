#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<limits.h>
#include<assert.h>
#include<math.h>
#define PI 22/7
struct node
{
    int data;
    struct node *link;
};
struct node *root;
int hashtable[100];
int add(int a,int b) //TO ADD TWO NUMBERS//
{
    int c;
     c=a+b;
     return c;
}
int sub(int a,int b)//TO SUBSTRACT TWO NUMBERS//
{
    int c;
    c=a-b;
    return c;
}
int fdiv(int a,int b)//FLOOR DIVISION LIKE PYTHON//
{ int c;
    c=a/b;
    return c;
}
int floorval(float n)//TO FIND A FLOOR VALUE OF A FLOAT//
{int c;
     c=n;
     return c;
}
int rtriarea(int b,int h)
{
    int area;
    area=(1/2)*(b)*(h);
    return area;
}
int equitriarea(int side)
{ int area;
   area=(sqrt(3)/(4))*(side*side);
   return area;
}
float triarea(float a,float b,float c)
{ float s,d,area;
    s=(a+b+c)/2;
    d=(s)*(s-a)*(s-b)*(s-c);
    area=sqrt(d);
    return area;
}
float cirarea(float r)
{ int area;
    area=(PI)*r*r;
    return area;

}
float cirperi(float r)
{ float peri;
     peri =2*(PI)*r;
     return peri;
}
int recarea(int l, int b)
{ int area;
   area=l*b;
   return area;

}
int recperi(int l,int b)
{  int area;
   area=2*(l+b);
   return area;
}
int squarea(int side)
{
     int area;
     area=(side*side);
     return area;
}
int squperi(int side)
{
    int peri;
    peri=4*side;
    return peri;
}
void evodd(int n)
{ if(n%2==0)
   {
       printf("The given number is even\n");
   }
   else
    {
    printf("The given number is odd");
   }

}
void prime(int n)
{
    int i;
    int flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            printf("The given number is not prime\n");
            break;
        }
    }
    if(flag==0)
        printf("The number is prime\n");
}
void printeven(int lb,int ub)
{  int i;
   for(i=lb+1;i<ub;i++)
   {    if(i%2==0)
          {
               printf("%d ",i);
          }

   }
}
void printodd(int lb,int ub)
{  int i;
   for(i=lb+1;i<ub;i++)
   {    if(i%2!=0)
          {
               printf("%d ",i);
          }

   }
}
void fibo(int n)
{
     int s=0,f=1,t,i;
     if(n==1)
      {printf("%d",s);
      }
     else if(n==2)
        { printf("%d %d",s,t);
        }
     else if(n>2)
     {
         for(i=0;i<n;i++)
         { t=f+s;
             printf("%d ",t);
            f=s;
            s=t;
         }
     }
     else
       { printf("INVALID INPUT\n");
       }
}
void checkfibo(int n)
{ int s=0,f=1,flag=0,t;
   if(n==0)
   {
       printf("Element Exists\n");
   }
   else if(n==1)
   {
       printf("Element Exists\n");
   }
    else
    {
        for(int i=0;i<1000;i++)
        {
            t=f+s;
            if(t==n)
            {
                printf("Element Exists\n");
                flag=1;
                break;
            }
            f=s;
            s=t;

        }
    }
    if(flag==0)
    {
         printf("Element does not exist\n");
    }
}
int digitsum(int n)
{
     int a,sum=0;
     while(n!=0)
     {
         a=n%10;
         sum=sum+a;
         n=n/10;
     }
     return sum;
}
int sum(int a,int b,int step)
{ int i,sum=0;
       if(step==1)
       { for(i=a;i<=b;i++)
          {

              sum=sum+i;
          }
          return sum;
       }
       else if(step>1)
       {
             for(i=a;i<=b;i=i+step)
             {
                 sum=sum+i;
             }

          return sum;
       }
       else
       {
           for(i=b;i>=a;i=i+step)
           {
               sum=sum+i;
           }
           return sum;
       }

       }
void palindrome(int n)
{
     int a,sum=0;
int x;
x=n;
     while(n!=0)
     {
         a=n%10;
         sum=sum*10+a;
         n=n/10;
     }
     if(sum==x)
     {
         printf("The given number is palindrome\n");

     }
     else
     {
         printf("The given number is not palindrome\n");
     }
}
void armstrong(int num)
{
    int originalNum, remainder, result = 0;

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}
int array_len(int a[])
{
    int s;
    s=sizeof(a)/sizeof(a[0]);
    return s;
}
int array_sum(int a[],int n)
{ int i,sum=0;
  for( i=0;i<n;i++)
  {
      sum=sum+a[i];
  }
  return sum;

}
void array_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int array_count(int a[],int s,int n)
{
     int i,c=0;
     for(i=0;i<n;i++)
     {
         if(a[i]==s)
         {
              c++;
         }

     }
     return c;
}
int array_index(int a[],int s,int n)
{
     int i,loc;
     for(i=0;i<n;i++)
     {
         if(s==a[i])
         {
             loc=i;
         }
     }
     return loc;
}
int array_delete(int a[],int n,int s)
{  int flag=0,j,i;
   for(i=0;i<n;i++)
   {
           if(a[i]==s)
           {
               flag=1;
                for(j=i;j<n;j++)
                {
                    a[j]=a[j+1];
                }
                break;
           }
   }
    n--;
    return n;
}
int array_insert(int arr[],int n,int s,int pos)
{
     int i,flag=0,j;
       for (i = n; i >= pos; i--)
       {
        arr[i] = arr[i - 1];
       }

    arr[pos] = s;
  n++;
       return (n);
}
void str_int(char s[],int a[])//used to convert a string of character constants into integer constant//
{
  int l=strlen(s);
  for(i=0;i<l;i++)
  {
      a[i]=s[i]-'0';
  }
}
void str_clean(char str[])
{ int i,j;
    for(i=0; str[i]!='\0'; ++i)
    {
        while (!((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z' || str[i]=='\0')))
        {
            for(j=i;str[j]!='\0';++j)
            {
                str[j]=str[j+1];
            }
            str[j]='\0';
        }
    }

}
void lexiograph(char s[])
{
      int i,j,l;
      char temp;
      l=strlen(s);
      for(i=0;i<l-1;i++)
      {
          for(j=0;j<l-1;j++)
          {
              if(s[j]>s[j+1])
              {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;

              }
          }
      }
}
int array_append(int a[],int n,int data)
{
    a[n]=data;
     n++;
     return n;
}
int array_pop(int a[],int n)
{
     int i;
        for(i=0;i<n;i++)
        {
            a[i]=a[i+1];
        }
        n--;
        return n;
}
int ceilval(float n)
{
    int c;
    c=n;
    return c+1;
}
int str_palindrome(char s[],int l)
{
    char str[100];
    int flag=0;
    for(int i=0;i<l;i++)
    {
        str[i]=s[i];
    }
    strrev(str);
    puts(str);
    puts(s);
        for(int i=0;i<l-1;i++)
        {if(s[i]!=str[i])
                {
                    return 0;
                    flag=1;
                }
            }
            if(flag==0)
            return 1;

}
void uni_on(int a[],int b[],int m,int n)
{
    int *c,i,j,k=0,flag=0,temp;
    c=(int*)calloc(m+n,sizeof(int));
    for(i=0;i<m;i++)
    {
        c[i]=a[i];
          k++;
    }
    for(i=0;i<n;i++)
    { flag=0;
              for(j=0;j<m;j++)
              {
                  if(b[i]==a[j])
                  {   flag=1;
                      break;
                  }
              }
              if(flag==0)
              {
                   c[k]=b[i];
                   k++;
              }
        }
        array_sort(c,k);
        printf("The union is : \n");
        for(i=0;i<k;i++)
        {    if(c[i]==0)
               {
                   continue;
               }
            printf("%d  ",c[i]);
        }
}
void intersection(int a[],int b[],int m,int n)
{
    int *c,i,j,flag=0,k=0;
   c=(int*)malloc((m+n)*sizeof(int));
    for(i=0;i<m;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
                break;
            }
        }

    if(flag==1)
    {
        c[k]=a[i];
        k++;
    }
    }
    array_sort(c,k);
    printf("The Intersection  is :  \n");
    for(i=0;i<k;i++)
    {
        printf("%d  ",c[i]);
    }
}

void array_diffrence(int a[],int b[],int m,int n)
{
    int c[10],i,j,k=0,flag=0;
    //c=(int*)malloc((m+n*sizeof(int)));
    for(i=0;i<m;i++)
      { flag=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
          c[k]=a[i];
              k++;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ", c[i]);
    }
}

void sll_append()
{  struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to insert in the new node\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
     {
         root=temp;
     }
     else
     {  struct node *p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
     }
}
int sll_length()
{  struct node *temp;
    int c=0;
    temp=root;
    while(temp!=NULL)
    {  c++;
        temp=temp->link;
    }
return c;
}
void sll_atbegin()
{  struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to insert in the new node\n");
    scanf("%d",&temp->data);
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->link=root;
        root=temp;
    }
}
void sll_addafter()
{ struct node *temp,*p;
  int loc,i=1;
  printf("Enter the location you want to add a node after\n");
  scanf("%d",&loc);
  if(loc>sll_length())
  {
      printf("Error 404!The location doesn't exist in the list\n");
      printf("Currently there are %d nodes in the list",sll_length());
  }
  else
  {  p=root;
     while(i<loc)
     { p=p->link;
        i++;
     }
      temp=(struct node*)malloc(sizeof(struct node));
      printf("Enter the data you want to insert in the new node\n");
      scanf("%d",&temp->data);
      temp->link=p->link;
      p->link=temp;
  }
}
void sll_delete()
{ struct node *temp;
    int loc;
    printf("Enter the location of the node you want to delete\n ");
    scanf("%d",&loc);
    if(loc>sll_length())
    {
        printf("Error 404!The location doesn't exist in the list\n");
    }
    else if(loc==1)
    { temp=root;
       root=temp->link;
        temp->link=NULL;
        free(temp);
    }
    else
    { struct node *p=root,*q;
        int i=1;
        while(i<loc-1)
        { p=p->link;
            i++;
        }
        q=p->link;
        p->link=q->link;
        q->link=NULL;
        free(q);
    }
}
void sll_display()
{ struct node *temp;
    if(root==NULL)
  {
      printf("The linked list is EMPTY\n");
  }
  else
  { temp=root;
     while(temp!=NULL)
     {
         printf("%d->",temp->data);
         temp=temp->link;
     }
  printf("NULL\n");
  }
}

void sll_reverse()
{   struct node *p,*q;
     int i,j,len,k,temp;
     len=sll_length();
    i=0;
    j=len-1;
    p=root;
    q=root;

    while(i<j)
    {
        k=0;
        while(k<j)
        {
            q=q->link;
            k++;
        }
        temp=p->data;
        p->data=q->data;
        q->data=temp;
        i++;
         j--;
        p=p->link;
        q=root;
    }

}

void sll_swapnodes()
{  struct node *p,*q,*r;
    int loc,i=1;
    printf("Enter the node which you want to swap with it's adjacent node\n");
    scanf("%d",&loc);
    p=root;
    while(i<loc-1)
    {
        p=p->link;
        i++;
    }
    q=p->link;
    r=q->link;
    q->link=r->link;
    p->link=r;
    r->link=q;
}

































