//
//  main.c
//  PointersDrill
//
//  Created by Josh Endter on 6/10/15.
//  Copyright (c) 2015 Josh Endter. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a = 13;
    int b = 5;
    int c = 10;
    
    int *pointer1 = &a;
    int *pointer2 = &b;
    int *pointer3 = &c;
    int *pointer4 = &c;
    
    *pointer1 = *pointer1 * 2;
    
    *pointer3 = ++*pointer3;
    
    pointer4 = pointer2;
    
    *pointer4 = *pointer4 + 4;
    
    printf("Value of a: %d \nValue of b: %d \nValue of c: %d", a, b, c);
    
    return 0;
}
