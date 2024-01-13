#include <stdio.h>
#include <math.h>

double vector_length(int x1, int y1, int x2, int y2) {
    // Обчислюємо різницю координат по осі X та Y
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Обчислюємо квадрат суми різниць координат
    int sum_of_squares = dx * dx + dy * dy;

    // Обчислюємо довжину вектора шляхом взяття квадратного кореня
    double length = sqrt(sum_of_squares);

    return length;
}

int main() {
    int x1, y1, x2, y2;
    printf("Введіть координати x1, y1, x2, y2: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    // Обчислюємо довжину вектора
    double length = vector_length(x1, y1, x2, y2);

    // Виводимо результат з точністю до шести знаків після коми
    printf("Довжина вектора: %.6lf\n", length);

    return 0;
}