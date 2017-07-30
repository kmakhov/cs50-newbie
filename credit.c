#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long cardnumber = 0;
    do
    {
    printf("Number : ");
    cardnumber = get_long_long();
    }
    while (cardnumber < 0);
    int count = 0;
    long long digits = cardnumber;
    while (digits > 0)
    {
        digits = digits/10;
        count++;
    }
    if ((count != 13) && (count != 15) && (count != 16))
    {
        printf("error\n");
    }
    int number[count];
    for (int i = 0; i < count; i++)
    {
        number[i] = cardnumber % 10;
        cardnumber = cardnumber / 10;
    }
    int firstnumber[count];
    for (int i = 1; i < count; i++)
    {
        firstnumber[i] = number[i];
    }
    
    for (int i = 1; i < count; i+=2)
    {
        number[i] = number[i] * 2;
    }
    int v = 0;
    int temp;
    if (count == 13)
    {
      for (int i = 0; i < count; i++)
      {
        temp = (number[i] % 10) + (number[i]/10 % 10);
        v = v + temp;
      }
      if (firstnumber[12] == 4 && v % 10 == 0)
      {
        printf("VISA\n");
      }
      else
      {
        printf("error\n");
      }
    }
    if (count == 15)
    {
      for (int i = 0; i < count; i++)
      {
        temp = (number[i] % 10) + (number[i]/10 % 10);
        v = v + temp;
      }
      if (firstnumber[14] == 3 && v % 10 == 0 && (firstnumber[13] == 4 || firstnumber[13] == 7))
      {
        printf("American Express\n");
      }
      else
      {
        printf("error\n");
      }
    }
    if (count == 16)
    {
      for (int i = 0; i < count; i++)
      {
        temp = (number[i] % 10) + (number[i]/10 % 10);
        v = v + temp;
      }
      if (firstnumber[15] == 4 && v % 10 == 0)
      {
        printf("VISA\n");
      }
      else if (firstnumber[15] == 5 && v % 10 == 0 && (firstnumber[14] == 1 || firstnumber[14] == 2 || firstnumber[14] == 3 || firstnumber[14] == 4 || firstnumber[14] == 5))
        {
            printf("MasterCard\n");
        }
      else
      {
        printf("error\n");
      }
    }
    return 0;
}
