#include <stdio.h>
#include <stdbool.h>
 
bool upsort(const int* array, size_t n) {
    while (--n > 0) {
        if (array[n] < array[n - 1]) {
            return false;
        }
    }
    return true;
}
int index(const int* array, size_t N, int x){
    int flag = -1;
    while (--N > 0){
         for (int i = 0; i < N; i++){
             if (array[i] == x){
                flag = i;}            
        }
        return flag;
    }
}

int main() {
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int y[20] = {5, 4, 3, 2, 1, 6, 5, 7, 8, 23, 1, 89, 1, 2, 5, 12, 45, 2, 4, 10};
 
    printf("%s\n", upsort(x, 10) ? "true" : "false");
    printf("%s\n", upsort(y, 20) ? "true" : "false");

    printf("Enter the z\n");   
   int z = 7;
   //scanf("&d",&z);

   int i = index(x, 10, z);
   int ii =index(y, 20, z);
   printf("%d\n", i);
   printf("%d\n", ii);

 
    return 0;
}