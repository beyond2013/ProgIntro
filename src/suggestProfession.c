#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *suggestProfession(char name[])
{
    srand(time(NULL));
    int choice = rand() % 5;

    static char professions[10][30] = {"Teacher", "Doctor", "Software Engineer", "Programmer", "Web developer", "Nursing", "Graphic Designer", "Entrepreneur"};

    return professions[choice];
}
char *suggestlanguage(char name)
{
    srand(time(NULL));
    int choice = rand() % 5;
    static char language[10][30] = {"Punjabi", "Pashto", "Balochi", "Urdu", "Balti", "Seraiki", "Sindhi", "Farsi", "English", "German"};

    return language[choice];
}
char suggestethnicities(char name)
{
    srand(time(NULL));
    int choice = rand() % 5;

    static char ethnicities[10][30] = {"Punjabi", "Pathan", "Baltistani", "Persian", "Hindustani", "Baloch", "Sindhi", "Seraiki"};

    return ethnicities[choice];
}
char suggestdiet(char name)
{
    srand(time(NULL));
    int choice = rand() % 5;

    static char diet[10][30] = {"Mediterranean", "Vegetarian", "Dash", "Flexitarian", "Ornish", "Pescatarian", "Dubrow"};

    return diet[choice];
}
char suggestdresscodes(char name)
{
    srand(time(NULL));
    int choice = rand() % 5;

    static char dresscodes[10][30] = {"Casual", "Smart casual", "Business casual", "Formal", "Festive", "Informal wear", "Suit", "Cocktail", "White tie", "Black tie"};

    return dresscodes[choice];
}
int suggestluckynumber(char name[])

{
    int hash = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        hash += name[i];
    }
    srand(hash);
    return (rand() % 19) + 1;
}
int main()
{
    char name[50], fathername[50];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter your father name: ");
    fgets(fathername, sizeof(fathername), stdin);
    fathername[strcspn(fathername, "\n")] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    srand(time(NULL));

    char firstletter = name[0];
    char personalitytraits;
    switch (toupper(firstletter))
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        personalitytraits = "outgoing", "optimistics", "creative";
        break;
    case 'B':
    case 'F':
    case 'M':
    case 'K':
    case 'V':
        personalitytraits = "Practical", "reliable", "loyal";
        break;
    case 'C':
    case 'P':
    case 'G':
    case 'S':
    case 'Q':
        personalitytraits = "Conscientiou", "analytical", "detailed-oriented";
        break;
    case 'D':
    case 'H':
    case 'L':
    case 'R':
    case 'T':
        personalitytraits = "Decisive", "independent", "ambitious";
        break;
    case 'N':
    case 'W':
    case 'Z':
    case 'J':
    case 'Y':
        personalitytraits = "Cooperative", "adaptable", "empathetic";
        break;

    default:
        personalitytraits = "Unique and multifaceted";
    }

    printf("-Profession: %s\n", suggestprofession(name));
    printf("-Language: %s\n", suggestlanguage(name));
    printf("-Diet: %s\n", suggestdiet(name));
    printf("-Dresscodes: %s\n", suggestdresscodes(name));
    printf("-Lucky Number: %d\n", suggestluckynumber(name));

    char password[10];
    for (int i = 0; i < sizeof(password) - 1; i++)
    {
        password[i] = rand() % 26 + 'a';
    }
    password[sizeof(password) - 1] = '\0';
    printf("Generated password: %s\n", password);

    return 0;
}