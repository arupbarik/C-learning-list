/*
 * ============================================================
 *   COMPLETE C PROGRAMS — Arrays, Strings, Structures
 * ============================================================
 */
 
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
/* ============================================================
 *  ARRAY SECTION
 * ============================================================ */
 
/* ----------------------------------------------------------
 * Q1. Merge two unsorted arrays
 * ---------------------------------------------------------- */
void array_q1() {
    printf("\n=== Array Q1: Merge Two Unsorted Arrays ===\n");
    int a[] = {5, 2, 8, 1}, b[] = {7, 3, 6, 4};
    int n1 = 4, n2 = 4;
    int merged[8];
    for (int i = 0; i < n1; i++) merged[i] = a[i];
    for (int i = 0; i < n2; i++) merged[n1 + i] = b[i];
    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) printf("%d ", merged[i]);
    printf("\n");
}
 
/* ----------------------------------------------------------
 * Q2. Sort array in ascending and descending order (Bubble Sort)
 * ---------------------------------------------------------- */
void array_q2() {
    printf("\n=== Array Q2: Sort Ascending & Descending ===\n");
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5, temp;
 
    /* Ascending */
    int a[5];
    for (int i = 0; i < n; i++) a[i] = arr[i];
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j+1]) { temp = a[j]; a[j] = a[j+1]; a[j+1] = temp; }
    printf("Ascending:  ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
 
    /* Descending */
    for (int i = 0; i < n; i++) a[i] = arr[i];
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] < a[j+1]) { temp = a[j]; a[j] = a[j+1]; a[j+1] = temp; }
    printf("\nDescending: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}
 
/* ----------------------------------------------------------
 * Q3. Merge two sorted arrays
 * ---------------------------------------------------------- */
void array_q3() {
    printf("\n=== Array Q3: Merge Two Sorted Arrays ===\n");
    int a[] = {1, 3, 5, 7}, b[] = {2, 4, 6, 8};
    int n1 = 4, n2 = 4;
    int merged[8];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
        merged[k++] = (a[i] <= b[j]) ? a[i++] : b[j++];
    while (i < n1) merged[k++] = a[i++];
    while (j < n2) merged[k++] = b[j++];
    printf("Merged sorted array: ");
    for (int x = 0; x < n1 + n2; x++) printf("%d ", merged[x]);
    printf("\n");
}
 
/* ----------------------------------------------------------
 * Q4. Find duplicates and print their frequency
 * ---------------------------------------------------------- */
void array_q4() {
    printf("\n=== Array Q4: Duplicates and Frequency ===\n");
    int arr[] = {1, 2, 3, 2, 4, 3, 5, 3};
    int n = 8;
    int visited[8];
    for (int i = 0; i < n; i++) visited[i] = 0;
 
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) { count++; visited[j] = 1; }
        }
        if (count > 1)
            printf("Element %d appears %d times\n", arr[i], count);
    }
}
 
/* ----------------------------------------------------------
 * Q5. Read and print a 2D array
 * ---------------------------------------------------------- */
void array_q5() {
    printf("\n=== Array Q5: 2D Array ===\n");
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("2D Array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) printf("%4d", mat[i][j]);
        printf("\n");
    }
}
 
/* ----------------------------------------------------------
 * Q6. Find saddle point in a 2D array
 *     (Smallest in row, largest in column)
 * ---------------------------------------------------------- */
void array_q6() {
    printf("\n=== Array Q6: Saddle Point ===\n");
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3, cols = 3, found = 0;
 
    for (int i = 0; i < rows; i++) {
        /* Find minimum in row i */
        int minVal = mat[i][0], minCol = 0;
        for (int j = 1; j < cols; j++)
            if (mat[i][j] < minVal) { minVal = mat[i][j]; minCol = j; }
 
        /* Check if it's maximum in that column */
        int isMax = 1;
        for (int k = 0; k < rows; k++)
            if (mat[k][minCol] > minVal) { isMax = 0; break; }
 
        if (isMax) {
            printf("Saddle point: mat[%d][%d] = %d\n", i, minCol, minVal);
            found = 1;
        }
    }
    if (!found) printf("No saddle point found.\n");
}
 
/* ----------------------------------------------------------
 * Q7. Addition and subtraction of two 2D arrays
 * ---------------------------------------------------------- */
