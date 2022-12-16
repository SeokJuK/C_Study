#include <stdio.h>
int size;
void bubbleSort(int a[],int size)
{
     int i, j, t, temp;
	 printf("\n정렬할 원소 : ");
	 for(t=0; t<size; t++) printf("%d  ", a[t]);
	 printf("\n<<<<<<<<<< 버블 정렬 수행 >>>>>>>>>>");
         for (i=size-1; i>0; i--) {
		 printf("\n %d 단계>>", size-i);
		 for (j=0; j<=i; j++) {
			 if (a[j-1]>a[j]) {
				 temp = a[j-1];
				 a[j-1] = a[j];
				 a[j] = temp;					 
			}
			printf("\n\t");
			for(t=0; t<size; t++) printf("%3d ", a[t]);
		}
     }
}

void main()
{
	int list[8]={69, 10, 30, 2, 16, 8, 31, 22};
	size = 8;	
	bubbleSort(list, size);
}