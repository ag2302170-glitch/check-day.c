#include <stdio.h>
int main ()
{
    int day;
    printf("enter a day(1-7)");
    scanf("%d",&day);
switch(day)
{
    case 1:
    printf("sunday");
    break;
      case 2:
    printf("monday");
    break;
     case 3:
    printf("Tuesday");
    break;
     case 4:
    printf("wednesday");
    break;
     case 5:
    printf("Thurday");
    break;
     case 6:
    printf("friday");
    break;
     case 7:
    printf("Saturday");
    break;
    default:
    printf("invalid Input");
}    
return 0;
    
}