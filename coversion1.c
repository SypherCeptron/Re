#include<math.h>
#include<stdio.h>
int deci_bin(int);
int bin_deci(int);

int main()
{
    int a,c,x;
    printf("Enter the Number to be converted\n");
    scanf("%d",&a);
    printf("Enter the type of conversion\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:x=deci_bin(a);
               break;
        case 2:x=bin_deci(a);

    }
    printf("%d",x);
    return 0;
}

int deci_bin(int z)
{
    int s=0,i=0,j=0,x,y;
    x=sqrt(z*z);
    do
    {
        s=s*10+x%2;
        x=x/2;
        i++;

    }while(x!=0);
    x=s;

    if(z+(sqrt(z*z))==0){
                         x=s*10+1;
                         i++;
                         }
    s=0;

    while(j!=i)
    {
    s=s*10+x%10;
    x=x/10;
    j++;
    }

    return s;
}
int bin_deci(int x)
{
    int i=0,s=0;

    while(x!=0)
    {
    s=s+(x%10)*pow(2,i);
    x=x/10;
    i++;
    }
    return s;
}

