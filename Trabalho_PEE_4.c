#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
char v1;
printf("Entre com o numero a ser exibido no display\n");
scanf("%c",&v1);

// v1    = 0000DCBA
// v1>>1 = 00000DCB
// v1>>2 = 000000DC

//Pelos mapas de Karnaugh:
// a = A + C + BD + (BD)*
// b = B* + (CD)* + CD
// c = B + C* + D
// d = A + CD*+B*C+(BD)* + BC*D
// e = CD*+(BD)*
// f = A + (CD)*+BC*+BD*
// g = A + BC* + CD*+B*C


char D=(v1&1);
char C=((v1>>1)&1);
char B=((v1>>2)&1);
char A=((v1>>3)&1);
char a = (C)||(A)||(B&&D)||((!B)&&(!D));
char b = ((!C)&&(!D))||(!B)||(C&&D);
char c = (D || B)||(!C);
char d = (A)||((!B)&&(!C))||(C&&(!B))||(C&&(!D))||((B&&(!C))&&D);
char e = ((!B)&&(!D))||((C)&&(!D));
char f = (A)||((!C)&&(!D))||(B&&(!C))||(B&&(!D));
char g=A||(C&&(!D))||(B&&(!C))||(B&&(!C));


printf("\n %d %d %d %d %d %d %d",a,b,c,d,e,f,g);

return 0;
}
