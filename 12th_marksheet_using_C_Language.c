#include<stdio.h>
#include<conio.h>

// Globle variables
    char schoolName[50] = "Rajendra prasad tarachnad";
	char stdName[10000] ;
	int rollNum;
	int hi,eng,math,computer,sst,science,obt,mm=600;
	int marks;
	float percentage;
	
	// fuction declration for obtain
void obtain(int hi, int eng,int math, int computer, int sst, int science){
	marks = hi+eng+math+computer+sst+science;
	printf("\n\t\t\t\t\t**************************************************");
	printf("\n\n\t\t\t\t\tHello student your obtain is = %d", marks);
}

// for Percentage
float per(){
	return percentage = (marks*100)/mm;\
}


// for Result : (Pass/Fail)
void result(){
	if (percentage>=33){
		printf("\n\t\t\t\t\tGrade: Great...! you are passed" );
	}
	else{
		printf("\n\t\t\t\t\tGrade: Sorry...! you are failed with" );
	}
}

void grade(){
		if (percentage>=85){
		printf("\n\t\t\t\t\tGrade: A");
		}
		else if (percentage>=65){
		printf("\n\t\t\t\t\tGrade: B");
		}
		else if (percentage>=45){
		printf("\n\t\t\t\t\tGrade: C");
		}
		else if (percentage>=35){
		printf("\n\t\t\t\t\tGrade: D");
		}
		else{
		printf("Fail");
		}		
}



int main(){
	
	printf("\n\t\t\t\t\t********************************************************");
	printf("\n\t\t\t\t\t...............%s...............",schoolName);
	printf("\n\t\t\t\t\t********************************************************");
	printf("\n\n\t\t\t\t\tEnter your name: ");
	scanf("%s",&stdName);
	printf("\n\t\t\t\t\tEnter your roll no: ");
	scanf("%d",&rollNum);
	printf("\n\t\t\t\t\t");
	
	printf("\n\t\t\t\t\tEnter the marks of Hindi:");
	scanf("%d",&hi);
	
	printf("\n\t\t\t\t\tEnter the marks of English:");
	scanf("%d",&eng);
	
	printf("\n\t\t\t\t\tEnter the marks of Math:");
	scanf("%d",&math);
	
	printf("\n\t\t\t\t\tEnter the marks of Computer:");
	scanf("%d",&computer);
	
	
	printf("\n\t\t\t\t\tEnter the marks of SST:");
	scanf("%d",&sst);
	
	printf("\n\t\t\t\t\tEnter the marks of Science:");
	scanf("%d",&science);
	
	//Obtain : function with argunemt but no return value;
	obtain(hi,eng,math,computer,sst,science);
	
	//Percentage : function with no argunemt and return value;
    float x = per();
	printf("\n\t\t\t\t\tYour percentage: %.2f% ", x);
	
	// Result: (Pass/fail)
	// fuction with no argument but no return value;
	result();
	
	
	//Grade : function with no argunemt and return no  value;
	grade();
	
	printf("\n\n\t\t\t\t\t**************************************************");
	
	getch();
}
