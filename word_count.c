#include<stdio.h>
#include<string.h>

int main()
{
    char a[10000];
    int i,l,c=0,flag=0;
    
    while(gets(a))
    {
        l = strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z') 
            {
                flag=1;
            }
            else
            {
                c += flag;
                flag=0;
            }
        }
        c+= flag;
        printf("%d\n",c);
        c=0;
    }
    return 0;
}