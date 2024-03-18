#include <stdio.h>

float media(int n1, int n2, int n3, int n4)
{
    return (n1 + n2 + n3 + n4)/4.0;
}

int maiorQueMedia(int n1, int n2, int n3, int n4, float media)
{
    if(n1 > media)
    {
        printf("%d",n1);
    }
     if(n2 > media)
    {
        printf("\n%d",n2);
    }
     if(n3 > media)
    {
        printf("\n%d",n3);
    }
     if(n4 > media)
    {
        printf("\n%d",n4);
    }

    return 1;
}

int main()
{
    int n1, n2, n3, n4;

    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    printf("%.1f", media(n1, n2, n3, n4));

    maiorQueMedia(n1, n2, n3, n4, media(n1, n2, n3, n4));

    return 0;
}

