//
//  chicken_and_rabbit.c
//  playground
//
//  Created by 王亮 on 2020/3/20.
//  Copyright © 2020 王亮. All rights reserved.
//

#include <stdio.h>
#include "basic.h"

int chicken() {
    int a, b, m, n;

    printf("Input: ");
    scanf("%d%d", &n, &m);
    a = (4*n - m) / 2;
    b = n - a;

    if(m % 2 == 1 || a < 0 || b < 0)
        printf("No answer \n");
    else
        printf("%d %d\n", a, b);

    return 0;
}
