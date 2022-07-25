#include <stdio.h>
#include <stdlib.h>

struct data{
    int acc;
    char name[50];
    int balance;
};

void fbalance(struct data cust[200], int n);

int main()
{
    int balance, i, n;
    struct data cust[200] = { 001, "Kishor", 55, 002, "Ram", 69000, 003, "Dom", 80085, 004, "Deepak", 10};

    printf("Enter the number of customers: ");
    scanf("%d",&n);

    printf("Enter the account number, name and balance in the account\n");

    for(i=0; i<n; i++){
        scanf("%d %s %d", &cust[i].acc, cust[i].name, &cust[i].balance);
    }
    fbalance(cust, n);

    return 0;
}

void fbalance(struct data cust[200], int n){

    int i;

    printf("The following account number and name have balance less than 100\n");
    for(i=0; i<n; i++){
        if(cust[i].balance < 100){
            printf("%d  %s\n",cust[i].acc, cust[i].name);

        }
    }
    return;
}
