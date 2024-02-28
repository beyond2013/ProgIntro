#include <stdio.h>

#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))
#define moveup()  printf("\033[1A"); // Move up 1 lines;
#define movedown() printf("\033[1B"); // Move down 1 lines;
#define moveright() printf("\033[1C"); // Move right 1 column;
#define moveleft() printf("\033[1D"); // Move left X column;
																		//
int main(void)
{
    int number;

    clear();
    printf(
        "Enter your number in the box below\n"
        "+-----------------+\n"
        "|                 |\n"
        "+-----------------+\n"
    );
    gotoxy(10, 3);
    scanf("%d", &number);
		printf("\n");
    return 0;
}
