#include <stdio.h>
#define SIZE 10
int array[SIZE] = {3,1,7,23,2,43,22,4,11,8};

void insertion_sort(int array[],int n)
{
        int i,j,key;

        for(j = 1; j < n ; j ++)
        {
                key = array[j];
                i = j - 1;
                while(i != -1 && array[i] >key) // while j -1 not -1,and while array[i] bigget than the key
                {
                        array[i + 1] = array[i];
                        i = i - 1;
                }
                array[i+1] = key;
        }
}

void print_array(int array[],int n)
{
        int i;
        for(i = 0; i < n; i++)
                printf("%d ",array[i]);
        printf("\n");
}

int main(int argc,char *argv[])
{
        printf("Array before sorting: \n");
        print_array(array,SIZE);
        insertion_sort(array,SIZE);
        printf("Array after sorting: \n");
        print_array(array,SIZE);
        return (0);
}
