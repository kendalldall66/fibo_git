#include <stdlib.h> //包含了一些标准库函数，比如 atoi 和 EXIT_SUCCESS
#include <stdio.h>   //包含了标准输入输出函数，比如 printf 和 fprintf
#include "fibo.h"  //"fibo.h" 是一个自定义头文件包含了 fibo 函数的声明

//argc 是命令行参数的数量
//argv 是一个包含参数字符串的数组。
int main(int argc, char *argv[])
{
  long val;
  int n;
  if(argc <2){     //检查命令行参数数量
    fprintf(stderr,"missing index.\n");
    return -1;
  }
  n=atoi(argv[1]); //使用 atoi 函数将字符串形式的数字转换为整数，
                   //并赋值给变量 n
  val=fibo(n);
  printf("Fibo (%d) is %ld\n",n,val);
  return EXIT_SUCCESS;
}

