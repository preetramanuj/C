//ATM Simulator Check Balance,Deposit Money,Withdraw Money,Exit
#include<stdio.h>
int main()
{
	float balance=0,deposit_money=0,withdraw_money=0;
	int choice;
	while(choice != 4)
	{
		printf("\n1.Balance \n2.Deposit Money\n3.Withdraw Money\n4.Exit");
		printf("\nEnter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("%f",balance);
				break;
			case 2:	
				printf("Enter money you want to deposit:");
				scanf("%f",&deposit_money);
				balance =balance + deposit_money;
				printf("Your total balance is:%f",balance);
				break;
			case 3:
				printf("Enter money you want to Withdraw:");
				scanf("%f",&withdraw_money);
				balance = balance - withdraw_money;
				printf("Your total balance is:%f",balance);
				break;
			case 4:
				break;
			default :
				printf("Invalid choice");
				break;				
		}
	}
}
