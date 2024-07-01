#include "main.h"

/**
 * main - Determine if a number is postitive, negative or zero.
 * 0; This is the test case.
 * Return; 0 on success.
 */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;

}
