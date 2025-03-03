// #include <stdio.h>
// int main ()
// {
//     printf("hello world\n");
//     printf("NAMAN SHARMA\n");
//     printf("CHITKARA UNIVERSITY");
//     return 0;
// }

// #include <stdio.h>
// int main ()
// {
//     printf("hello world\nNAMAN SHARMA\nCHITKARA UNIVERSITY");
//     return 0;
// }

// #include <stdio.h>
// int main ()
// {
//     printf("nn\n\nnn\n");
//     int x;
//     x = 20;
//     printf("%d" ,x);
//     x = 22;
//     printf("\n");
//     printf("%d" ,x);
//     x = x+5;
//     printf("\n"),
//     printf("%d" ,x);
//     x = x-13;
//     printf("\n");
//     printf("%d" ,x);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x = 20;
//     int y = 22;
//     printf("%d", x+y);
//     printf("\n");
//     printf("%d", x-y);
//     printf("\n");
//     printf("%d", x*y);
//     printf("\n ");
//     printf("%d", x/y);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int rows , cols;
//     // input fir the number of row and columns
//     printf("Enter the number of rows:");
//     scanf("%d" ,&rows);
//     printf("Enter the number of columns:");
//     scanf("%d" ,cols);
//     // Nested loops for multiplication table
//     printf("\n Multiplication Table:\n");
//     for (int i = 1; i<= rows; i++)
//     {
//         for (int j = 1; j<=cols; j++)
//         {
//             printf("%4d" ,i*j); //Print product with formatting
//         }
//         printf("\n"); // New line after each row
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int rows, cols;
    // Input for the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Nested loops for multiplication table
    printf("\nMultiplication Table:\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("%4d", i * j); // Print product with formatting
        }
        printf("\n"); // New line after each row
    }
    return 0;
}


