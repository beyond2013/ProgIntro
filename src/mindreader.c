#include<stdio.h>
#include<locale.h>
#include<wchar.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");
    
    wchar_t symbols[] = {
      L'\u2660', L'\u2663', L'\u2665', L'\u2666', L'\u2667', // Suits
      L'\u2605', L'\u260E', L'\u2714', L'\u2716', L'\u2718', // Stars and Checkmarks
      L'\u263A', L'\u263B', L'\u25BC', L'\u25B2', L'\u25E6', // Arrows
      L'\u2691', L'\u269C', L'\u26A1', L'\u26BD', L'\u26C4'  // Musical symbols
  };

  for (int i = 0; i < sizeof(symbols) / sizeof(symbols[0]); i++) {
    wprintf(L"Symbol %d: %lc\n", i + 1, symbols[i]);
  }


/*    char symbol[100];

    for(int i=32; i<=126; i++)
    {
        printf("%c\t",i);
        if(i%10==0) printf("\n");
    }
*/
    return 0;
}
