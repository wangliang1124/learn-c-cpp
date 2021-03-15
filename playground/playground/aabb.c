//
//  aabb.c
//  playground
//
//  Created by 王亮 on 2020/3/20.
//  Copyright © 2020 王亮. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include "basic.h"

void aabb()
{
    for(int a=0;a<=9;a++)
    {
        for(int b=0;b<=9;b++)
        {
            int n = a * 1100 + b * 11;
            int m = floor(sqrt(n) + 0.5);
            if(m*m == n) printf("%d %d\n", n, m);
        }
    }
}
