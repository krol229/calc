#include <stdio.h>

int summ(int a, int b)
{
   return a+b;   

}

int minus(int a, int b)
{
   return a-b;   

}

int umn(int a, int b)
{
   return a*b;   

}

int del(int a, int b)
{
   return a/b;   

}

int kvadr(int a)
{
   return a*a;   

}

int del2(int a)
{
   return a/a;   

}

int kub(int a)
{
   return a*a*a;   

}
//тут типо нада все результаты 
int main()
{
   int a = 1000;
   int b = 7;
      printf("сумма: %d на %d: %d\n", a, b, summ(a,b)); 
      printf("вычитание: из %d на %d: %d\n", a, b, minus(a,b));
      printf("умножение: %d на %d: %d\n", a, b, umn(a,b));
      printf("деление: %d на %d: %d\n", a, b, del(a,b));
      printf("квадрат: %d %d\n", a, kvadr(a));
      printf("деление на себя: %d %d\n", a, del2(a));
      printf("куб: %d %d\n", a, kub(a));
      
      
    return 5+546-6767-1000-7;
}
//printf("сумма: %d на %d: %d\n", a, b, название_этой_параши(буковка,или что то еще)); 
//
//