void array_q7() {
    printf("\n=== Array Q7: 2D Array Addition & Subtraction ===\n");
    int A[2][2] = {{1,2},{3,4}}, B[2][2] = {{5,6},{7,8}};
    int add[2][2], sub[2][2];
 
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            add[i][j] = A[i][j] + B[i][j];
            sub[i][j] = A[i][j] - B[i][j];
        }
 
    printf("Addition:\n");
    for (int i = 0; i < 2; i++) { for (int j = 0; j < 2; j++) printf("%4d", add[i][j]); printf("\n"); }
    printf("Subtraction:\n");
    for (int i = 0; i < 2; i++) { for (int j = 0; j < 2; j++) printf("%4d", sub[i][j]); printf("\n"); }
}
 
/* ----------------------------------------------------------
 * Q8. Transpose of a matrix
 * ---------------------------------------------------------- */
void array_q8() {
    printf("\n=== Array Q8: Transpose of a Matrix ===\n");
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int trans[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) trans[j][i] = mat[i][j];
    printf("Transpose:\n");
    for (int i = 0; i < 3; i++) { for (int j = 0; j < 3; j++) printf("%4d", trans[i][j]); printf("\n"); }
}
 
/* ----------------------------------------------------------
 * Q9. Matrix multiplication
 * ---------------------------------------------------------- */
void array_q9() {
    printf("\n=== Array Q9: Matrix Multiplication ===\n");
    int A[2][3] = {{1,2,3},{4,5,6}};
    int B[3][2] = {{7,8},{9,10},{11,12}};
    int C[2][2] = {{0}};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 3; k++) C[i][j] += A[i][k] * B[k][j];
    printf("Result (2x2):\n");
    for (int i = 0; i < 2; i++) { for (int j = 0; j < 2; j++) printf("%6d", C[i][j]); printf("\n"); }
}
 
/* ----------------------------------------------------------
 * Q10. Sparse matrix representation
 *      Format: (row, col, value) for non-zero elements
 * ---------------------------------------------------------- */
void array_q10() {
    printf("\n=== Array Q10: Sparse Matrix Representation ===\n");
    int mat[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };
    int rows = 4, cols = 5;
    printf("Sparse representation (row, col, value):\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (mat[i][j] != 0)
                printf("(%d, %d, %d)\n", i, j, mat[i][j]);
}
 
 
/* ============================================================
 *  STRING SECTION
 * ============================================================ */
 
/* ----------------------------------------------------------
 * S1. Read text until '*', count characters
 * ---------------------------------------------------------- */
void string_q1() {
    printf("\n=== String Q1: Read Until '*' and Count Chars ===\n");
    char text[] = "Hello World*";   /* simulated input */
    int count = 0;
    printf("Text: ");
    for (int i = 0; text[i] != '*' && text[i] != '\0'; i++) {
        printf("%c", text[i]);
        count++;
    }
    printf("\nNumber of characters: %d\n", count);
}
 
/* ----------------------------------------------------------
 * S2. Count words, vowels, consonants, digits, spaces
 * ---------------------------------------------------------- */
void string_q2() {
    printf("\n=== String Q2: Count Words, Vowels, Consonants, Digits, Spaces ===\n");
    char sentence[] = "Hello World 123";
    int words = 0, vowels = 0, consonants = 0, digits = 0, spaces = 0;
    int inWord = 0;
    char v[] = "aeiouAEIOU";
 
    for (int i = 0; sentence[i] != '\0'; i++) {
        char c = sentence[i];
        if (c == ' ') { spaces++; inWord = 0; }
        else {
            if (!inWord) { words++; inWord = 1; }
            if (isdigit(c)) digits++;
            else if (isalpha(c)) {
                if (strchr(v, c)) vowels++;
                else consonants++;
            }
        }
    }
    printf("Sentence: \"%s\"\n", sentence);
    printf("Words: %d | Vowels: %d | Consonants: %d | Digits: %d | Spaces: %d\n",
           words, vowels, consonants, digits, spaces);
}
 
/* ----------------------------------------------------------
 * S3. Frequency of each character in a name
 * ---------------------------------------------------------- */
void string_q3() {
    printf("\n=== String Q3: Character Frequency in Name ===\n");
    char name[] = "Sagarika Sen";
    int freq[256] = {0};
    for (int i = 0; name[i] != '\0'; i++) freq[(unsigned char)name[i]]++;
    printf("Name: \"%s\"\n", name);
    for (int i = 0; i < 256; i++)
        if (freq[i] > 0 && i != ' ')
            printf("'%c' : %d\n", i, freq[i]);
}
 
/* ----------------------------------------------------------
 * S4. Length of name without library function
 * ---------------------------------------------------------- */
void string_q4() {
    printf("\n=== String Q4: Length Without Library Function ===\n");
    char name[] = "Sagarika Sen";
    int len = 0;
    while (name[len] != '\0') len++;
    printf("Name: \"%s\"\nLength: %d\n", name, len);
}
 
/* ----------------------------------------------------------
 * S5. Compare two strings without library function
 * ---------------------------------------------------------- */
void string_q5() {
    printf("\n=== String Q5: Compare Strings Without Library Function ===\n");
    char s1[] = "Hello", s2[] = "Hello";
    int i = 0, result = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) { result = s1[i] - s2[i]; break; }
        i++;
    }
    if (result == 0) result = s1[i] - s2[i];
    if (result == 0)      printf("\"%s\" == \"%s\" (strings are equal)\n", s1, s2);
    else if (result < 0)  printf("\"%s\" < \"%s\"\n", s1, s2);
    else                  printf("\"%s\" > \"%s\"\n", s1, s2);
}
 
