#include <iostream>
#include <cstdlib>
#include <ctime>

const int ROWS = 6;
const int COLS = 9;

int sumLowerHalf(int matrix[ROWS][COLS], int col) {
    // Функция, которая вычисляет сумму элементов в нижней половине одного столбца матрицы
    int sum = 0;
    for (int i = ROWS / 2; i < ROWS; i++) {
        // Цикл, который проходит по элементам в нижней половине столбца
        sum += matrix[i][col];
        // Добавляем текущий элемент к сумме
    }
    return sum;
    // Возвращаем итоговую сумму
}

int main() {
    // Главная функция программы
    int matrix[ROWS][COLS];
    
    // Инициализация генератора случайных чисел
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    // Заполнение матрицы случайными значениями
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
    
    // Вывод матрицы
    std::cout << "Матрица:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }