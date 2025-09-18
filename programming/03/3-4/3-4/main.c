//
//  main.c
//  3-4
//
//  Created by 한서윤 on 9/18/25.
//

#include <stdio.h>

int main(void) {
    int a,b;
    float result;
    
    printf("Enter two intergers: ");
    scanf("%d %d", &a, &b);
    
    result = (float)a / b;
    printf("%d / %d = %f\n", a, b, result);
    
    return 0;
}
