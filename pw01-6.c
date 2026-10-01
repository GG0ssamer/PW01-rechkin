#include <stdio.h>

int main(void){

	const int days_in_year = 365, hours_in_day = 24, seconds_in_hour = 3600, ticks_in_second = 143;

	int age, years, days, hours, seconds, ticks;
    age = 27;
    years = age;
    days = years * days_in_year;
    hours = days * hours_in_day;
    seconds = hours * seconds_in_hour;
    ticks = seconds * ticks_in_second;

    printf("ticks: %d|hours: %d|days: %d|years: %d\n", ticks, hours, days, years);

    return 0;
}