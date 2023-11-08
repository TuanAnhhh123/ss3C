#include<stdio.h>
int main(){
	float marth,literature,english;
	printf("Nhap so diem toan , van , anh : ");
	scanf("%f %f %f ", &marth , &literature , & english);
	float sum = marth + literature + english;
	float average = (marth + literature + english)/3;
	printf("Diem Tong la : %.2f ,Diem TB la : %.2f ",&sum;&average);
}

