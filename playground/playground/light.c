//
//  light.c
//  playground
//
//  Created by 王亮 on 2020/3/24.
//  Copyright © 2020 王亮. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "basic.h"

#define max 1010

int a[max];

void light()
{
    int n, k, first = 1;
    memset(a, 0, sizeof(a));
    printf("输入n,k:");
    scanf("%d%d", &n, &k);
    
    for(int i = 1; i <=k; i++){
        for(int j = 1; j <=n; j++){
            if(j % i == 0) a[j] = !a[j];
        }
    }
    
    for (int i = 1; i <= n; i++) {
        if(a[i]) {
            if(first){
                first = 0;
            }else{
                printf(" ");
            }
            printf("%d %d", i, a[i]);
        }else{
//            printf("a[%i]=%d\n", i, a[i]);
        }
    }
    printf("\n");
}
