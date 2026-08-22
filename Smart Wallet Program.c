#include<stdio.h>
#include<string.h>
struct payment{
     int transactionID;
     char name[30];
     float amount;

     int type;
union {
     char upiID[30];
     char cardnumber[20];
     float cashamount;
}payment;
};
int main()
{
  struct payment p;
  printf("***SMART PAYMENT WALLET***\n");

  printf("Enter ID:");
  scanf("%d",&p.transactionID);
  printf("Enter Name:");
  scanf("%s",&p.name);
  printf("Enter Amount:");
  scanf("%f",&p.amount);

  printf("select the payment method\n");
  printf("1.UPI\n");
  printf("2.Card\n");
  printf("3.Cash\n");

  printf("Enter Choice:");
  scanf("%d",&p.type);

  switch(p.type){
       case 1:
       printf("Enter UPI ID:");
       scanf("%d",&p.payment.upiID);
       break;
       case 2:
       printf("Enter Card:");
       scanf("%s",&p.payment.cardnumber);
       break;
       case 3:
       p.payment.cashamount=p.amount;
       break;

       default:
       printf("invalid choice");
       }
       printf("\n ======== Transaction Receipt=======");
       printf ("Transaction ID:%d\n",p.transactionID);
       printf("Customer Name %s\n",p.name );
       printf("Amount:%.2f",p.amount);

       switch(p.type)
       {
       case 1 :
       printf("Payment Type :UPI");
       printf("UPI ID:%d\n",p.payment.upiID);
       break;

       case 2 :
       printf("Payment Type :CARD\n");
       printf("CARD NUMBER :%d\n",p.payment.cardnumber);
       break;

       case 3 :
       printf("Payment Type :CASH\n");
       printf("CASH AMOUNT :%d\n",p.payment.cashamount);
       break;
       }
       return 0;
       }