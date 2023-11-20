#include <stdio.h>

int main(){
    int state = 0;
    int word_count = 0;
    char s;
    while((scanf("%c", &s)) != EOF){
        switch (state){
            case 0:
                if (s == '\n'){
                    state = 0;
                    break;}
                else if (s == '\t'){
                    state = 0;
                    break;}
                else if (s == ' '){
                    state = 0;
                    break;}
                else if (s == 'Q'){
                    state = 1;
                    break;}
                else if (s == 'W'){
                    state = 1;
                    break;}
                else if (s == 'E'){
                    state = 1;
                    break;}
                else if (s == 'R'){
                    state = 1;
                    break;}
                else if (s == 'T'){
                    state = 1;
                    break;}
                else if (s == 'Y'){
                    state = 1;
                    break;}
                else if (s == 'U'){
                    state = 1;
                    break;}
                else if (s == 'I'){
                    state = 1;
                    break;}
                else if (s == 'O'){
                    state = 1;
                    break;}
                else if (s == 'P'){
                    state = 1;
                    break;}
                else if (s == 'A'){
                    state = 1;
                    break;}
                else if (s == 'S'){
                    state = 1;
                    break;}
                else if (s == 'D'){
                    state = 1;
                    break;}
                else if (s == 'F'){
                    state = 1;
                    break;}
                else if (s == 'G'){
                    state = 1;
                    break;}
                else if (s == 'H'){
                    state = 1;
                    break;}
                else if (s == 'J'){
                    state = 1;
                    break;}
                else if (s == 'K'){
                    state = 1;
                    break;}
                else if (s == 'L'){
                    state = 1;
                    break;}
                else if (s == 'Z'){
                    state = 1;
                    break;}
                else if (s == 'X'){
                    state = 1;
                    break;}
                else if (s == 'C'){
                    state = 1;
                    break;}
                else if (s == 'V'){
                    state = 1;
                    break;}
                else if (s == 'B'){
                    state = 1;
                    break;}
                else if (s == 'N'){
                    state = 1;
                    break;}
                else if (s == 'M'){
                    state = 1;
                    break;}
                else if (s == 'q'){
                    state = 1;
                    break;}
                else if (s == 'w'){
                    state = 1;
                    break;}
                else if (s == 'e'){
                    state = 1;
                    break;}
                else if (s == 'r'){
                    state = 1;
                    break;}
                else if (s == 't'){
                    state = 1;
                    break;}
                else if (s == 'y'){
                    state = 1;
                    break;}
                else if (s == 'u'){
                    state = 1;
                    break;}
                else if (s == 'i'){
                    state = 1;
                    break;}
                else if (s == 'o'){
                    state = 1;
                    break;}
                else if (s == 'p'){
                    state = 1;
                    break;}
                else if (s == 'a'){
                    state = 1;
                    break;}
                else if (s == 's'){
                    state = 1;
                    break;}
                else if (s == 'd'){
                    state = 1;
                    break;}
                else if (s == 'f'){
                    state = 1;
                    break;}
                else if (s == 'g'){
                    state = 1;
                    break;}
                else if (s == 'h'){
                    state = 1;
                    break;}
                else if (s == 'j'){
                    state = 1;
                    break;}
                else if (s == 'k'){
                    state = 1;
                    break;}
                else if (s == 'l'){
                    state = 1;
                    break;}
                else if (s == 'z'){
                    state = 1;
                    break;}
                else if (s == 'x'){
                    state = 1;
                    break;}
                else if (s == 'c'){
                    state = 1;
                    break;}
                else if (s == 'v'){
                    state = 1;
                    break;}
                else if (s == 'b'){
                    state = 1;
                    break;}
                else if (s == 'n'){
                    state = 1;
                    break;}
                else if (s == 'm'){
                    state = 1;
                    break;}
                else if (s == '_'){
                    state = 1;
                    break;}
                else if (s == '0'){
                    state = 2;
                    break;}
                else if (s == '1'){
                    state = 2;
                    break;}
                else if (s == '2'){
                    state = 2;
                    break;}
                else if (s == '3'){
                    state = 2;
                    break;}
                else if (s == '4'){
                    state = 2;
                    break;}
                else if (s == '5'){
                    state = 2;
                    break;}
                else if (s == '6'){
                    state = 2;
                    break;}
                else if (s == '7'){
                    state = 2;
                    break;}
                else if (s == '8'){
                    state = 2;
                    break;}
                else if (s == '9'){
                    state = 2;
                    break;}
                else{
                    state = 0;
                    break;
                }
            case 1:
                word_count += 1;
                state = 2;
                break;
            case 2:
                if (s == '\n'){
                    state = 0;
                    break;}
                else if (s == '\t'){
                    state = 0;
                    break;}
                else if (s == ' '){
                    state = 0;
                    break;}
                else {
                    state = 2;
                    break;}
                }
            }
    printf("%d\n", word_count);
}