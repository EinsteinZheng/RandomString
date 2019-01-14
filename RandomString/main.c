//
//  main.c
//  乱码生成器
//
//  Created by Zheng on 10/5/18.
//  Copyright © 2018 Monkey Coder Studio. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>



int main(int argc, const char * argv[]) {
    char *luanma;
    int weishu;
    int fd=open("/dev/urandom",O_RDONLY);
    printf("请输入乱码位数:");
    scanf("%d",&weishu);
    luanma=(char*)malloc(weishu*sizeof(char)); 
    for(int i=0;i<weishu;i++)
    {
        int a;
        read(fd,&a,sizeof(char));
        luanma[i]=(char)(a%26+0x41);
    }
       
    printf("%s\n",luanma);
    //fclose(stdout);
    free(luanma);
    return 0;
}
