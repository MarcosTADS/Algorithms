#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void soma_linha(int mat[4][8])
{  
    int i, j, soma_linha = 0;

    printf("Linhas:\n");
    printf("-----------------------------------------------------------------------------------");
    for( i = 0; i < 4; i++)
    {
        for( j = 0; j < 8; j++)
        {
            soma_linha = soma_linha + mat[i][j];
           
        }
        
        if(soma_linha%2 == 0)
        {
            printf("\nA soma dos elementos da linha %d corresponde a um valor par igual a = %d \n",i , soma_linha);
        }
        else
        {
            printf("\nA soma dos elementos da linha %d corresponde a um valor impar igual a = %d \n",i , soma_linha);

        }
        soma_linha = 0;
    }
    printf("-----------------------------------------------------------------------------------");

};


void soma_coluna(int mat[4][8])
{
    int i;


    for(i = 0; i < 8; i++)
    {
       
    }
};




int main(int argc, char const *argv[])
{
    int MAT[4][8], i, j;




    for( i = 0; i < 4; i++)
    {
        for( j = 0; j < 8; j++)
        {
            MAT[i][j] = 1 + (rand()%30);




           // soma_linha = soma_linha + MAT[i][j];




            printf("%d \t", MAT[i][j]);




           /* if(j == 7)
            {
                if(soma_linha%2 == 0)
                {
                    printf("<-- A soma dos elementos dessa linha corresponde a um valor par igual a: %d \t", soma_linha);




                }




                soma_linha = 0;
            }*/
        }


        printf("\n");
    }


    soma_linha(MAT);


    return 0;
}
