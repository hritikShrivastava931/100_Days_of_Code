#include <stdio.h>

int main() {
  
    enum Role { ADMIN = 1, USER, GUEST };
    
    const char *roleNames[] = { "ADMIN", "USER", "GUEST" };

    int numRoles = sizeof(roleNames) / sizeof(roleNames[0]);

    printf("Enum names and their values:\n");
    for (int i = 0; i < numRoles; i++) {
        printf("%s = %d\n", roleNames[i], i + 1); 
    }

    return 0;
}
