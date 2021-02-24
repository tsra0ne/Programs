#include<stdio.h>
#include<stdlib.h>

int main()
{

    int n, s, i, j, pgh, c = 0;
    printf("Enter The No Of Pages : ");
    scanf("%d", &n);
    int pages[n];

    printf("Enter The Pages : \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &pages[i]);
    }

    printf("Enter The No Of Page Frames : ");
    scanf("%d", &s);
    int stack[s];

    for(j = 0; j < s; j++)
    {
        stack[j] = pages[j];
        printf("%d\n", stack[j]);
    }
    int pgflt = s;
    for(i = 0; i < n ; i++)
    {
        pgh = 0;
        for(j = 0; j < s; j++)
        {
            if(stack[j] == pages[i])
            {
                pgh = 1;
            }
        }

        if(pgh == 0)
        {
            stack[c] = pages[i];
            c = (c + 1) % s;
            pgflt++;
        }
    }
    printf("The Number Of Page Faults Are : %d", pgflt);
}