#include <stdio.h>

int array[5] = {3,1,7,23,2};

void insertion_sort(int array[],int n)
{
        int i,j,key;




        for(j = 1; j < n ; j ++)
        {
                key = array[j];
                i = j - 1;
        //      printf("debug.operate() - Key : %d\n",key);


                while(i != -1 && array[i] >key) // while j -1 not -1,and while array[i]
                                                //bigget than the key.whose next element on array.
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
        print_array(array,5);

        insertion_sort(array,5);

        printf("Array after sorting: \n");

        print_array(array,5);



        return (0);
}