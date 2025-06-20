#include<stdio.h>
#include <stdbool.h>
int main (){
      char x1,x2,extra,y1,y2;
      scanf("%c%c%c%c%c",&x1,&x2,&extra,&y1,&y2);
      bool xside = false , yside = false;
      if ((int)(x1-x2)==1 || (int)(x1-x2)== -1||(int)(x1-x2)==4||(int)(x1-x2)== -4){
            xside=true;
      }
      if ((int)(y1-y2)==1 || (int)(y1-y2)== -1||(int)(y1-y2)==4||(int)(y1-y2)== -4){
            yside=true;
      }
      if((xside==true && yside==true) || (xside==false && yside==false)){
            printf("Yes\n");
      }
      else printf("No\n");
      return 0;
}
