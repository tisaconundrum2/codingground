#include <stdio.h>

int main(){
    int numbers[2][7] = {{9,7,8},{6,4,5,4,3,2,1}};
    int (*num_ptr)[3] = numbers;
    // printf("This section will look at the first part of the matrix");
    // printf("values is: %d\n", *(*(num_ptr)));
    // printf("values is: %d\n", *(*(num_ptr))+1);
    // printf("values is: %d\n", *(*(num_ptr))+2);
    // printf("This section will look at the second part of the matrix");
    // printf("values is: %d\n", *(*(num_ptr+1)));
    // printf("values is: %d\n", *(*(num_ptr+1))+0);
    // printf("values is: %d\n", *(*(num_ptr+1))+1);
    
    // trying all combinations below
    int i;
    int j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 10; j++){
            printf("values is: %d with values,(%d,%d)\n", *(*(num_ptr+i)+j), i, j);
        }
    }
}
