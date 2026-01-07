// FindMaxElemOfArray.c : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int nElems, *iNumbers;
    int iMax, nIndex;
    printf("Input a count of elements in array\r\n");
    scanf("%d",&nElems);
    if (nElems == 0)
    {
        printf("Empty arrays not allowed\r\n");
        getchar();
        getc(stdin);
        return 1;
    }
    iNumbers=(int*)calloc(nElems,sizeof(int));
    if (iNumbers == NULL)
    {
        printf("Out of memory\r\n");
        getchar();
        getc(stdin);
        return 2;
    }
    srand(time(NULL));
    printf("Generating array by filling %d elements\r\n", nElems);
    for (int i = 0; i < nElems; i++)
    {
        iNumbers[i] = 1 + rand() % 100;
        printf("%d ", iNumbers[i]);
    }
    iMax = iNumbers[0];
    nIndex = 0;
    for (int i = 1; i < nElems; i++)
    {
        if (iNumbers[i] > iMax)
        {
            iMax = iNumbers[i];
            nIndex = i;
        }
    }
    printf("\r\nFound maximum element: %d with index %d\r\n", iMax, nIndex);
    getchar();
    getc(stdin);
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
