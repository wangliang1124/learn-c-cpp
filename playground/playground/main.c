//
//  main.c
//  playground
//
//  Created by 王亮 on 2020/2/28.
//  Copyright © 2020 王亮. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    printf("Hello, World!\n");
    printf("%d\n", 111111*111111); // overflow
    printf("%f\n", 111111.0*111111);
    printf("%f\n",sqrt(-10)); // nan
    printf("%f\n", 1.0/0); // inf
    printf("%f\n", 0.0/0); // nan
    int res = 1/0;
    printf("%d\n", res); // nan
    
    // input
    
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d %d\n", a, b);
    printf("==== max int === \n");
    printf("%d\n", (2 << 30) - 1);
    
    
    return 0;
}
