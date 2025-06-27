#include<stdio.h>
int main (){
      int t;
      scanf("%d",&t);
      while(t--){
            int x,y,z;
            scanf("%d%d%d",&x,&y,&z);
            int a=(z*24);
            int s=((x*y)/60);
            if(s<=a){ printf("YES\n");}
            else { printf("NO\n");}
      } return 0;
}
