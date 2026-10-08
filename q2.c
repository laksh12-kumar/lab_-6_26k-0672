#include <stdio.h>
int main() {
    char passwords[5][20];
    for(int i=0;i<5;i++){
        printf("Enter the password:");
        scanf("%s",passwords[i]);
    }
    int scores[5];
    int strongest = 0;
    int below10 = 0;
    for (int i=0;i<5;i++){
        int score = 0;
        int length = 0;
        for (int j=0; passwords[i][j]!='\0';j++) {
            length++;
            if (passwords[i][j] >= 'a' && passwords[i][j] <= 'z')
                score += 1;
            else if (passwords[i][j] >= 'A' && passwords[i][j] <= 'Z')
                score += 2;
            else if (passwords[i][j] >= '0' && passwords[i][j] <= '9')
                score += 3;
        }
        if (length>=8)
            score += 5;
        for (int j=0; passwords[i][j]!='\0';j++) {
            if (passwords[i][j] == '1' &&
                passwords[i][j+1] == '2' &&
                passwords[i][j+2] == '3') {
                score -= 3;
                break;
            }
        }
        scores[i] = score;
        printf("%s = %d\n", passwords[i], score);
        if (scores[i] > scores[strongest])
            strongest = i;
        if (score < 10)
            below10++;
    }
    printf("\nStrongest Password: %s\n", passwords[strongest]);
    printf("Strongest Score: %d\n", scores[strongest]);
    printf("Passwords below 10: %d\n", below10);
    return 0;
}