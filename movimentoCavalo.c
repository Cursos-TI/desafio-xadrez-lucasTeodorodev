#include <stdio.h>

int main (){


char cavalo ='c';

for ( int i = 1; i <= 4; i++)
{
    for ( int j = 4; j <=4; j++)
    {
        printf("%c ",cavalo);
        printf("\n");
    }
    

}
int i = 1;
while (i <= 4) {
        int j = 4;
        while (j <= 4) {
            printf("%c ", cavalo);
            j++;
        }
        
        i++;
    }
  
}



