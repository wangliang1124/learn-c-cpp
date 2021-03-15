//
//  factorial.c
//  playground
//
//  Created by 王亮 on 2020/3/20.
//  Copyright © 2020 王亮. All rights reserved.
//

#include <stdio.h>
#include <time.h>

void factorial()
{
    const int MOD = 1000000;
    int n, s = 0;
    printf("输入一个自然数：");
    scanf("%d", &n);
    for(int i = 1; i <=n; i++)
    {
        int factorial = 1;
        for(int j = 1; j <= i; j++)
        {
            factorial = (factorial * j) % MOD;
        }
        s = (s + factorial) % MOD;
    }
    printf("%d\n", s);
    printf("Time used = %.2f\n", (double)clock() / CLOCKS_PER_SEC);
}
