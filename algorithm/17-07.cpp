#include<stdio.h>
#include<malloc.h>
#include<iostream>


void Print_Arry(int *array,int arr_num);

int main(void)
{
  int arr_num = 0; //数组多少个元素
  int mod_times = 0;        //修改的次数     
  int tmp = 0;             //临时存储数组中元素
  int *array = NULL;

  scanf("%d",&arr_num);
  printf("arr_num = %d\n",arr_num);

  array = (int*)malloc(sizeof(int)*arr_num);
  
  if (array == NULL)
	  return -1;

  memset(array,0,sizeof(int)*arr_num);

  for(int i=0;i<arr_num;i++)
  {
     scanf("%d",&array[i]);
  }

  scanf("%d",&mod_times);
  printf("mod_times = %d\n",mod_times);

  for(int i=0;i<mod_times;i++)//修改数组的内容
  {
	  int x_th = 0;
	  int mod_data = 0;

	  scanf("%d",&x_th);    //修改数组第x_th个元素，相当于 a[x_th-1]
	  scanf("%d",&mod_data);

	  if(x_th > arr_num) //大于数组中有的元素个数
		  return -1;
	  array[x_th-1] = mod_data;
	  
	  Print_Arry(array,arr_num);
  }
   
  system("pause");
}

void Print_Arry(int *array,int arr_num)
{
  printf("\n");
  for(int i=0;i<arr_num;i++)
  {
     printf("%d ",array[i]);
  }   
  printf("\n");
}

