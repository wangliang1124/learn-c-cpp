//
//  statistics.c
//  playground
//
//  Created by 王亮 on 2020/3/20.
//  Copyright © 2020 王亮. All rights reserved.
//

#include <stdio.h>

#define LOCAL
#define INF 1000000000

void statistics()
{
    #ifdef LOCAL
    printf("重定向\n");
    FILE *fin, *fout;
    fin = fopen("data.in", "rb");
    fout = fopen("data.out", "wb");
    //    freopen("data.in", "r", stdin);
    //    freopen("data.out", "w+", stdout);

    
    #endif
    int x, n = 0, min = INF, max = -INF, s = 0;
    //    while (scanf("%d", &x) == 1)
    while (fscanf(fin, "%d", &x) == 1)
    {
        s += x;
        if(x < min) min = x;
        if(x > max) max = x;
        n++;
    }
    //    printf("%d %d %.3f\n", min, max, (double)s/n);
    fprintf(fout, "%d %d %.3f\n", min, max, (double)s/n);
    fclose(fin);
    fclose(fout);
    
}
