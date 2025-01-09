#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int Aaaaaaa;
   int Bbbbbbb;
   int Xxxxxxx;
   int Yyyyyyy;
   printf("Enter Aaaaaaa:");
   scanf("%d", &Aaaaaaa);
   printf("Enter Bbbbbbb:");
   scanf("%d", &Bbbbbbb);
   printf("%d\n", (Aaaaaaa + Bbbbbbb));
   printf("%d\n", (Aaaaaaa - Bbbbbbb));
   printf("%d\n", (Aaaaaaa * Bbbbbbb));
   printf("%d\n", (Aaaaaaa / Bbbbbbb));
   printf("%d\n", (Aaaaaaa % Bbbbbbb));
   Xxxxxxx = (((Aaaaaaa - Bbbbbbb) * 10) + ((Aaaaaaa + Bbbbbbb) / 10));
   Yyyyyyy = (Xxxxxxx + (Xxxxxxx % 10));
   printf("%d\n", Xxxxxxx);
   printf("%d\n", Yyyyyyy);
   system("pause");
    return 0;
}
