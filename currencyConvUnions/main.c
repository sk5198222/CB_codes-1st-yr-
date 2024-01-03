#include <stdio.h>

union Temperature{
    float celsius;
    float fahrenheit;
} temp;

int main() {
    temp.celsius = 25;
    printf("Temperature in Celsius: %.2f\n", temp.celsius);
    // Conversion from Celsius to Fahrenheit
    temp.fahrenheit = (temp.celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", temp.fahrenheit);

    return 0;
}

/*#include <stdio.h>

union employees{
    int employeeID;
    char employeeName[50];
    char department[50];
} employee1,employee2;

int main() {
    printf("Employee 1\n");
    strcpy(employee1.department, "Engineering");
    printf("Department: %s\n", employee1.department);
    employee1.employeeID = 12345;
    printf("Employee ID: %d\n", employee1.employeeID);
    strcpy(employee1.employeeName, "Jhony Sins");
    printf("Employee Name: %s\n", employee1.employeeName);

    printf("\nEmployee 2\n");
    strcpy(employee2.department, "Marketing");
    printf("Department: %s\n", employee2.department);
    employee2.employeeID = 12346;
    printf("Employee ID: %d\n", employee2.employeeID);
    strcpy(employee2.employeeName, "John Doe");
    printf("Employee Name: %s\n", employee2.employeeName);
    return 0;
}*/

/*#include <stdio.h>

union Currency{
    float dollars;
    float euros;
    float pounds;
} amount;

int main() {
    amount.dollars = 100;
    printf("Amount in dollars: %.2f\n", amount.dollars);
    // Conversion rates as of September 2021
    amount.euros = amount.dollars * 0.84;
    printf("Amount in euros: %.2f\n", amount.euros);
    amount.pounds = amount.dollars * 0.72;
    printf("Amount in pounds: %.2f\n", amount.pounds);

    return 0;
}*/


/*#include <stdio.h>

union Time{
    unsigned int seconds;
    unsigned int hours;
    unsigned int minutes;
    unsigned int secs;
    struct{
        unsigned int sec;
    }rem;
} time;

int main() {
    time.seconds = 7265; // 2 hours, 1 minute, 5 seconds
    printf("%u seconds into Hours and mintues\n",time.seconds);
    time.rem.sec=(time.seconds%3600);
    time.hours=(time.seconds/3600);
    printf("\n %u hours ",time.hours);
    time.rem.sec=(time.rem.sec%60);
    time.minutes=(time.rem.sec/60);
    printf("\n %u minutes ",time.minutes);
    printf("\n %u seconds ",time.rem.sec);
    return 0;
}*/







