# include <stdio.h>

int main() {
    int temp;

    printf("please give the temprature in celcius to convert it in farhenit: ");
    scanf("%d", &temp);

    float far = (temp * 9 / 5) + 32;
    printf("the temprature in farhenite is: %f", far);

    return 0;

}
