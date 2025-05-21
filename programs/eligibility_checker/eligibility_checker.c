#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{

    char first_name[20];
    char last_name[20];
    int age;
    int vision_test;
    char drivers_license;
    bool flag1 = true;
    char flag2;

    printf("WELCOME TO THE DRIVING ELIGIBILITY CHECKER! (Press Enter to proceed)");

    while (flag1)
    {
        while (getchar() != '\n');
        

        printf("\nFirst name: ");
        fgets(first_name, sizeof first_name, stdin);

        printf("Last name: ");
        fgets(last_name, sizeof last_name, stdin);

        printf("Age: ");
        scanf("%d", &age);

        printf("Vision test score (out of 100): ");
        scanf("%d", &vision_test);

        printf("Do you have a driver's license (y/n): ");
        scanf(" %c", &drivers_license);

        printf("\nResults\n");
        printf("\nFirst name: %s", first_name);
        printf("Last name: %s", last_name);
        printf("Age: %d\n", age);
        printf("Vision test scores: %d\n", vision_test);
        printf("Driver's license: %c\n", drivers_license);

        if (age >= 18 && vision_test > 80 && drivers_license == 'y')
        {
            printf("Driving eligibility status: Eligible\n");
        }
        else
        {
            printf("Driving eligibility status: Ineligible\n");
        }

        printf("\nDo you wish to continue the driving eligibility test? (y/n) ");
        scanf(" %c", &flag2);

        if (flag2 == 'n')
        {
            flag1 = false;
        }
    }

    printf("THANK YOU FOR TAKING THE TEST!\n");

    return 0;
}