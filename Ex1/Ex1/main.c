//
//  main.c
//  Ex1
//
//  Created by Y3SUNG on 2022/08/26.
//

#include <stdio.h>

int main() {
    int kor;
    int eng;
    int math;
    int total;
    int avg;
    
    printf("kor 점수를 입력하세요 : ");
    scanf("%d", &kor);
    printf("eng 점수를 입력하세요 : ");
    scanf("%d", &eng);
    printf("math 점수를 입력하세요 : ");
    scanf("%d", &math);
    
    total = kor + eng + math;
    avg = total / 3;
    
    printf("총점 : %d\n", total);
    printf("평균 : %d\n", avg);
    
    
    return 0;
}
