#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define INPUT_MAX 5
void NTC(char * );  //num to chinese������ܼƦr���G 
char *map(int);     //����� int���r������ 
int main(void){
	
	int i,j=0;      //i���j��� j�����Ц�m�� 
	char *input;    //��J�r������ܼ� 
	char input_num[INPUT_MAX];//�̤j��5���
	int length;     //��J�줸���� 
	 
	printf("�п�J�@����ԧB�Ʀr:");
	scanf("%s",input_num);
	
	input=input_num;//�}�C��m���Vinput�����ܼ� 
	length=strlen(input_num);//�ƨ禡 
	for(i=0;i<length;i++){
		NTC(input);
		if(*(input)!='0'){
			printf("%s",(map(length))+j);
		}
		input++;
		j+=3;//��m+3 
	}
	printf("\n");
	system("pause");
	return 0;
} 
char *map(int digital){
	int i,j=0;
	char *result[4];
	char chinese[5][3]={"�U","�d","��","�B"," "};//����� 
	
	for(i=digital;i>1;i--){
		result[j]=chinese[5-i];
		j++;
	}
	return *result;//�Ǧ^���� 
}
void NTC(char *input){
	
	char chinese_map[10][4]={"�s","�@","�G","�T","�|","��","��","�C","�K","�E"};
	
	switch(*input){
	case '0':{
		printf("%s",chinese_map[0]);
		break;
	}
	case '1':{
		printf("%s",chinese_map[1]);
		break;
	}
	case '2':{
		printf("%s",chinese_map[2]);
		break;
	}
	case '3':{
		printf("%s",chinese_map[3]);
		break;
	}
	case '4':{
		printf("%s",chinese_map[4]);
		break;
	}
	case '5':{
		printf("%s",chinese_map[5]);
		break;
	}
	case '6':{
		printf("%s",chinese_map[6]);
		break;
	}
	case '7':{
		printf("%s",chinese_map[7]);
		break;
	}
	case '8':{
		printf("%s",chinese_map[8]);
		break;
	}	
	case '9':{
		printf("%s",chinese_map[9]);
		break;
	}			
	}
}
