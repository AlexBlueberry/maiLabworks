#include <stdio.h>
#include <math.h>

int min(int a, int b){
    if (a <= b)
        return a;
    else
        return b;
}

int sign(int a){
    if (a < 0)
        return -1;
    else
        return 1;
}

int abs(int a){
    if (a < 0)
        return a * -1;
}

struct point{
    int i;
    int j;
    int l;
};

int in_area(struct point p){
    if ((5 <= p.i && p.i <= 15) && (-15 <= p.j && p.j <=-5))
        return 1;
    else
        return 0;
}

int main() {
    struct point curr_point = {-11, -6, -5};
    struct point next_point;
    for (int i = 0; i <= 50; i++){
        int k = i;
        printf("%d. i: %d, j: %d, l: %d\n", k, curr_point.i, curr_point.j, curr_point.l);
        if (in_area(curr_point) == 1){
            printf("%d. %s: i: %d, j: %d\n, l: %d", k, "Success", curr_point.i, curr_point.j, curr_point.l);
            break;
        } 
        else{
            next_point.i = (curr_point.i + curr_point.j + curr_point.l) * (k + 1)  % 25 - curr_point.i * curr_point.j * curr_point.l * (k + 2) % 10 + 10;
            next_point.j = min((curr_point.i + curr_point.j + curr_point.l) * (k + 3) % 25, curr_point.i * curr_point.j * curr_point.l * (k + 4) % 25) + 10;
            next_point.l = 2 * sign(curr_point.l) * abs((curr_point.i + curr_point.j + curr_point.l) * (k + 5) % 10 - curr_point.i * curr_point.j * curr_point.l * (k + 6) % 25);
            curr_point = next_point;
        }
        if (i == 51){
           printf("Fail\n");
        }
    }
}