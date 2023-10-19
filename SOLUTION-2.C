    #include <stdio.h>

    int main() {

    int integer;
    float floating;
    double doublePrecision;
    char character;
    
                                     // Read an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &integer);
    
                                      // Read a floating-point number from the user
    printf("Enter a floating-point number: ");
    scanf("%f", &floating);
    
                                      // Read a double-precision number from the user
    printf("Enter a double-precision number: ");
    scanf("%lf", &doublePrecision);
    
                                      // Read a character from the user (ignoring leading whitespace)
    printf("Enter a character: ");
    scanf(" %c", &character);

                                      // Print the values entered by the user
    printf("You entered: \n");
    printf("Integer: %d\n", integer);
    printf("Floating-point number: %f\n", floating);
    printf("Double-precision number: %lf\n", doublePrecision);
    printf("Character: %c\n", character);

    return 0;
}
