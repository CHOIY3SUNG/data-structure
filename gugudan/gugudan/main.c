//
//  main.c
//  gugudan
//
//  Created by Y3SUNG on 2022/08/29.
//

#include <stdio.h>

void gugu(int n) {
    for(int i = 1; i < 10; i++) {
        printf("%d * %d = %d \n", n, i, n*i);
    }
}

int main() {
    int n = 0;
    printf("출력하는 단을 입력하세요 : ");
    scanf("%d", &n);
    gugu(n);
    
    return 0;
}
