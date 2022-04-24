#include <stdio.h>

/*
 *
 *fonction longeur retourne la longeur des nombres
 */

int longueur(int nombre)
{
      int reste,taille,base;
    if (nombre<0)
    nombre=-nombre;
    base=10;
    reste=nombre-base;
    taille=1;
    while(reste>=0){
        base=10*base;
        reste=nombre-base;
        taille=taille+1;
         }
     return taille;
};

void print_number(int n)
{
    int N,base;
    N=1;
    base=1;
    while(N<longueur(n))  {
      base=base*10; 
      N++;
    }
    
    if(n<0)
    {putchar('-');
        n=-n;
    }
    while(base>=1)  {
        putchar('0'+n/base);
        n=n%base;
        base=base/10;
    }
  
    
    
    
};

int main()
{
  
    printf("  Hello World %d   ",longueur(100));
          print_number(-98);
    return 0;
}
