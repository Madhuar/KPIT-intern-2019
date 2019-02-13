/*--------C programming-----
FILENAME     : sorting_using_pointers.c
DESCRIPTION  : C program to sort an array in ascending order using the concept of dynamic memory allocation
CREATED BY   : Madhu AR
EMPLOYEE ID  : 213383
-----------------------*/


/*----INCLUSION OF LIBRARY FILES-----*/
#include <stdio.h>
#include <stdlib.h>

/*---PUBLIC FUNCTION DECLARATION-----*/
void sort(int*);

/*----FUNCTION DEFINITION--------*/
void sort(int *localptr)
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

/*------MAIN FUNCTION()---------------*/
/*------EXECUTION STARTS FROM HERE----*/
int main()
{
    int *ptr=malloc(10*sizeof(int)); //allocate memory for an array of 10 integers
    int i;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",(ptr+i)); //adding the values into heap array
    }
    sort(ptr); //FUNCTION CALL
    printf("SORTED ARRAY IS GIVEN BY\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",*(ptr+i)); //prints the sorted array
    }
    return 0;
}

/*-----END OF FILE------*/
