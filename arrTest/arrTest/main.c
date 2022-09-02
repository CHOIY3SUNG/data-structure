//
//  main.c
//  arrTest
//
//  Created by Y3SUNG on 2022/09/02.
//

#include <stdio.h>

int main() {
    char c[3][20] = { "Hong Gil Dong", "Computer Department", "Seoul Korea" };
    int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
    
    for(int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 19; j++) {
            printf("%c", c[i][j]);
        }
        printf("\n");
    }
    
    printf("---------------------- \n");
    
    for(int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
