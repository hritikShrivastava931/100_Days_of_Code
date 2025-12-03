#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];

    printf("Enter date in dd/mm/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    date[strcspn(date, "\n")] = '\0';

    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strncpy(year, date + 6, 4);
    year[4] = '\0';

    char *monthStr;
    if (strcmp(month, "01") == 0) monthStr = "Jan";
    else if (strcmp(month, "02") == 0) monthStr = "Feb";
    else if (strcmp(month, "03") == 0) monthStr = "Mar";
    else if (strcmp(month, "04") == 0) monthStr = "Apr";
    else if (strcmp(month, "05") == 0) monthStr = "May";
    else if (strcmp(month, "06") == 0) monthStr = "Jun";
    else if (strcmp(month, "07") == 0) monthStr = "Jul";
    else if (strcmp(month, "08") == 0) monthStr = "Aug";
    else if (strcmp(month, "09") == 0) monthStr = "Sep";
    else if (strcmp(month, "10") == 0) monthStr = "Oct";
    else if (strcmp(month, "11") == 0) monthStr = "Nov";
    else if (strcmp(month, "12") == 0) monthStr = "Dec";
    else monthStr = "???";

    printf("Date in new format: %s-%s-%s\n", day, monthStr, year);

    return 0;
}
