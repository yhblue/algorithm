#include<stdio.h>
#include<malloc.h>
#include<iostream>


void Print_Arry(int *array,int arr_num);

int main(void)
{
  int arr_num = 0; //������ٸ�Ԫ��
  int mod_times = 0;        //�޸ĵĴ���     
  int tmp = 0;             //��ʱ�洢������Ԫ��
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

  for(int i=0;i<mod_times;i++)//�޸����������
  {
	  int x_th = 0;
	  int mod_data = 0;

	  scanf("%d",&x_th);    //�޸������x_th��Ԫ�أ��൱�� a[x_th-1]
	  scanf("%d",&mod_data);

	  if(x_th > arr_num) //�����������е�Ԫ�ظ���
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

