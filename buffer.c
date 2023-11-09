#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {


        char buffer [10];

        printf ("Inserisci il tuo alias:");
        scanf ("%s", buffer);

        int len = strlen(buffer);

        if (len >= sizeof(buffer)) {
            printf("Overflow del buffer: i caratteri in eccesso sono stati scritti in memoria a partire da: %p\n", buffer + sizeof(buffer) - len);
        }

        printf ("Alias inserito: %s\n", buffer);

        return 0;


}
