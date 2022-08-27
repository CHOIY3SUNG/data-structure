//
//  main.c
//  fortest
//
//  Created by Y3SUNG on 2022/08/26.
//

#include <stdio.h>

int main() {
    int sum = 0;
    
    for(int i = 0; i <= 100; i++){
        if(i % 2 == 0) {
            sum += i;
        }
    }
    printf("짝수의 총합 : %d\n", sum);
    
    return 0;
}
