#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    
    while(Testcases--)
    {
        int a,b,c,d; //declaration of variables //sides of rectangle
        scanf("%d %d %d %d",&a,&b,&c,&d);
        fflush(stdin);
        
        if(a==b && c==d || a==c && b==d || a==d && c==b)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
//code by bhumika nayak