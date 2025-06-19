#include <stdio.h>
int main (){
      long long  x,y;
      scanf("%lld%lld",&x,&y);

      long long z=(x+y-1)/y;
      printf("%lld",z);
      return 0;
}
