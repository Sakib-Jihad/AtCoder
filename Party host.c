#include<stdio.h>
int main (){
      int x;
      scanf("%d",&x);
      for ( int i=0;i<x;i++){
            int y,z;
            scanf("%d%d",&y,&z);
            if (y<=z){
                        printf("YES\n");
            } else printf("NO\n");

      } return 0;
}
