#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>

void Print_Arry(const int *array,int arr_num);
void OutPut_Result(const int *ret,int length);
int Count_InverseNumber(const int *arr,int length);

int main(void)
{
  int arr_num = 0;            //������ٸ�Ԫ��
  int mod_times = 0;        //�޸ĵĴ���     
  int tmp = 0;             //��ʱ�洢������Ԫ��
  int *array = NULL;
  int *ret = NULL;

  scanf("%d",&arr_num);
  //printf("arr_num = %d\n",arr_num);

  array = (int*)malloc(sizeof(int)*arr_num);
  ret = (int*)malloc(sizeof(int)*mod_times);     //�洢���صĽ��

  if (array == NULL)
	  return -1;

  memset(array,0,sizeof(int)*arr_num);
  memset(ret,0,sizeof(int)*mod_times);

  for(int i=0;i<arr_num;i++)
  {
     scanf("%d",&array[i]);
  }

  scanf("%d",&mod_times);
  //printf("mod_times = %d\n",mod_times);

  for(int i=0;i<mod_times;i++)//�޸����������
  {
	  int x_th = 0;
	  int mod_data = 0;

	  scanf("%d",&x_th);    //�޸������x_th��Ԫ�أ��൱�� a[x_th-1]
	  scanf("%d",&mod_data);

	  if(x_th > arr_num) //�����������е�Ԫ�ظ���
		  return -1;

	  array[x_th-1] = mod_data;
      //Print_Arry(array,arr_num);
	  ret[i] = Count_InverseNumber(array,arr_num);
	  
  }

  OutPut_Result(ret,mod_times); 
  free(array);
  free(ret);
  //system("pause");
}

void Print_Arry(const int *array,int arr_num)
{
  printf("\n");
  for(int i=0;i<arr_num;i++)
  {
     printf("%d ",array[i]);
  }   
  printf("\n");
}

void OutPut_Result(const int *ret,int length)
{
	if(ret == NULL)
	   return;
//	printf("output the result!\n");
	for(int i=0; i<length; i++)
	  printf("%d\n",ret[i]);
}

//arr�������׵�ַ
//length������Ԫ�ظ���
int Count_InverseNumber(const int *arr,int length)
{
	int ret_num = 0;

	if (arr == NULL)
		return -1;
	
    for(int i=0;i<(length-1);i++) //i������һ��Ԫ��ȥ��ʣ��Ԫ�رȽ�
	{
		for(int j=1;j<(length-i);j++)
		{
		   if(arr[i] > arr[i+j])
			   ret_num++;
		}
		
	}
	return ret_num;
}