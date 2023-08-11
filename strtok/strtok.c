#include <stdio.h>
#include <string.h>

char *mystrtok(char *str, char *ifade) {
    static char *item = NULL;
    if (str != NULL) {
        item = str;
    }

    if (item == NULL || *item == '\0') {
        return NULL;
    }

    char *start_item = item;
    
    while (*item != '\0') {
        if (strchr(ifade, *item) != NULL) {
            *item = '\0';
            item++;
            break;
        }
        item++;
    }

    return start_item;
}

int main() {
    char dizi[] = "These codes are creating the Strtok function.";
    char ifade[] = " ";
    char *token = mystrtok(dizi, ifade);

    while (token != NULL) {
        printf("%s\n", token);
        token = mystrtok(NULL, ifade);
    }

    return 0;
}
