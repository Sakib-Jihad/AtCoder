#include<stdio.h>
int main (){
      int x;
      scanf("%d",&x);
      for ( int i=0;i<x;i++){
                  int y;
      scanf("%d",&y);
            if(y%3==0){
                  printf("YES\n");
            } else printf("NO\n");
      } return 0;
}
