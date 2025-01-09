#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int Aaaaaaa, Bbbbbbb, Ccccccc;
   printf("Enter Aaaaaaa:");
   scanf("%d", &Aaaaaaa);
   printf("Enter Bbbbbbb:");
   scanf("%d", &Bbbbbbb);
   printf("Enter Ccccccc:");
   scanf("%d", &Ccccccc);
   if ((Aaaaaaa > Bbbbbbb))
   {
   if ((Aaaaaaa > Ccccccc))
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", Ccccccc);
   goto Outofif;
Abigger:
   printf("%d\n", Aaaaaaa);
   goto Outofif;
   }
   }
   if ((Bbbbbbb < Ccccccc))
   {
   printf("%d\n", Ccccccc);
   }
   else
   {
   printf("%d\n", Bbbbbbb);
   }
Outofif:
   if (((Aaaaaaa == Bbbbbbb) && (Aaaaaaa == Ccccccc) && (Bbbbbbb == Ccccccc)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((Aaaaaaa < 0) || (Bbbbbbb < 0) || (Ccccccc < 0)))
   {
   printf("%d\n", -1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if ((!(Aaaaaaa < (Bbbbbbb + Ccccccc))))
   {
   printf("%d\n", (10));
   }
   else
   {
   printf("%d\n", (0));
   }
   system("pause");
    return 0;
}
