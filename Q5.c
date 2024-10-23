#include<stdio.h>
int main(){
	char month;
	printf("enter any month:");
	scanf("%c",&month);
	
	switch(month){
		case 'january':
			printf("31 days");
			
		case 'march':
			printf("31 days");
			
		case 'may':
		    printf("31 days");	
			
		case 'july':
		    printf("31 days");
			
		case 'august':
		    printf("31 days");
			
		case 'octobar':
		    printf("31 days");
			
		case 'decmber':
			printf("31 days");
			
		default:
		printf("30 days");
					
	}
}
