//
//  main.c
//  乱码生成器
//
//  Created by Zheng on 10/5/18.
//  Copyright © 2018 Monkey Coder Studio. All rights reserved.
//


#include<iostream>
#include<random>
#include <math.h>



int main(int argc, const char * argv[]) {
    char *luanma;
    int weishu;
    std::random_device rd;
    std::cout<<"请输入乱码位数:";
    std::cin>>weishu;
    luanma=new char[weishu];
    freopen("/Users/zheng/Desktop/a.txt","w",stdout);
    for(int i=0;i<weishu;i++)
    {
        int a;
        a=rd();
        if(a<0)
        {
            a=-a;
        }
        luanma[i]=(char)(a%26+65);
    }
    std::cout<<luanma<<std::endl;
    fclose(stdout);
    delete [] luanma;
    return 0;
}
