#include<stdio.h>
#include<string.h>

#define size 100
struct Student{
	int sid;
	char name[size];
	char contact[10];
};
struct Student s[size],temp;

void main(){
	int num,i=0,j;

	printf("How many student are there?");
	scanf("%d",&num);
	// Getting user input
	for(;i<num;i++){
		printf("Student id:\t");
		scanf("%d",&s[i].sid);
		fflush(stdin);
		printf("Name:\t");
		gets(s[i].name);
		while(strlen(s[i].contact)!=10){
		printf("Phone Number:\t");
		scanf("%s",s[i].contact);
		if(strlen(s[i].contact)!=10)
		printf("\n\nInvalid contact number!!\ntry again!");
		}
		
		
	}
	
	// arrange in ascending order according to the name

	for(i=0;i<num;i++){
		for(j=i+1;j<num;j++){
			if(strcmp(s[i].name,s[j].name)>0){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("Arranged in ascending order list:\n");
	for(i=0;i<num;i++)
		printf("Student Id:\t%d\tName:\t%s\tContact:\t%s\n",s[i].sid,s[i].name,s[i].contact);

}