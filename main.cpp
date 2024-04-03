#include <iostream>
void menu(void){
    printf("1. Enter the text into the array\n");
    printf("2. Show text in array\n");
    printf("3. Determi text size\n");
    printf("0. EXIT\n");
    printf("Select the option:\n");
}
void clear(void){
    while(getchar() != '\n');
}
int main() {
    char text[100] = "";
    int length = 0;
    int option = 0;

    do {
        menu();
        scanf("%d", &option);
        clear();
        switch (option) {
            case 0:
                break;
            case 1:
                printf("1. Enter the text into the array\n");
                //scanf("%s", gets(text));
                fgets(text, 99, stdin);
                break;
            case 2:
                printf("2. Show text in array\n");
                printf("Text in array:\n %s \n\n", text);
                break;
                case 3:
                    int counter = 0;
                    while( *(text + counter)){
                        counter++;
                    }
                    counter-=1;
                    printf("Text size:\n %d\n",counter);
                break;
        }
}while(option !=0);

    printf("The End\n");

    return 0;
}
