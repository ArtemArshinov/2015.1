#include <stdio.h>
#include <stdlib.h>

int 
main()
{
    int name[6] = { 12, -34, 1, 69, 0, 20 };

    int min = name[0];
    int max = name[0];
    int sum = 0;
    int num = (sizeof(name) / sizeof(name[0])); //Количество элементов массива

    for (int i = 0; i < num; ++i) {
        if (name[i] > max)
            max = name[i];

        if (name[i] < min)
            min = name[i];

        sum += name[i];

        printf("%d\n", name[i]);
    }
    
    printf("min=%d\n", min);
    printf("max=%d\n", max);
    printf("sum=%d\n", sum);
    printf("num=%d\n", num);

    system("pause");

    return 0;
	
}