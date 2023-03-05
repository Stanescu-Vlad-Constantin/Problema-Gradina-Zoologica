#include "stdio.h"
#include "string.h"

struct animal
{
    char nume[30];
    char specie[30];
    int varsta;
};

int main()
{
    int n,i,nr=-1;
    char yo[10];
    char ham[20];
    scanf("%d",&n);
    struct animal a[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i].nume);
        scanf("%s",a[i].specie);
        scanf("%d",&a[i].varsta);
    }
    scanf("%s",yo);
    scanf("%s",ham);
    for(i=0;i<n;i++)
    {
        if(strcmp(a[i].specie,ham)==0)
            nr=i;
    }
    if(nr==-1)
        return 0;
    int min=100,max=0,minp,maxp;
    for(i=0;i<n;i++)
    {
        if(strcmp(ham,a[i].specie)==0)
        {
            if(a[i].varsta>=max)
            {
                max=a[i].varsta;
                maxp=i;
            }
            if(a[i].varsta<=min)
            {
                min=a[i].varsta;
                minp=i;
            }
        }
    }
    if(strcmp(yo,"youngest")==0)
        printf("%s",a[minp].nume);
    else
        printf("%s",a[maxp].nume);
    return 0;
        
    
}
