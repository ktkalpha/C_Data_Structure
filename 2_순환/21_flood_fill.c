#include <stdio.h>
#define WHITE 0
#define BLACK 1
#define YELLOW 2
#define WIDTH 10
#define HEIGHT 10

int screen[WIDTH][HEIGHT] = {
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 0, 0, 0, 0, 2, 2, 2},
    {2, 2, 2, 2, 0, 0, 0, 2, 2, 2},
    {2, 2, 2, 2, 0, 0, 0, 2, 2, 2},
    {2, 2, 2, 2, 0, 0, 0, 0, 2, 2},
    {2, 2, 2, 2, 0, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 0, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 0, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
};

char read_pixel(int x, int y);
void write_pixel(int x, int y, int color);
void flood_fill(int x, int y);

int main() {
    flood_fill(5, 5);
}

char read_pixel(int x, int y) {
    return screen[x][y];
}
void write_pixel(int x, int y, int color) {
    screen[x][y] = color;
}
void flood_fill(int x, int y) {
    if (read_pixel(x, y) == WHITE) {
        printf("write x:%d, y:%d\n", x, y);
        write_pixel(x, y, BLACK);
        // * 빈칸 채우기
        flood_fill(x + 1, y);
        flood_fill(x - 1, y);
        flood_fill(x, y + 1);
        flood_fill(x, y - 1);
    }
}