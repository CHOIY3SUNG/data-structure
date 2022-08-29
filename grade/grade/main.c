//
//  main.c
//  grade
//
//  Created by Y3SUNG on 2022/08/29.
//

#include <stdio.h>

int main() {
    int total[3] = {91, 86, 97};
    char grade[3] = {'A', 'B', 'A'};
    
    for(int i = 0; i < 3; i++)
        printf("%d학년 : 총점 = %d, 등급 = %c \n", i+1, total[i], grade[i]);
    
    return 0;
}
