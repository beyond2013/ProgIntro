#include <stdio.h>

int main(int argc, char *argv[])
{
	int amount = 0, units_consumed = 0;

	printf("Enter amount of units consumed\t");
	scanf("%d", &units_consumed);

	if (units_consumed > 0 && units_consumed <= 100)
	{
		amount = 3 * units_consumed;
	}
	else if (units_consumed > 100 && units_consumed <= 200)
	{
		amount = 3 * 100 + 4 * (units_consumed - 100);
	}
	else if (units_consumed > 200 && units_consumed <= 300)
	{
		units_consumed -= 100;
		amount += 3 * 100;
		units_consumed -= 100;
		amount += 4 * 100;
		amount += units_consumed * 5;
	}

	printf("\nYou have to pay %d Rupees\n", amount);
	return 1;
}
