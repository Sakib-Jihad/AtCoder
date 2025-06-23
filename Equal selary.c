#include<stdio.h>

int main (){
      int n;
      scanf("%d",&n);

      for( int i=0; i<n;i++){
            int x,y;
            scanf("%d%d",&x,&y);
            int z= (y-x);
            printf("%d\n",z);
      } return 0;
}
