#include <stdio.h>
#include <stdlib.h>
#include <string.h>   

#define LEN 10

struct Student {
    char famil[20];
    char name[20];
    char facult[20];
    int n_zach;
};

int main(void) {
    struct Student stds[LEN] = {
        {"ivanov",    "petr",  "math",     111111},
        {"volosunin", "egor",  "ivt",      222222},
        {"kashkin",   "ilia",  "ivt",      333333},
        {"andreeva",  "anna",  "biology",  444444},
        {"ivanov",    "oleg",  "math",     555555},
        {"volosunin", "egor",  "ivt",      666666},
        {"kashkin",   "ilia",  "ivt",      777777},
        {"andreeva",  "anna",  "biology",  888888},
        {"kashkin",   "petr",  "math",     111111},
        {"volosunin", "egor",  "ivt",      222222}
    };

    struct Student ss;

    printf("введите параметры для поиска или 0 для игнорирования параметра:\n");
    printf("фамилия: ");
    scanf("%19s", ss.famil);
    printf("имя: ");
    scanf("%19s", ss.name);
    printf("факультет: ");
    scanf("%19s", ss.facult);
    printf("номер зачетки: ");
    scanf("%d", &ss.n_zach);

    printf("совпадения: \n");

    for (int i = 0; i < LEN; ++i) {
        if ((ss.famil[0] == '0' || strcmp(ss.famil, stds[i].famil) == 0) &&
            (ss.name[0]  == '0' || strcmp(ss.name,  stds[i].name)  == 0) &&
            (ss.facult[0]== '0' || strcmp(ss.facult,stds[i].facult)== 0) &&
            (ss.n_zach   == 0   || ss.n_zach == stds[i].n_zach)){
            printf("%s %s %s %d\n",
                   stds[i].famil, stds[i].name,
                   stds[i].facult, stds[i].n_zach);
        }
    }
}
