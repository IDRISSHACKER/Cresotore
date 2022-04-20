#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user
{
    unsigned int id;
    char name[255];
    char email[255];
    char business[255];
};

typedef struct user user;

int main(void)
{

    user users[] = {
        {1, "Idriss", "idriss@gmail.com", "programmer"},
        {2, "Frank", "franck@gmail.com", "Menusier"},
        {3, "Carel", "carel@gmail.com", "School"}};

    unsigned int usersCount = 3;

    FILE *file = fopen("./users.txt", "w");

    for (unsigned int i = 0; i < usersCount; i++)
    {
        char currentUserPoint[] = "";

        *currentUserPoint = strcat(currentUserPoint, users[i].name);
        *currentUserPoint = strcat(currentUserPoint, users[i].email);
        *currentUserPoint = strcat(currentUserPoint, users[i].business);

        printf(">%s\n", currentUserPoint);
        fputs(currentUserPoint, file);
    }

    fclose(file);

    return 0;
}