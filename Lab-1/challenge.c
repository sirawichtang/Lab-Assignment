#include <stdio.h>

int main(){
    printf("+----------------+--------+--------+\n");
    printf("|%-16s|%-8s|%-8s|\n", "name", "Score1", "Score2");
    printf("+----------------+--------+--------+\n");
    printf("|%-16s|%8d|%8d|\n", "Alice", 85, 90);
    printf("|%-16s|%8d|%8d|\n", "Bob", 78, 82);
    printf("|%-16s|%8d|%8d|\n", "Charlie", 92, 88);
    printf("+----------------+--------+--------+\n");
}