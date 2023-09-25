#include<stdio.h>
int i=0;
void add(int n,int i);
int n;
int main() 
{  
     printf("enter how many time you want sum: ");
    scanf("%d",&n);
    add( n, i);
}

void add(int n,int i)
{   i++;
    int a,b,c;
    if(i<=n)
    {
    printf("enter a no.1: ");
    scanf("%d",&a);
    printf("enter a no.2: ");
    scanf("%d",&b);
    c = a+b;
    printf("sum is : %d\n",c);
     return add(n,i);
    }
    else
    {
    printf("thanks for your input");
    }
 } 
