#include <malloc.h>

#define TAG(message) printf("TAG: %s\n", message);
#define print(number) printf("%d\n", number);

int mod(int num, int module) {
    return (num > 0) ? num % module : (module + num) % module; 
}

char *shift(const char *message, int n, int displacements) {
    
    char *ciphermessage = malloc(sizeof(char) * n);
    int starting_point = (n - 1) - displacements;
    int i, index;

    for(i = starting_point; i < n; i++) {
        index = i - displacements;
        
        ciphermessage[index] = message[i];
    }

    for(i = 0; i < starting_point; i++) {
        index = i + displacements;
        print(index);
        ciphermessage[index] = message[i];
    }

    printf("%s\n", message);
    printf("%s\n", ciphermessage);

    return ciphermessage;
}