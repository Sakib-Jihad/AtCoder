#include <stdio.h>
#include <math.h>
int main(){
      int a,b;
      scanf("%d%d",&a,&b);
      int z = pow(a, b)+pow(b, a);
      printf("%d\n",z);
      return 0;
}
