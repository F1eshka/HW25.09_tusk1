﻿
// задание номер 1
// написать функцию, возвращающую среднее арифметическое элементов передаваемого ей одномерного статического массива с типом элементов int

#include <iostream>
using namespace std;

void Test(int arr[],int total)
{
    int sum = 0;
    float result=0;
    for (int i = 0; i < total; i++) {
        sum += arr[i];
    }
    result = sum / total;
    cout << result;
}

int main()
{
    int arr[] = { 37, 97, 3, 16, 47 };
    int total = 5;
    Test(arr,total);
}

// задание номер 2
// написать функцию, показывающую на экран минимум и максимум (значение и индекс) среди элементов передаваемого ей одномерного статического массива с типом элементов double




// задание номер 3
// написать функцию, меняющую порядок следования элементов передаваемого ей одномерного статического массива с типом элементов double на противоположный. например, были числа 1 2 3 4 5, стало 5 4 3 2 1