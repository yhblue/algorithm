#include<stdio.h>
#include<malloc.h>
#include<iostream>

int main(void)
{
  unsigned int arr_num = 0; //������ٸ�Ԫ��
  int mod_times = 0;        //�޸ĵĴ���     
  int tmp = 0;             //��ʱ�洢������Ԫ��
  int *array = NULL;

  scanf("%d",&arr_num);
  printf("arr_num = %d\n",arr_num);
  scanf("%d",&mod_times);
  printf("mod_times = %d\n",mod_times);

  
  array = (int*)malloc(sizeof(int)*arr_num);
  
  if (array == NULL)
	  return -1;

  memset(array,0,sizeof(array));
  printf("������ %d ���ڴ�ռ�\n",(sizeof(int)*arr_num)); 
   
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

