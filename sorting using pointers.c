#include <stdio.h>
#include <stdlib.h>
void sort(int *localptr) //ASCENDING order
{
    int i,j,t;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if((*(localptr+i)) > (*(localptr+j)))
            {
                t= *(localptr+i);
                *(localptr+i)= *(localptr+j);
                *(localptr+j)=t;
            }
        }
    }
}
int main()
{
    printf("Hello world!\n");
    int *ptr=malloc(10*sizeof(int));
    int i;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",(ptr+i));
    }
    sort(ptr);
    printf("SORTED ARRAY IS GIVEN BY\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}
