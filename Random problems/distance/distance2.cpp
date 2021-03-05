#include<stdio.h>
struct distance
{
    float inch;
    float feet;

}res,result,d1,d2;
typedef struct distance DIS;
DIS add(DIS d1,DIS d2)
{
   
    res.feet=(d1.feet)+ (d2.feet);
    res.inch=(d1.inch)+ (d2.inch);
    if((int)res.inch%12==0)
    {
        res.feet=res.feet+(float)((int)res.inch/12);
        res.inch=0;
    }
    
    return res;
}
int main()
{
   printf("Enter the first distance:\n");
   scanf("%f %f", &d1.feet, &d1.inch);
   printf("enter the second distance:\n");
   scanf("%f %f", &d2.feet, &d2.inch);
   
   result=add(d1,d2);
   printf( "%g.%g",result.feet,result.inch);  
}