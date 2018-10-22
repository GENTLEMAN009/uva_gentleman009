#include<stdio.h>

int main()
{
    float Case, c, f, T;
    float d, g;

    scanf("%f", &T);

    for(Case=1; Case<=T; Case++)
    {
        scanf("%f%f", &c, &f);
        d = ((9*c)/5+32)+f;
        g = (5*(d-32))/9;
        printf("Case %.0f: %0.2f\n", Case, g);
        //return 0;
    }
}

