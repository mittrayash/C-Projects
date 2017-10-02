#include <stdio.h>
#include <stdlib.h>

int main()
{

   int rows;
   int columns;
   for (rows=1; rows<=5; rows++){  // THE ROWS ALWAYS COME FIRST. AND THE COLUMNS ARE NESTED UNDER THE "FOR" OF THE ROWS!!!//
    for(columns=1; columns<=6; columns++){
    printf("%d \t", columns);
    }
    printf("\n");
   }

    return 0;
}
