#include <time.h>
#include <stdio.h>
int x=1, loop=1, pass=696969;
char System,choice, temp[100], card='0'; 
void checkpin();
void services();
void withdrawal(int a, float b);

int main(){

  while(loop==1){
        printf("\nPass=696969\n");
        printf("\n~~~~~   Out of Services   ~~~~~\n");
  while(x==1){
        printf("Please type [1] to enable system.\n");
        scanf("%s",&System);
    
    if(System=='1')
    {break;}
    }
        printf("\n~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");
        printf("       Welcome to Fern ATM       \n");
        printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");
  while (card != '1'){
        printf("\nPlease input '1' to insert card.");
        scanf("%s",&card);
   }
   checkpin();
   
  }
  return 0;
}

  void checkpin()
  {
    int pin, limit=3, c=0;
  while (limit>=0){
        printf("Enter your pin:");
        scanf("%d",&pin);
    if(pin!=pass )
    {
        printf("Access is denied.\n");
        printf("You have %d chance(s) left.\n",limit);
    }
    else {
        printf("Access is granted.\n"); c=1; break;}
        limit--;
    }
    if(c==1){
      services();}
    else{
        printf("Your card has been confiscated.");
        } 
  }
  
   void services(){
      int receipt, r=1;
      float Balance=5000,deposit;
    while (r==1){
        printf("\nPlease select your choice of services:\n");
        printf("[1]Check Balance\n[2]Deposit\n[3]Withdrawal\n[4]Return Card\n");
        scanf("%s",&choice);
    
    switch(choice) //Split into 4 cases
    {
      case '1': //CheckBalance
          printf("Your Account Balance:RM%.2f\n",Balance);
          break;
          
      case '2': //Deposit
          printf("Enter amount of deposit:RM");
          scanf("%f",&deposit);
          Balance = Balance+deposit;
          printf("\nNew Balance:RM%.2f\n", Balance);
          break;
          
      case '3'://withdrawal
          printf("Do you need a receipt?\n [1] Yes\t[2] No\n");
          scanf("%d",&choice);
      if (choice==1){
          receipt=1;}
      else {
          receipt=0;}
          r=0;
          withdrawal(receipt,Balance);
          break;
          
      case '4'://returnCard
          printf("Please take your card.\n");
          printf("Have a great day !");
          card=0; r=0;
          break;
      }
    }
}
  
  void withdrawal(int receipt,float Balance)
  {
    float withdraw ;
          printf("Which amount do you wish to choose?");
          printf("\n[1]RM1000\n[2]RM500\n[3]RM200\n[4]RM100\n[5]Other Amount\n");
          scanf("%s",&choice);
    
    if (choice=='1'){
          Balance= Balance-1000;
          printf("\nNew Balance: RM%.2f\n",Balance);}
          
    else if
          (choice=='2'){
          Balance= Balance-500;
          printf("\nNew Balance: RM%.2f\n",Balance);}
      
    else if
          (choice=='3'){
          Balance= Balance-200;
          printf("\nNew Balance: RM%.2f\n",Balance);}
      
    else if 
          (choice=='4'){
          Balance= Balance-100;
          printf("\nNew Balance: RM%.2f\n",Balance);}
      
    else{
          printf("\nPlease key in the amount:RM");
          scanf("%f",&withdraw);
          Balance= Balance-withdraw;
          printf("New Balance: RM%.2f\n",Balance);}
      
      if (Balance==0){
          printf("\nThere are no funds available.\n");
          printf("\nPlease take back your card.\n");card=0;}
          
      if (Balance<withdraw){
          printf("\nThere is insufficienct funds to cover the requested amount.\n");
          printf("\nYour current balance:RM%.2f\n",Balance);
          printf("\nDo you want reduce the amount of withdrawal?\n[1]Yes\t[2]No\n");
         scanf("%d",&choice);
      while (choice=='1'){ 
          printf("Please key in the amount:Rm");
          scanf("%f",&withdraw);
      if (withdraw<=Balance){
            break;}
          }
        }
      if (Balance>withdraw){
          printf("Please take back your card.^_^\n");card=0;
          printf("Take your cash and Have a great day!\n");
      if (receipt==1){
          printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");
          printf("           Receipt           \n");
          printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");
          
          printf("Balance:RM%.2f\n",Balance);
        time_t current_time = time(NULL);
        struct tm *tm = localtime(&current_time);
        strftime(temp, sizeof(temp), "%c", tm);
        printf("\nCurrent Date and Time:\n");
        printf("\n%s\n\n", temp);
      }
        }
        return;
    }
