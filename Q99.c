#include <stdio.h>

int main()
{
    int dd, mm, yyyy;

    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    char *months[] = {
        "",
        "Jan","Feb","Mar","Apr",
        "May","Jun","Jul","Aug",
        "Sep","Oct","Nov","Dec"
    };

    printf("%02d-%s-%d",
           dd,
           months[mm],
           yyyy);

    return 0;
}