/* ----------------------------------------------------------
 * S6. Reverse a string without library function; check palindrome
 * ---------------------------------------------------------- */
void string_q6() {
    printf("\n=== String Q6: Reverse String & Palindrome Check ===\n");
    char str[] = "madam";
    int len = 0;
    while (str[len] != '\0') len++;
 
    /* Reverse */
    char rev[100];
    for (int i = 0; i < len; i++) rev[i] = str[len - 1 - i];
    rev[len] = '\0';
    printf("Original: %s\nReversed: %s\n", str, rev);
 
    /* Palindrome check */
    int isPalin = 1;
    for (int i = 0; i < len; i++)
        if (str[i] != rev[i]) { isPalin = 0; break; }
    printf("%s is %sa palindrome.\n", str, isPalin ? "" : "NOT ");
}
 
/* ----------------------------------------------------------
 * S7. Palindrome check (alternate approach using two pointers)
 * ---------------------------------------------------------- */
void string_q7() {
    printf("\n=== String Q7: Palindrome Check (Two-Pointer) ===\n");
    char str[] = "racecar";
    int l = 0, r = 0;
    while (str[r] != '\0') r++;
    r--;
    int isPalin = 1;
    while (l < r) {
        if (str[l] != str[r]) { isPalin = 0; break; }
        l++; r--;
    }
    printf("\"%s\" is %sa palindrome.\n", str, isPalin ? "" : "NOT ");
}
 
/* ----------------------------------------------------------
 * S8. Count 1-bits in a byte; set MSB based on parity
 * ---------------------------------------------------------- */
void string_q8() {
    printf("\n=== String Q8: Count 1s in Byte, Set MSB on Parity ===\n");
    unsigned char byte = 0b01101001;  /* example: 105 decimal */
    int count = 0;
    unsigned char tmp = byte;
    while (tmp) { count += (tmp & 1); tmp >>= 1; }
    printf("Original byte: %d (binary representation counted %d one-bits)\n", byte, count);
    if (count % 2 == 0)
        byte &= 0x7F;   /* clear MSB (set to 0) */
    else
        byte |= 0x80;   /* set MSB to 1 */
    printf("Modified byte: %d (MSB set to %d for %s parity)\n",
           byte, (count % 2 == 0) ? 0 : 1, (count % 2 == 0) ? "even" : "odd");
}
 
/* ----------------------------------------------------------
 * S9. Greet person with full name, first name, last name
 * ---------------------------------------------------------- */
void string_q9() {
    printf("\n=== String Q9: Greet Person ===\n");
    char fullName[] = "Sagarika Sen";
    char hello[]    = "Hello";
    char firstName[50], lastName[50];
 
    /* Extract first and last name */
    int i = 0, j = 0;
    while (fullName[i] != ' ' && fullName[i] != '\0') firstName[j++] = fullName[i++];
    firstName[j] = '\0';
    i++;  /* skip space */
    j = 0;
    while (fullName[i] != '\0') lastName[j++] = fullName[i++];
    lastName[j] = '\0';
 
    /* a) Full name */
    printf("a) %s %s\n", hello, fullName);
    /* b) First name */
    printf("b) %s %s\n", hello, firstName);
    /* c) Last name with Ms. */
    printf("c) %s Ms. %s\n", hello, lastName);
}
 
