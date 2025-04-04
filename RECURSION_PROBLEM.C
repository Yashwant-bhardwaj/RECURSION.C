// coding problems using recursion 
// daily atleast 1 or 2 basic problem solve using recursion by own 

// 1 april 
// product of two numbers using recursion 
#include<stdio.h>
int product(int x,int y)
{
    if(y==0)
     return 0;
    return (x+product(x,y-1));
}
int main()
{
    int p,q;
    printf("enter the two number to find the product : ");
    scanf("%d%d",&p,&q);
    printf("product of %d and %d is %d",p,q,product(p,q));
}


// tower of hanoi problem using recursion 2 april 

#include<stdio.h>
void toh(int n,char source,char destination ,char auxiliary)
{
    if(n==1)
    {
        printf("%c -->%c",source,destination);
        return;
    }
    else
    {
        toh(n-1,source,auxiliary,destination);
        printf("\n%c -->%c\n",source,destination);
        toh(n-1,auxiliary,destination,source);
    }
}
int main()
{
    int n;
    printf("enter the number of disk : ");
    scanf("%d",&n);
    toh(n,'A','B','C');
}
    


// 3 april 
// wap for the find the factorial of a number using recursion

#include<stdio.h>
int factorial(long long unsigned int n)
{
    // base condition for recursion 
    if(n==0 || n==1) 
    {
        return 1;
    }
    else{
        return (n*factorial(n-1));
    }
}
int main()
{
    long long unsigned int n;
    printf("enter the number to find the factorial : ");
    scanf("%llu",&n);
    printf("factorial of %llu is %llu",n,factorial(n));
}
    

// summation of n numbers using the recursion 

#include<stdio.h>
long long unsigned int summation(int n)
{
    // base condition for recursion
    if(n==1 || n==0)
    {
        return n;
    }
    else{
        return n+summation(n-1);
    }
}
int main()
{
    long long unsigned int n;
    printf("enter the number :  ");
    scanf("%llu",&n);
    printf("summation of %llu numbers is %llu",n,summation(n));
}
// 4 APRIL 

*SUM OF ALL DIGITS OF AN INTEGERS 

#include<stdio.h>
long long int sum_of_digits(long long int n)
{
    // base case for the recursion 
    if(n==1 || n==2 || n==3||n==4||n==5||n==6||n==7||n==8||n==9||n==-1||n==-2||n==-3||n==-4||n==-5||n==-6||n==-7||n==-8||n==-9)
        return n;
    else
    {
        // if n is large 
        return (n%10)+sum_of_digits(n/10);

    }
}
    int main()
    {
       long long  int x;
        printf("enter the number: ");
        scanf("%lld",&x);
        printf("sum of digits of %lld is %lld",x,sum_of_digits(x));
    }
