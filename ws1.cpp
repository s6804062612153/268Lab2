#include <stdio.h>

int main() {
    int x1,x2,x3,x4,Amax,max1,max2,max3,Smax;
    scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
    max1 = ((x1>x2)? x2:x1);
    Amax = ((x1>x2)? x1:x2);
    max2 = ((Amax>x3)? x3:Amax);
    Amax = ((Amax>x3)? Amax:x3);
    max3 =((Amax>x4)? x4:Amax);
    Amax = ((Amax>x4)? Amax:x4);
    Smax = ((max1>max2)? max1:max2);
    Smax = ((Smax>max3)? Smax:max3);
    printf("%d",Smax);
}