#include<stdio.h>
int main (){
      int x;
      scanf("%d",&x);

      //for ( int i=0;i<x;i++) {
      while (x--){
            int y;
            scanf("%d",&y);
            if(1900<=y) {
                  printf("Division 1\n");
            } else if(1600<=y && y<=1899){
                  printf("Division 2\n");
            }  else if (1400<=y && y<=1599){
                  printf("Division 3\n");
            }  else if (y<=1399) {
                  printf("Division 4\n");
            }
      } return 0;
}
