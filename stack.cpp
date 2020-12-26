#include <stdio.h>
#define MAX_SIZE_STACK 100

int stack[MAX_SIZE_STACK];
int size = 0;

int isEmpty() {
	if(size == 0){
		return true;
	}
	return false;
}

int isFull() {
	if(size == MAX_SIZE_STACK){
		return true;
	}
	return false;
}

int show(){
	for(int i = 0; i < size; i++){
		printf("���� �迭 : %d ",stack[i]);	
	}
	
	
	printf("\n");
	return 0;
}

int push(int value) {
	if(isFull() == false){
		stack[size] = value;
		size++;
		printf("�迭�� %d�� ���Լ���. \n���� �迭 ������ : %d\n",value,size);
		show();
	}else{
		printf("�迭�� ���� á���ϴ�.\n");
	}

	return 0;
}

int pop() {
	if(isEmpty() == false){
		size--;
		printf("�迭�� %d�� ��������. \n���� �迭 ������ : %d\n",stack[size+1],size);
		show();
	}else{
		printf("�迭�� ���� ������ϴ�.\n");
	}
	
	return 0;
}


int main() {
	push(1);
	pop();

	return 0;
}
