#include <stdio.h>


int main()

{
//intergers
int num;
float price;
int date1, date2, date3;


//print prompts
printf("Enter item number: ");
scanf("%d", &num); 

printf("Enter unit price: ");
scanf("%f", &price); 



printf("Enter purchase date (mm/dd/yyyy): ");
scanf("%02d/%02d/%04d", &date1, &date2, &date3); 

printf("Item \t Unit \t Purchase \n \t Price \t Date \n%d \t %0.2f \t %d/%d/%d\n\n", num, price, date1, date2, date3);
}
