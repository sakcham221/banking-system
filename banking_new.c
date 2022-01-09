#include<stdio.h>
#include<stdlib.h>

int main()
{
    int pin=1111,option,enteredpin,count=0,amount=1;
    float balance = 5000;
    int contionuetranscation = 1;


    printf("\n\t\t\t*******welcome to main menu*******");

while(pin != enteredpin)

{
    printf("\nEnter your pin : ");
    scanf("%d",&enteredpin);
    if(enteredpin != pin)
    {
        printf("invalid pin");
    }
    count++;
    if(count == 3 && pin != enteredpin)
    {
        exit(0);
    } 
}
printf("\n\t\t\t======Available Transcation=======");
printf("\n\n\t\t1.withdrawl");
printf("\n\t\t2.deposit");
printf("\n\t\t3.check balance");
printf("\n\n\tselect the option : ");
scanf("%d",&option);
switch(option){
    case 1:
    while (amount % 500 != 0)
    
    {
        printf("\n\t\tenter the amount : ");
    scanf("%d",&amount);
    if(amount % 500 != 0)
    printf("\n\t the amount should be multiple of 500");
    }
    if(balance < amount)
    {
        printf("\n\tsorry insufficent balance");
        amount=1;
    }
    else{
        balance -= amount;
        printf("\n\t\tyou have withdrawn Rs.%d. now your new balance is %.2f",amount,balance);
        printf("\n\t\t*********Thankyou for banking with us*********");
        amount=1;
        break;
    }

case 2:
        printf("\n\t\t please enter the amount :");
        scanf("%d",&amount);
        balance += amount;
        printf("\n\t\tyou have depositeed Rs.%d. Your new balance is %.2f",amount,balance);
        printf("\n\t\t\t*********Thankyou for banking with us**********");
        amount = 1;
        break; 

case 3:
        printf("\n\t\tyour balance is Rs.%.2f",balance);
        printf("\n\t\t\t*********Thankyou for banking with us**********");
        break;

default:
    
        printf("\n\t\tInvalid Option!");

}
return 0;}