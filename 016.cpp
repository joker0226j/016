#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define INPUT_MAX 5
void NTC(char * );  //num to chinese直接顯示數字結果 
char *map(int);     //單位對照 int為字元長度 
int main(void){
	
	int i,j=0;      //i為迴圈用 j為指標位置用 
	char *input;    //輸入字串指標變數 
	char input_num[INPUT_MAX];//最大為5位數
	int length;     //輸入位元長度 
	 
	printf("請輸入一串阿拉伯數字:");
	scanf("%s",input_num);
	
	input=input_num;//陣列位置指向input指標變數 
	length=strlen(input_num);//副函式 
	for(i=0;i<length;i++){
		NTC(input);
		if(*(input)!='0'){
			printf("%s",(map(length))+j);
		}
		input++;
		j+=3;//位置+3 
	}
	printf("\n");
	system("pause");
	return 0;
} 
char *map(int digital){
	int i,j=0;
	char *result[4];
	char chinese[5][3]={"萬","千","百","拾"," "};//單位對照 
	
	for(i=digital;i>1;i--){
		result[j]=chinese[5-i];
		j++;
	}
	return *result;//傳回指標 
}
void NTC(char *input){
	
	char chinese_map[10][4]={"零","一","二","三","四","五","六","七","八","九"};
	
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
