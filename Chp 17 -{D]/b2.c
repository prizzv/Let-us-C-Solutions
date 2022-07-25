#include <stdio.h>
#include <stdlib.h>

struct data{
    int acc;
    char name[50];
    int balance;
};

void fwithdraw(struct data cust[200], int n);

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
    fwithdraw(cust, n);

    return 0;
}

void fwithdraw(struct data cust[200], int n){

    int i, name, x, y;

    printf("Enter your name: ");
    scanf("%s",name);

    for(i=0; i<n; i++){
        if(cust[i].name == name){
            printf("%d  %d\n",cust[i].acc, cust[i].balance);

            printf("Enter 1 for deposit or enter 0 for withdrawal: ");
            scanf("%d",&x);

           if(x == 1){
            printf("How much amount do you want to deposit?\n");
            scanf("%d",&y);
            printf("You deposited %d amount", y);
           }else if(x == 0){
               if(cust[i].balance < 100){
                    printf("The balance is insufficient for the specified withdrawal");
               }else{
                    printf("How much amount do you want to withdraw?\n");
                    scanf("%d",&y);
                    printf("You withdrew %d amount", y);
               }
           }
        }
    }
    return;
}
