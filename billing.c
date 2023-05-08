#include <stdio.h>
int main()
{
 int a,qty,rate,total;
 char c;
 menu:printf("\nMENU CARD \nSelect your drink \n1.COFFEE \n2.TEA \n3.COLD COFFEE \n4.MILK SHAKE \n5.STALC\n");  
 scanf("%d",&a);
 switch(a)
 {
    
    case 1:
    printf("\nYou have selected Coffee.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=5;
    total=qty*rate;
    printf("\nTotal amount :%d\n",total);
    printf("do you want to continue? if yes enter y\n");
    scanf("%s",&c);
    if (c=='y')
    goto menu;
    else
    break;
case 2:
    printf("\nYou have selected Tea.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=10;
    total=qty*rate;
    printf("\nTotal amount :%d\n",total);
    printf("do you want to continue? if yes enter y\n");
    scanf("%s",&c);
    if (c=='y')
    goto menu;
    else
    break;
  case 3:
    printf("\nYou have selected Cold coffee.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=15;
    total=qty*rate;
    printf("\nTotal amount :%d\n",total);
    printf("do you want to continue? if yes enter y\n");
    scanf("%s",&c);
    if (c=='y')
    goto menu;
    else
    break;
  case 4:
    printf("\nYou have selected Milk shake.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=20;
    total=qty*rate;
    printf("\nTotal amount :%d\n",total);
    printf("do you want to continue? if yes enter y\n");
    scanf("%s",&c);
    if (c=='y')
    goto menu;
    else
    break;
  case 5:
    printf("\nYou have selected Stalc.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=15;
    total=qty*rate;
    printf("\nTotal amount :%d\n",total);
    printf("do you want to continue? if yes enter y\n");
    scanf("%s",&c);
    if (c=='y')
    goto menu;
    else
    break;
  default:
    printf("\nSorry Unavailable...%ds",a);
    break;
  
    
 }

return 0;
}