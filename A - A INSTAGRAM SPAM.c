#include<stdio.h>
int main (){
      int a;
      scanf("%d",&a);
      for(int i=0; i<a; i++){
      int x,y;
      scanf("%d%d",&x,&y);
      if (x > (10 * y)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

      } return 0;
}
























