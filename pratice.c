#include<stdio.h>
void main(){	//输入十个数，统计并输出正数，负数和零的个数
	int i, j = 0, k = 0,l = 0; //定义统计变量
	float figure;
	printf("请输入十个数！");
	for (i = 1; i <= 10; i++) {	//遍历十次
		scanf_s("%f", &figure);
		if (figure > 0) {	//判断是否为正
			j++;	//统计正数个数
		}
		else if (figure == 0) {	//判断是否为零
			k++;		//统计零个数
		}
		else if (figure < 0) {	//判断是否为负数
			l++;		//统计负数个数
		}	
	}
	printf("您输入的数中,正数为%d个，负数为%d个,零为%d个", j, l, k);
}