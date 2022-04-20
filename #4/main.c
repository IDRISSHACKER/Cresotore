#include <stdio.h>
#include <string.h>
typedef enum bool
{
    OUI,
    NON,
    UNDEFINED
} bool;

struct user
{
    unsigned int id;
    char name[256];
    char email[256];
};

typedef struct user user;

void fetch(user *users, unsigned int size)
{
    unsigned int counter;

    for (counter = 0; counter < size; counter++)
    {
        printf("%d) %s-> %s \n", users[counter].id, users[counter].name, users[counter].email);
    }
}

int main(void)
{
    bool start = UNDEFINED;

    user users[] = {
        {1, "Hacker", "hackeur@gmail.com"},
        {2, "Carel", "carel@gmail.com"},
        {3, "Bernadette", "bernadette@gmail.com"},
        {4, "Djanfang", "djanfang@gmail.com"}};

    fetch(users, 4);

    FILE *lorem = fopen("./ih.txt", "w");

    // char lettre = fgetc(lorem);

    // do
    //{
    //     printf("%c", lettre);
    //     lettre = fgetc(lorem);
    // } while (lettre != EOF);
    char hacker[] = "Salut Hacker Comment vas tu ?";
    fputs(hacker, lorem);

    fclose(lorem);

    return 0;
}