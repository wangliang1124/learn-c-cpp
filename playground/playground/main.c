//
//  main.c
//  playground
//
//  Created by 王亮 on 2020/2/28.
//  Copyright © 2020 王亮. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include "basic.h"

int main(int argc, const char * argv[]) {
    printf("Hello, World!\n");
    printf("%d\n", 111111*111111); // overflow
    printf("%f\n", 111111.0*111111);
    printf("%f\n",sqrt(-10)); // nan
    printf("%f\n", 1.0/0); // inf
    printf("%f\n", 0.0/0); // nan
    int res = 1/0;
    printf("%d\n", res); // nan
    
    //    int a, b;
    //    scanf("%d%d", &a, &b);
    //    printf("%d %d\n", a, b);
    //    printf("==== max int === \n");
    //    printf("%d\n", (2 << 30) - 1);
    
    
    //    chicken();
    //    aabb();
    //    triple_n_plus_1();
    //    factorial();
    //    statistics();
    //    light();
    int array[3][5] = {0};//定义一个二维数组（3行5列）
    
    int temp = 0;//设定一个临时的整型变量，用来给数组赋值
    
    for (int a = 0 ; a < 3; a++)//外层循环给数组的第一维赋值，就是array[x][y]的x
        
    {
        
        for (int b = 0 ; b < 5; b++)//内层循环给数组的第二维赋值，就是array[x][y]的y
            
        {
            temp = temp + 1;//为了让数组的数值不同，让临时变量有自增
            
            array[a][b] = temp;//二维数组的真正数据
            
            printf("array[%d][%d] = %d\t",a,b,array[a][b]);//打印出数组
            
        }
        printf("\n");//输出一行后换行
        
    }
    return 0;
}
