#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d%d%f%f",&a,&b,&c,&d);
    float e=c+d;
    float f=c-d;
    
    printf("%d %d\n",a+b,a-b);
    printf("%f %f\n",((float )((int)(e * 10))) / 10,((float )((int)(f * 10))) / 10);
    
    return 0;
}

