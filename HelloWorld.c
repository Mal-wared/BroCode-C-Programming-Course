#include <stdio.h>
#include <stdbool.h>

int main()
{
    // This is a comment
    /*
        This is a multiline
        comment

        escape sequence - character combinations of
        a backslash (\) followed by a letter or
        combination of digits
        \n = newline
        \t = tab
    */

    // use of tab and newline
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");

    // use of quotes in between quotation marks
    printf("\"I like Pizza\" - Abraham Lincoln probably\n");
    

    // variable =   Allocated space in memory to store a value
    //              We refer to a variable's name to access the stored value.
    //              That variable now behaves as if it was the value it contains.
    //              BUT we need to declare what type of data we are storing.

    // two steps are required for variables:
    // declaration + initialization

    int x;      //declaration
    x = 123;    //initialization
    int y = 321;  //declaration + initialization

    int age = 21;           //integer 
    float gpa = 2.05;       //floating point number
    char grade = 'C';       //single character
    char name[] = "Bro";    //array of characters

    printf("You are %d years old\n", age);
    printf("Hello %s\n", name);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);

    char a = 'C';   // single character %c
    char b[] = "Bro"; // array of characters %s
    float c = 3.14159; // 4 bytes (32 bits of precision) 6-7 digits %f
    double d = 3.14159; // 8 bytes (64 bits of precision) 15-16 digits %lf
    bool e = true; // 1 bytes (true or false) %d

    char f = 100; // 1 bytes (-128 to +127) %d or %c
    unsigned char g = 255; // 1 bytes (0 to +255) %d or %c

    short int h = 32767; // 2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535; // 2 bytes (0 to +65,535) %d

    int j = 2147483647; // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295L; // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615; // 8 bytes (0 to +18 quintillion) %llu

    return 0;
}


