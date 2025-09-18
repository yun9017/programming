//
//  main.c
//  3-3
//
//  Created by 한서윤 on 9/18/25.
//

#include <stdio.h>

int main(void) {
    char ch;
    printf("enter a charcter: ");
    scanf("%c", &ch);
    
    printf("the next charater of %c (%i) is %c (%i)\n", ch, ch, ch+1, ch+1);
    
    return 0;
}
