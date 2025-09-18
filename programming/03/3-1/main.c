//
//  main.c
//  3-1
//
//  Created by 한서윤 on 9/18/25.
//

#include <stdio.h>

int main(void) {
    int input_int;
    float input_float;
    
    printf("enter an interger : ");
    scanf("%d", &input_int);
    
    printf("enter a float : ");
    scanf("%f", &input_float);
    
    printf("interger : %d, float : %f\n", input_int, input_float);
    
    return 0;
}
