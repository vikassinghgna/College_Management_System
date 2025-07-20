#include<stdio.h>
#include<string.h>
#define MAXSTU 100
char name [MAXSTU][100];
int rollno[MAXSTU];
int age[MAXSTU];
int year[MAXSTU];
char fname[MAXSTU][100];
float marks[MAXSTU];
int totalstudents=0;
void addstudent() {
if(totalstudents<MAXSTU) {
    printf("Enter Student's Name : ");
    getchar();
    gets(name[totalstudents]);
    printf("Enter Student's Year Of Registration :  ");
    scanf("%d",&year[totalstudents]);
    printf("Enter Student's Roll NO. : GU-%d-",year[totalstudents]);
    scanf("%d",&rollno[totalstudents]);
    printf("Enter Student's Father's Name : ");
    getchar();
    gets(fname[totalstudents]);
    printf("Enter Student's Percentage In Last Exams : ");
    scanf("%f",&marks[totalstudents]);
    printf("Enter Student's Age : ");
    scanf("%d",&age[totalstudents]);
    totalstudents++;
    printf("Student's Record Successfully Added\n");
} else {
printf("Your Student's Record Adding Limit Is Completed\n");
}


}
void displaystudent() {
    int i;
if (totalstudents==0) {
    printf("No Record Has Been Added\n");
} else {
printf("\nRecord Of Students :\n");
for(i=0;i<totalstudents;i++) {
printf("Name Of Student : %s\n",name[i]);
printf("Year Of Student's Registration : %d\n",year[i]);
printf("Roll NO.  Of Student : GU-%d-%d\n",year[i],rollno[i]);
printf("Name Of Student's Father : %s\n",fname[i]);
printf("Age of Student :%d\n",age[i]);
printf("Percentage Of Student In Last Exams : %.2f\n",marks[i]);
printf("\n");
}

}

}
void searchstudent() {
int Year,Rollno,i;
printf("Enter Student's Year Of Registration :  ");
    scanf("%d",&Year);
    printf("Enter Student's Roll NO. : GU-%d-",Year);
    scanf("%d",&Rollno);
    int found = 0;
    for(i=0;i<totalstudents;i++) {
        if(rollno[i] == Rollno) {
            printf("Student's Record Found\n");
            printf("Name Of Student : %s\n",name[i]);
printf("Name Of Student's Father : %s\n",fname[i]);
printf("Age of Student :%d\n",age[i]);
printf("Percentage Of Student In Last Exams : %f\n",marks[i]);
found=1;
break;
        }
    }
    if(!found) {
        printf("No Record Found\n");
    }
}
int main () {
    int choice;
    printf("==============COLLEGE MANAGEMENT SYSTEM=================\n");
    while(1) {
printf("\t\t\t 1. Add Student Record\n");
printf("\t\t\t 2. Display All Students Record\n");
printf("\t\t\t 3. Search Student's Record\n");
printf("\t\t\t 4. Exit\n");
printf("Cast Your Choice :  ");
scanf("%d",&choice);
switch(choice) {
case 1:
    addstudent();
    break;
case 2:
    displaystudent();
    break;
case 3:
    searchstudent();
    break;
case 4:
    printf("...........Exiting............\n");
    return 0;
    break;
default :
    printf("Enter A Valid Choice Between (1-4)\n");
    break;

}

}
return 0;
}
