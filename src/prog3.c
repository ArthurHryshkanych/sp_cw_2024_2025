#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int Aaaaaaa, Aaaaaa2, Bbbbbbb, Xxxxxxx, Cccccc1, Cccccc2;
   printf("Enter Aaaaaaa:");
   scanf("%d", &Aaaaaaa);
   printf("Enter Bbbbbbb:");
   scanf("%d", &Bbbbbbb);
   for (int Aaaaaa2 = Aaaaaaa; Aaaaaa2 <= Bbbbbbb; Aaaaaa2++)
   printf("%d\n", Aaaaaa2 * Aaaaaa2);
   for (int Aaaaaa2 = Bbbbbbb; Aaaaaa2 >= Aaaaaaa; Aaaaaa2--)
   printf("%d\n", Aaaaaa2 * Aaaaaa2);
   Xxxxxxx = 0;
   Cccccc1 = 0;
   while (Cccccc1 < Aaaaaaa)
   {
   {
   Cccccc2 = 0;
   while (Cccccc2 < Bbbbbbb)
   {
   {
   Xxxxxxx = Xxxxxxx + 1;
   Cccccc2 = Cccccc2 + 1;
   }
   }
   Cccccc1 = Cccccc1 + 1;
   }
   }
   printf("%d\n", Xxxxxxx);
   Xxxxxxx = 0;
   Cccccc1 = 1;
   do
   {
   Cccccc2 = 1;
   do
   {
   Xxxxxxx = Xxxxxxx + 1;
   Cccccc2 = Cccccc2 + 1;
   }
   while (!(Cccccc2 > Bbbbbbb));
   Cccccc1 = Cccccc1 + 1;
   }
   while (!(Cccccc1 > Aaaaaaa));
   printf("%d\n", Xxxxxxx);
   system("pause");
    return 0;
}
