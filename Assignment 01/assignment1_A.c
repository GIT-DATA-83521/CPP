#include <stdio.h>

typedef struct Date
{
    int day;
    int month;
    int year;

}DATE;

void initDate(DATE *ptrDate)
{
    ptrDate->day=00;
    ptrDate->month=00;
    ptrDate->year=00;
    printf("the initial date is=%d:%d:%d",ptrDate->day,ptrDate->month,ptrDate->year);


}

void acceptDate(DATE *ptrDate)
{
    printf("Enter the Date= DD:MM:YY");
    scanf("%d%d%d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
}

void printDate(DATE *ptrDate)
{
    printf("the date is= %d:%d:%d",ptrDate->day,ptrDate->month,ptrDate->year);


}


int main()
{
    DATE d1;
    
    
    int choice;
do
{
    printf("\n0- EXIT\n");
    printf("1- Initial Date\n");
    printf("2- Accept and Display the DATE\n");
    printf("Enter the Choice : \n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 0:
            
        printf("thank you...");
        break;

    case 1:
    initDate(&d1);
        break;

    case 2:
        acceptDate(&d1);
        printDate(&d1);
        break;
    default:
    printf("Please enter the Correct Choice");
        break;
    }

} while (choice !=0);

    return 0;
}
