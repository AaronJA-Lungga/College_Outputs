#include <stdio.h>
int main()
{
    int money, choice, change, P=10, M=8, MD=8, CC=15, R=10;

a:  puts("\n");
    puts("Hello! Good Day.");
    puts("This is FGroup's Vending Machine.");
    puts("Here are the list of the beverages availabe.\n");

    printf("Name list of beverage: ");
    printf("\n\n");
    printf("1. Pepsi");                          printf("\t\t\tP10.00\n");
    printf("2. Mirinda");                        printf("\t\t\tP08.00\n");
    printf("3. Mountain Dew");                   printf("\t\t\tP08.00\n");
    printf("4. Coca Cola");                      printf("\t\t\tP15.00\n");
    printf("5. Royal");                          printf("\t\t\tP10.00\n");
    printf("\n\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
         printf("You choose Pepsi");                  printf("\tP10.00\n");
         goto b;
         break;
    case 2:
         printf("You choose Mirinda");                printf("\tP08.00\n");
         goto b;
         break;
    case 3:
         printf("You choose Mountain Dew");           printf("\tP08.00\n");
         goto b;
         break;
    case 4:
         printf("You choose Coca Cola");              printf("\tP15.00\n");
         goto b;
         break;
    case 5:
         printf("You choose Royal");                 printf("\tP10.00\n");
         goto b;
         break;
    default:
         printf("Invalid input!\n");
         goto a;
         break;
    }

b:  printf("Enter your money: ");
    scanf("%d",&money);
    printf("\n");

    if (money>=8)
        {
        printf("Money ACCEPTED!\n");
        }
    else
        {
        printf("Money NOT ACCEPTED!\n");
        }

    if(choice==1 && money>=10)
    {
    printf("Enjoy your Pepsi\n");
    change = money-P;
    printf("Your change is %d pesos\n\n",change);
    }
    else if (choice==2 && money>=8)
    {
    printf("Enjoy your Mirinda\n");
    change = money-M;
    printf("Your change is %d pesos\n\n",change);
    }
    else if  (choice==3 && money>=8)
    {
    printf("Enjoy your Mountain Dew\n");
    change = money-MD;
    printf("Your change is %d pesos\n\n",change);
    }
    else if  (choice==4 && money>=15)
    {
    printf("Enjoy your Coca Cola\n");
    change = money-CC;
    printf("Your change is %d pesos\n\n",change);
    }
    else if  (choice==5 && money>=10)
    {
    printf("Enjoy your Royal\n");
    change = money-R;
    printf("Your change is %d pesos\n\n",change);
    }
    else
    {
    printf("You have insufficient funds!\n\n");
    printf("Please pick another drink.");
    goto a;
    }

   char str1[100] = "This is FGroup's Code. \n", str2[] = "Ponce, Mark Dave\n Pastoriza, Antonio Robert\n Barcial, Shine\n Arias, Aaron Jay\n";

   strcat(str1, str2);

   puts(str1);
   puts("Members:");
   puts(str2);

  getch();
  return 0;
}
