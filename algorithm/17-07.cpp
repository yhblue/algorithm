#include<stdio.h>
#include<malloc.h>
#include<iostream>

int main(void)
{
  unsigned int arr_num = 0; //数组多少个元素
  int mod_times = 0;        //修改的次数     
  int tmp = 0;             //临时存储数组中元素
  int *array = NULL;

  scanf("%d",&arr_num);
  printf("arr_num = %d\n",arr_num);
  scanf("%d",&mod_times);
  printf("mod_times = %d\n",mod_times);

  
  array = (int*)malloc(sizeof(int)*arr_num);
  
  if (array == NULL)
	  return -1;

  memset(array,0,sizeof(array));
  printf("申请了 %d 的内存空间\n",(sizeof(int)*arr_num)); 
   
  for(int i=0;i<arr_num;i++)
  {
     scanf("%d",&array[i]);
  }
  for(int i=0;i<arr_num;i++)
  {
     printf("%d ",array[i]);
  }

   system("pause");
}

