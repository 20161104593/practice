//
//  main.c
//  practice
//
//  Created by 20161104593 on 17/6/12.
//  Copyright © 2017年 20161104593. All rights reserved.
//

#include <stdio.h>

int main()
{
    FILE *fr;
    FILE *fw;
    fr=fopen("//Users//a20161104593//Desktop//practice//input.txt","w");
    fw=fopen("//Users//a20161104593//Desktop//practice//output.txt","w");
    int i,j;
    int temp;
    int a[10];
    printf("请输入10个数字\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        fprintf(fr,"%d\n",a[i]);
    }
    for(j=1;j<=9;j++)
    {
        for(i=0;i<=9-j;i++)
        {
            if(a[i]>a[i+1])
            {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
            }
        }
    }
    for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
        fprintf(fw,"%d\n",a[i]);
    }
    return 0;
}
