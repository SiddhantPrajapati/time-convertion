#include<stdio.h>
int main(){
    char time[15] ,ans;
    int i = 0;
    printf("Enter time in 24 hour format:");
    scanf("%s",time);
    ans = convert(time);
    printf("%s",ans);
}
void convert(char* time){
    int h1 = (int)time[0] - '0';
    int h2 = (int)time[1] - '0';
     int hh = h1 * 10 + h2; // Calculate hour as an integer value
    char Meridien[2]; // Make the AM or PM array
    if (hh < 12) { // If the time is less than 12 hour it is AM
        Meridien[0] = 'A';
        Meridien[1] = 'M';
    }
    else {
        Meridien[0] = 'P'; // When the time is 24 hour it is PM
        Meridien[1] = 'M';
    }

    hh %= 12; // Calculate the 12 hour time

    // Handle 00 and 12 case separately
    if (hh == 0) {
        printf("12"); // Base format as 00 in 24-hour is 12 in 12-hour

        // Printing minutes and seconds
        for (int i = 2; i < 8; ++i) {
            printf("%c", time[i]);
        }
    }
    else {
        printf("%d", hh);
        // Printing minutes and seconds
        for (int i = 2; i < 8; ++i) {
            printf("%c", time[i]);
        }
    }

    // After time is printed Meridien
    printf(" %c%c", Meridien[0], Meridien[1]);
}

