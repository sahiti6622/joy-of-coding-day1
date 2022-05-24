#include<stdio.h>
#include<string.h>
int main()
{
    char sen[500];
    scanf("%[^\n]",sen);
    printf("%s ",sen);
    char v[50],co[50];
    int top=-1,top2=-1,f=0,f1=0;
    for(int i=0;sen[i]!='\0';i++)
    {
        char c=sen[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            v[++top]=c;
        }
        else
            co[++top2]=c;
            
            v[++top]='\0';
            co[++top2]='\0';
        
    }
    while(f<=top)
    {
        printf("%c",v[f]);
        f++;
    }
    printf("\n");
     while(f1<=top2)
    {
        printf("%c",co[f1]);
        f1++;
    }
    
    return 0;
}


