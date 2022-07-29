#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-This program will assign a random number to the variable n
 *Description: This will print the number stored in n and say if it's positive,
 *negative, or zero.
 *Return: 0
 */

void positive_or_negative(int i)
{

if (i > 0)
{
printf("%d is positive\n", i);

}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}


}
