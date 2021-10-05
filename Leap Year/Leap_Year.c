#include <stdio.h>
//function---
/*int checkLeapFun(int yr)
{
    if((yr%4==0) && (yr%100!=0))
        return 0;
    else if(yr%400==0)
        return 0;
    else
        return 1;
}*/
int main()
{
    int yr;
    printf("\n Enter a Year: ");
    scanf("%d", &yr);
    if ((yr % 400 == 0) || (yr % 100 != 0 && yr % 4 == 0))
        printf("\n %d is a Leap Year", yr);
    else
        printf("\n %d is not a Leap Year", yr);
    
    
    // with function---
    /* int lORn = checkLeapFun(yr);
    if(lORn == 0)
            printf("It's a Leap Year");
        else
            printf("It's not a Leap Year");
    */
    return 0;
}
