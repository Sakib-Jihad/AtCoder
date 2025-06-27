#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
      int x,y,z;
      scanf("%d%d%d",&x,&y,&z);
      int a=(x*y);
      int s=((z*100)/a);
      if(s>50)printf("YES\n");
      else printf("NO\n");
    } return 0;
}
