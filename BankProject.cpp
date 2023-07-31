#include <stdio.h>
int main()
{
  FILE *f;
  f = fopen("bankinfo.txt", "r"); 

  int N;
  int acc_no;
  fscanf(f, "%d %d ", &N, &acc_no);
  printf("Number of Accounts: %d\n",N);
  printf("Account number current going on: %d\n",acc_no);
  fclose(f);

  int n;
  printf("Welcome to Bank Mangement system\n");
  printf("1.create new Account\n");
  printf("2.Account operations\n");
  printf("Enter the choice\n ");
  scanf("%d", &n);
  while (n == 1 || n == 2)
  {
    if (n == 1)
    {
      printf("Enter information to create Account:\n");
      printf("Name :");
      char name[10];
      scanf("%s", name);
  
      printf("\nFather`s name:");
      char fname[9];
      scanf("%s", fname);
      printf("\nAmount to deposit in Account:");
      int amount;
      scanf("%d", &amount);
      printf("Account no is : %d\n", acc_no);
      printf("Enter Account number for conformation \n");
      char acc_no_s[10];
      scanf("%s", acc_no_s);
      FILE *a = fopen(acc_no_s, "w+");
      fprintf(a, "%s ", name);
      fprintf(a, "%s ", fname);
      fprintf(a, "%d", amount);
      N++;
      acc_no++;
      fclose(a);
      f = fopen("bankinfo.txt", "w");
      fprintf(f, "%d %d", N, acc_no);
    }
    if (n == 2)
    {
      printf("Enter the Account number:\n");
      char accNO[10];
      scanf("%s", accNO);
      FILE *ap = fopen(accNO, "r");
      if (ap == NULL)
      {
        printf("%s Account does not exist\n",accNO);
        continue;
      }
      printf("1.Balance check\n");
      printf("2.Account information\n");
      printf("3.deposit\n");
      printf("4.withdraw\n");
      printf("Enter the operation number\n");
      int op;
      scanf("%d", &op);
      int accbalance;
      char name[10];
      char fname[10];
      fscanf(ap, "%s %s %d", name, fname, &accbalance);
      if (op == 1)
      {
        printf("Balance is: %d\n", accbalance);
      }
      else if (op == 2)
      {
        printf("Name :%s\n", name);
        printf(" Father`s name :%s\n", fname);
        printf("Account balance is: %d\n", accbalance);
      }
      else if (op == 3)
      {
        printf("Enter amount to deposit\n");
        int amount;
        scanf("%d", &amount);
        accbalance += amount;
      }
      else if (op == 4)
      {
        int amount;
        printf("Enter amount of withdrawal\n");
        scanf("%d", &amount);
        if (accbalance - amount <= 0)
        {
          printf(" Sorry transaction failed \n Amount is not sufficent \n");
        }
        else
        {
          accbalance -= amount;
        }
      }
      else
      {
        printf("operation not present\n");
      }
      fclose(ap);
      ap = fopen(accNO, "w");
      fprintf(ap, "%s %s %d", name, fname, accbalance);
      fclose(ap);
    }
          printf("__________________________________________\n");
    printf("Welcome to Bank Mangement system\n");
    printf("1.create new Account\n");
    printf("2.Account operations\n");
    printf("Enter the choice\n ");
    scanf("%d", &n);
  }
}