#include <stdio.h>


int main()
{
  unsigned int a,b,c ;
  scanf("%d%d%d",&a,&b,&c);

  if(a+b>c && c+b>a && a+c>b)
  {
      if((a*a + b*b == c*c) || (b*b + c*c == a*a) ||  (c*c + a*a == b*b))
                  printf("YES");
      else
            printf("NO");
  }

  else
    printf("NO");


}

