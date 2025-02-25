#include <stdio.h>


int main() {
    
    int list[] = {1, 2, 3, 4, 6, 32000000};

    int num = sizeof(list)/sizeof(list[0]);

    printf("%d \n", num);

    
    for (int i = 0; i < num; i++) {

        printf("%d \n", list[i]);

    }

    int i = 0;

    while (i < num) {
        printf("%d \n", list[i]);
        i++;
    }

    int j = 0;


    do {
        printf("Do %d \n", list[j]);
        j++;
    }
    while (j < num );
   
    

    return 0;
}