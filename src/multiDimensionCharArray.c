#include <stdio.h>

int main()
{
    // Understanding dimesions in char array
    // char grade='A';

    char name[] = "Furqan";
    /*printf("%c", name[0]);
    printf("\n");
    printf("%s", name);
  */
    char student[][7] = {"Furqan", "Sami", "Khizar", "Abid"};
    for (size_t i = 0; i < 4; i++)
        printf("%s\n", student[i]);

    // char studInfo[5][10][20]=   {{"Furqan", "Info of Furqran"},

    /*const char Info[5][10][30] = {{"Quetta", "Capital of Balochistan"},
                                  {"Karachi", "Capital of Sindh"},
                                  {"Peshawar", "Capital of KPK"},
                                  {"Lahore", "Capital of Punjab"},
                                  {"Islamabad", "Capital of Pakistan"}};
    printf("%-10s|%-30s", "City", "Info");
    printf("\n");
    printf("%-10s|%-30s\n", "==========", "=======================");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%-10s|%-30s\n", Info[i][0], Info[i][1]);
    }
*/
    return 0;
}
