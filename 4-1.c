#include <stdio.h>
#include <stdbool.h> 

int MAX(int* array, size_t m){

    int max = 0;
    int i;
    while (--m >= 0){
        for (i=1; i<m; i++)
            if (array[i] > array[max]) max = i;
        //printf("a[max] = a[%d] = %d\n", max+1, array[max]);
        return max;
    }
        
}
int MIN(int* array, size_t q){
    int min = array[0];
    int i;
    int o = 0;
    while (o++ <= q){
            for (i=1; i<q; i++){
                if (array[min] > array[i]) {
                min = array[i];
                }
                }
            //printf("a[max] = a[%d] = %d\n", max+1, array[max]);
        return min;
    }
        
}

int main(){

    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int y[20] = {5, 4, 3, 2, 1, 6, 5, 7, 8, 23, 1, 89, 1, 2, 5, 12, 45, 2, 4, 10};

    int mAx = MAX(x,10);
    int mAxX= MAX(y,20);
    printf("x[%d] is max \n", x[mAx]);
    printf("y[%d] is max \n", y[mAxX]);

    int minn = MIN(x,10);
    int miinn = MIN(y,20);
    printf("x[%d] is min \n", minn);
    printf("y[%d] is min \n", miinn);

    
    return 0;
}
 