/* ----------------------------------------------------------
 * S10. Convert "GOOD MORNING" to "good morning"
 * ---------------------------------------------------------- */
void string_q10() {
    printf("\n=== String Q10: Convert to Lowercase ===\n");
    char str[] = "GOOD MORNING";
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
    printf("Converted: %s\n", str);
}
 
/* ----------------------------------------------------------
 * S11. Append in format: "GOOD MORNING" -> "GOOD MORNING MORNING GOOD"
 * ---------------------------------------------------------- */
void string_q11() {
    printf("\n=== String Q11: Append String in Special Format ===\n");
    char str[] = "GOOD MORNING";
    char word1[50], word2[50];
    int i = 0, j = 0;
 
    while (str[i] != ' ' && str[i] != '\0') word1[j++] = str[i++];
    word1[j] = '\0';
    i++;  j = 0;
    while (str[i] != '\0') word2[j++] = str[i++];
    word2[j] = '\0';
 
    printf("Result: %s %s %s %s\n", word1, word2, word2, word1);
}
 
 
/* ============================================================
 *  STRUCTURE SECTION
 * ============================================================ */
 
/* ----------------------------------------------------------
 * Struct Q1. Student structure with 5 subject marks
 * ---------------------------------------------------------- */
struct Student {
    char branch[50];
    char name[50];
    int rollno;
    float marks[5];
};
 
void struct_q1() {
    printf("\n=== Structure Q1: Student Array ===\n");
    struct Student students[3] = {
        {"CSE", "Alice",   101, {85, 90, 78, 92, 88}},
        {"ECE", "Bob",     102, {70, 65, 80, 75, 60}},
        {"ME",  "Charlie", 103, {55, 60, 72, 68, 74}}
    };
    int n = 3;
 
    for (int i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Name   : %s\n", students[i].name);
        printf("Branch : %s\n", students[i].branch);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Marks  : ");
        for (int j = 0; j < 5; j++) printf("%.1f ", students[i].marks[j]);
        printf("\n");
    }
}
 
/* ----------------------------------------------------------
 * Struct Q2. Cricket player with highest batting average
 * ---------------------------------------------------------- */
struct Cricket {
    char playerName[50];
    char teamName[50];
    float battingAverage;
};
 
void struct_q2() {
    printf("\n=== Structure Q2: Highest Batting Average ===\n");
    struct Cricket players[5] = {
        {"Virat Kohli",   "India",     58.5},
        {"Steve Smith",   "Australia", 62.1},
        {"Joe Root",      "England",   51.3},
        {"Kane Williamson","New Zealand",54.9},
        {"Babar Azam",    "Pakistan",  44.8}
    };
    int n = 5, maxIdx = 0;
    for (int i = 1; i < n; i++)
        if (players[i].battingAverage > players[maxIdx].battingAverage)
            maxIdx = i;
 
    printf("Player with highest batting average:\n");
    printf("Name   : %s\n", players[maxIdx].playerName);
    printf("Team   : %s\n", players[maxIdx].teamName);
    printf("Average: %.2f\n", players[maxIdx].battingAverage);
}
 
 
/* ============================================================
 *  MAIN — runs all programs in sequence
 * ============================================================ */
int main() {
    printf("=====================================================\n");
    printf("   COMPLETE C PROGRAMS: Arrays, Strings, Structures\n");
    printf("=====================================================\n");
 
    /* --- Arrays --- */
    array_q1();
    array_q2();
    array_q3();
    array_q4();
    array_q5();
    array_q6();
    array_q7();
    array_q8();
    array_q9();
    array_q10();
 
    /* --- Strings --- */
    string_q1();
    string_q2();
    string_q3();
    string_q4();
    string_q5();
    string_q6();
    string_q7();
    string_q8();
    string_q9();
    string_q10();
    string_q11();
 
    /* --- Structures --- */
    struct_q1();
    struct_q2();
 
    return 0;
}
 