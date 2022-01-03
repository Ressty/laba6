#include <stdio.h>
#include <conio.h>

int main()
{       
    int arr[5];
    int *ad;
    ad = arr;
    
    for(int i = 0; i < 5; i++){
        //ad[i] = i; 
        //printf("arr[%d] = %d\n",i, arr[i]);
        printf("arr[%d] = %d  \n", i+1, i+1);
        //scanf("%d", ad+i);        
    }
    //arr=ad[3];
    int *parr;
    parr = ad+3;
    printf("%d  %d  \n", parr, ad+3);

    for(int i = 0; i < 5; i++){
        //ad[i] = i; 
        //printf("arr[%d] = %d\n",i, arr[i]);
        
        printf("arr[%d] = %d  \n", i+1, parr);
        //scanf("%d", ad+i);        
    }

}