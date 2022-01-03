#include <stdio.h>
#include <conio.h>

int main()
{   
    
    double arrDbl[] = {1.4,5.12, 56.9, 7.89, 1.0, 8.4};
    int a;
    a = sizeof(arrDbl)/sizeof(double);
    printf("%d\n\n",a);
    for(int i = 0; i < a; i++){
        printf("arrDbl[%d] = %lf\n",i, arrDbl[i]);
    }
}