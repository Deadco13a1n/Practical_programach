#include <stdio.h>
#include <string.h>

// Функція для обміну значень двох символів
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Функція для генерації анаграм за допомогою рекурсії
void generateAnagrams(char *word, int start, int end, int *count) {
    // Базовий випадок: якщо досягнуто кінця слова, вивести анаграму
    if (start == end) {
        printf("%s\n", word);
        (*count)++;
    } else {
        // Генеруємо всі можливі анаграми, міняючи символи місцями
        for (int i = start; i <= end; i++) {
            swap((word + start), (word + i));
            generateAnagrams(word, start + 1, end, count);
            swap((word + start), (word + i)); // Відновлюємо початковий порядок символів
        }
    }
}

int main() {
    char word[15];
    int count = 0;

    // Зчитуємо вхідне слово
    printf("Введіть слово: ");
    scanf("%s", word);

    int length = strlen(word);

    printf("Анаграми, які можуть бути утворені зі слова %s:\n", word);
    generateAnagrams(word, 0, length - 1, &count);

    printf("Кількість анаграм: %d\n", count);

    return 0;
}