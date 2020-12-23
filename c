    #include <stdio.h>
    #include <stdlib.h>

    void insertion_sort(char *array,int n)
    {
        char temp,current,small;
        int i,j;
         current=array[0];

        for(i=1;i<n;i++)
        {
            if(current > array[i])
            {
                small=array[i];
                for(j=i-1;j>=0;j--)
                {
                    if(small < array[j])
                    {
                        temp=array[j];
                        array[j]=small;
                        array[j+1]=temp;
                    }

                }
            }
            else
                current=array[i];

        }


    }


    int main()
    {
        int size;

        scanf("%d\n",&size);

        char array[10000];

        gets(array);

        insertion_sort(&array,size);


        return 0;
    }
