#include <stdio.h>

// Number one
int log10_f (int x) {
    int i = 0;
    while (x > 0) {
        x /= 10;
        i++;
    }
    return i;
}

// Number two
int floor_f (float x) {
    return (int) x;
}

// Number three
int ceil_f (float x) {
    return (int) x + 1;
}

// Number four
int alphanumeric (char x) {
    if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z' || x >= '0' && x <= '9')) {
        return 1;
    }
    else {
        return 0;
    }
}

// Number five
int alphabetic (char x) {
    if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) {
        return 1;
    }
    else {
        return 0;
    }
}

// Number six
int char_cap (char x) {
    if (x >= 'A' && x <= 'Z') {
        return 1;
    }
    else {
        return 0;
    }
}

// Number seven
int string_cap (char x) {
    if (x >= 'a' && x <= 'z') {
        return 1;
    }
    else {
        return 0;
    }
}

// Number eight
int uppercase (char x) {
    if (x >= 'a' && x <= 'z') {
        return x - 32;
    }
    else {
        return x;
    }
}

// Number nine
int lowercase (char x) {
    if (x >= 'A' && x <= 'Z') {
        return x + 32;
    }
    else {
        return x;
    }
}

// Number ten
int punctuation (char x) {
    if (x == '.' || x == ',' || x == '?' || x == '!' || x == ':' || x == ';') {
        return 1;
    }
    else {
        return 0;
    }
}

// Number eleven
int string_to_int (char* string) {
    int i;
    int result = 0;
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] >= '0' && string[i] <= '9') {
            result = result * 10 + (string[i] - '0');
        }     
    }
    return result;
}

// Number twelve
double string_to_double (char* string) {
    int i;
    double result = 0;
    int point_seen = 0;
    double deci_factor = 1.00;
    int decimal_count = 0;
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] >= '0' && string[i] <= '9') {
            if (!point_seen) {
                result = result * 10 + (string[i] - '0');
            }
            else {
                if (decimal_count < 4) {
                    deci_factor /= 10.0;
                    result = result + deci_factor * (string[i] - '0');
                    decimal_count++;
                }
                else {
                    break;
                }
            }
        } 
        else if (string[i] == '.' && !point_seen) {
            point_seen = 1;
        } else {
            break;
        }
    }
    return result;
}

// Number thirteen
int proper_float_f (char* string) {
    int i;
    int points_seen = 0;
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == '.') {
            points_seen++;
        }
    }
    if (points_seen == 1 || points_seen == 0) {
        return 1;
    }
    else {
        return 0;
    }  
} 

// Number fourteen
int absoulute_value (int x) {
    if (x < 0) {
        return x * -1;
    }
    else {
        return x;
    }
}

// Number fifteen
void string_copy (char* string1, char* string2) {
    int i;
    for (i = 0; string1[i] != '\0'; i++) {
        string2[i] = string1[i];
    }
    string2[i] = '\0';
}

// Number sixteen
int is_substring (char* string1, char* string2) {
    int i,j;
    for (i = 0; string1[i] != '\0'; i++) {
        if (string1[i] == string2[0]) {
            for (j = 0; string2[j] != '\0'; j++) {
                if (string1[i + j] != string2[j]) {
                    return 0;
                }
            }
            if (string2[j] == '\0') {
                return 1;
            }
        }
    }
    return 0;
}

// Number seventeen
int same_string (char* string1, char* string2) {
    int i, sum_ascii_one = 0, sum_ascii_two = 0, different_string = 0;
    for (i = 0; string1[i] != '\0'; i++) {
        if (string1[i] != string2[i]) {
            different_string = 1;
        }
    }
    if (different_string) {
        for (i = 0; string1[i] != '\0'; i++) {
            sum_ascii_one += string1[i];
        }
        for (i = 0; string2[i] != '\0'; i++) {
            sum_ascii_two += string2[i];
        }
    }
    if (different_string == 0) {
        return 1;
    }
    else if (sum_ascii_one < sum_ascii_two) {
        return 2;
    }
    else {
        return 3;
    }
}

// Number eighteen
void camel_case (char* string) {
    int i, counter = 1;
    for (i = 0; string[i] != '\0'; i++) {
        if (counter%2 == 0) {
            string[i] = uppercase(string[i]);
        }
        
        if (string[i] != ' ') {
         counter++;   
        }
    }
}

//Number nineteen
void string_reverse (char* string) {
    int i, j, string_length = 0;
    char temp;
    while (string[string_length] != '\0') {
        string_length++;
    }
    i = string_length - 1;
    for (j = 0; j < i; j++) {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
        i--;
    }
}

//Number twenty
int reverse_int (int x) {
    int reverse = 0;
    while (x != 0) {
        reverse = reverse * 10 + x % 10;
        x /= 10;
    }
    return reverse;
}

int main() {
    int x;
    int z = -12355;
    float y = 12.9;
    char c_input;
    char p_input;
    char c_int_input[50];
    char c_double_input[50];
    char c_string_input[50] = {"Hello World"};
    char c_string_destination[50];
    char parent_string[50] = {"university"};
    char child_string[50] = {"uni"};
    char same_string_one[50] = {"universe"};
    char same_string_two[50] = {"galaxy"};
    char camel_string[100] = {"we assume that the first character of the string is always in lowercase"};

    scanf("%d %c %c %s %s", &x, &c_input, &p_input, c_int_input, c_double_input);

    printf("Log base 10 is:%d \n",log10_f(x));

    printf("Floor is:%d \n",floor_f(y));

    printf("Ceiling is:%d \n",ceil_f(y));

    printf("Uppercase:%c \n",uppercase(c_input));

    printf("Lowercase:%c \n",lowercase(c_input));

    printf("String to int:%d \n",string_to_int(c_int_input));

    printf("String to double:%.4f \n",string_to_double(c_double_input));

    printf("Absolute value:%d \n",absoulute_value(z));
    
    string_copy(c_string_input, c_string_destination);
    printf("String copy one:%s \n", c_string_destination);
    string_copy(c_string_destination, c_string_input);
    printf("String copy two:%s \n", c_string_input);

    printf("Alphanumeric:");
    if (alphanumeric(c_input) == 1) {
        printf("YES \n");
    }
    else {
        printf("NO \n");
    }

    printf("Capitalized:");
    if (char_cap(c_input) == 1) {
        printf("YES \n");
    }
    else {
        printf("NO \n");
    }

    printf("Punctuation:");
    if (punctuation(p_input) == 1) {
        printf("YES \n");
    }
    else {
        printf("NO \n");
    }

    printf("Proper float:");
    if (proper_float_f(c_double_input) == 1) {
        printf("YES \n");
    }
    else {
        printf("NO \n");
    }

    printf("Is %s a substring of %s:", child_string, parent_string);
    printf(is_substring(parent_string, child_string) ? "YES \n" : "NO \n");

    printf("Is %s the same string as %s, \nif not which string has a higher ascii value:", same_string_one, same_string_two);

    switch (same_string(same_string_one, same_string_two)){
    case 1:
        printf("YES \n");
        break;
    case 2:
        printf("BEFORE \n");
        break;
    case 3:
        printf("AFTER \n");
        break;
    default:
        break;
    }

    camel_case(camel_string);
    printf("Camel case:%s \n", camel_string);

    string_reverse(camel_string);
    printf("String reverse:%s \n", camel_string);

    printf("Reverse int:%d \n", reverse_int(x));

    return 0;
}