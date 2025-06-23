#include<stdio.h>
int main (){
      int n;
      scanf("%d",&n);

      for( int i=0; i<n;i++){
            int x,y;
            scanf("%d%d",&x,&y);
            if (x>y){
            int z=(x-y);
            printf("%d\n",z); }
            else {
                  int v=0;
                  printf("%d\n",v);
            } }
            return 0;
}
