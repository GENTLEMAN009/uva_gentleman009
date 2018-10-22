#include<stdio.h>

int main()
{
    int N, a[15], i, j, count, up, down;

    scanf("%d", &N);

    printf("Lumberjacks:\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<10; j++)
        {
            scanf("%d", &a[j]);
        }
        up = a[0];
        down = a[1];
        if(up>down)
        {
            count = 0;
            for(j=1; j<9; j++)
            {
                if(a[j]>a[j+1])
                {
                    //printf("n");
                    count++;
                }
            }
        }
        else if(up<down)
        {
            count = 0;
            for(j=1; j<9; j++)
            {
                if(a[j]<a[j+1])
                {
                    //printf("n");
                    count++;
                }
            }
        }
        if(count == 8)
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }

    }
}
