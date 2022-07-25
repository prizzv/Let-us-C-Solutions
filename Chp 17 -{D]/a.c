#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    int rollNum;
    char name[50];
    char department[20];
    char course[50];
    int yearOfJoining;
};

void fyear(int year, struct student stud[450],int n);
void froll(int roll, struct student stud[450],int n);

int main()
{
    struct student stud[450];
    int i, year, n, roll;

    printf("Enter the number of students: ");
    scanf("%d",&n);

    printf("Enter the roll number, name, department, course, and the year of joining of the student respectively\n");
    for(i=0; i<n; i++){
        printf("Enter the details of student %d\n",i+1);
        scanf("%d %s %s %s %d",&stud[i].rollNum, stud[i].name, stud[i].department, stud[i].course, &stud[i].yearOfJoining);
    }

    printf("Enter a year: ");
    scanf("%d",&year);

    printf("Enter a roll number: ");
    scanf("%d",&roll);

    fyear(year, stud, n);

    froll(roll, stud, n);

    return 0;
}

void fyear(int year, struct student stud[450],int n){

    int i;

    for(i=0; i<n;i++){
        if(stud[i].yearOfJoining == year){
            printf("%d  %s  %s  %s  %d",stud[i].rollNum, stud[i].name, stud[i].department, stud[i].course, stud[i].yearOfJoining);
            printf("\n");
        }
    }
    return;
}

void froll(int roll, struct student stud[450],int n){

    int i;

    for(i=0; i<n;i++){
        if(stud[i].rollNum == roll){
            printf("%d  %s  %s  %s  %d",stud[i].rollNum, stud[i].name, stud[i].department, stud[i].course, stud[i].yearOfJoining);
             printf("\n");
        }
    }
    return;
}
