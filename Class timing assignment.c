#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" Hikmatullah Khan (Roll No=15)");
    int monday,tuesday,wednesday,thursday,friday,saturday,sunday;
    printf("\nEnter number of week day(1-7)=");
    scanf("%d", &monday,tuesday,wednesday,thursday,friday,saturday,sunday);
    switch(monday,tuesday,wednesday,thursday,friday,saturday,sunday)
    {
    case 1:
        printf("Monday,""\nLacture (ICT)""\n prof Asfand yar"" \nclass timing:9:30 to 12:00 o'clock");
        break;
    case 2:
        printf("\nTuesday""\nLacture: prgramming fundamentals""\n Prof  Imran Ali,""\n Class timing: 9:30 to 12:00 o'clock");
        break;
    case 3:
        printf("\nWednesday""\nLacture:Applied Physics,""\n Sir Prof Shams Ullah,""\n Class timing: 9:30 to 12;00 o'clock");
        break;
    case 4:
        printf("\nThursday""\nLacture:English Comprehension""\n prof Mir Saddat,""\n Class timing: 9:30 to 12:00 o'clock ");
        break;
    case 5:
        printf("\nFriday""\n Lacture:Calculus And Analytical Geometry""\n Prof Naveed Shaikh,""\n Class Timing :9:30 to 12:00");
        break;
    case 6:
        printf("\nSaturday""\n Off");
        break;
    case 7:
        printf("\nSunday""Off");
        break;
    default:
        printf("Invalid input! please enter week number between 1-7.");
    }
    return 0;
}
