//
//  3n+1.c
//  playground
//
//  Created by 王亮 on 2020/3/20.
//  Copyright © 2020 王亮. All rights reserved.
//

#include <stdio.h>
#include "basic.h"

void triple_n_plus_1()
{
    long long n = 0;
    int count = 0;
    printf("输入一个自然数：");
    scanf("%lld", &n);
    printf("自然数：%lld\n", n);
    while(n > 1){
        if(n % 2 == 1)
        {
            n = 3 * n + 1;
        } else {
            n = n / 2;
        }
        printf("n=%lld\n", n);
        count++;
    }
    printf("count: %d\n", count);
}
