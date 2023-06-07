//
//  main.c
//  count
//
//  Created by HiLau on 2023/6/7.
//

// 输入一位不多于五位数的正整数，1：输出这是几位数 2：逆序输出

#include <stdio.h>

int  Count(int n)
{
    int count = 0;
    if(n<10)
    {
        count = 1;
    }
    else if (n<100)
    {
        count = 2;
    }
    else if (n<1000)
    {
        count = 3;
    }
    else if (n<10000)
    {
        count = 4;
    }
    else
    {
        count = 5;
    }
    return count;
}
int main()
{
    int num = 0;
    int ret = 0;
    printf("请输入一个不多于五位数的正整数：");
    scanf("%d",&num);
    ret = Count(num);
    printf("这是一个%d位数\n",ret);
    printf("逆序打印:");
    while(num>0)
    {
        printf("%d",num%10);
        num /= 10;
    }
    printf("\n");
    return 0;
}
