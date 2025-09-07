#include <stdio.h>
int main() {
    int total_seconds, hours, minutes, seconds;

    // Input total time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    // Calculate hours, minutes, and seconds
    hours = total_seconds / 3600;             // 1 hour = 3600 seconds
    total_seconds = total_seconds % 3600;     // Remaining seconds after calculating hours
    minutes = total_seconds / 60;             // 1 minute = 60 seconds
    seconds = total_seconds % 60;             // Remaining seconds after calculating minutes

    // Output the result in hours:minutes:seconds format
    printf("Time: %d hours %d minutes %d seconds\n", hours, minutes, seconds);

    return 0;
}
