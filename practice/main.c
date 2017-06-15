//
//  main.c
//  practice
//
//  Created by 20161104593 on 17/6/12.
//  Copyright © 2017年 20161104593. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fr;
    FILE *fw;
    fr=fopen("//Users//a20161104593//Desktop//practice//input.txt","r");
    fw=fopen("//Users//a20161104593//Desktop//practice//output.txt","w");
    int i,j,n;
    int temp;
    int a[10];
    
    printf("文件读取数字轻按1\n");
    printf("程序输入数字轻按2\n");
    scanf("%d",&n);
    if(n==1)
    {
        for(i=0;i<=9;i++)
            {
                fscanf(fr,"%d\n",&a[i]);
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
            fprintf(fw,"%d\n",a[i]);
        }
        fclose(fr);
        fclose(fw);
    }
    if(n==2)
    {
        printf("请输入10个数字");
        for(i=0;i<=9;i++)
        {
            scanf("%d",&a[i]);
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
            fprintf(fw,"%d\n",a[i]);
        }
        fclose(fr);
        fclose(fw);
    }
    return 0;
}
