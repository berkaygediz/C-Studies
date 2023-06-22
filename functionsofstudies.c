#include <stdio.h>
#include <stdlib.h>

void ekranayazdirma()
{
    printf("Yazı\n");
}

void girdial()
{
    printf("Girdi: \n");
    getchar();
}

void sistempause()
{
    printf("Sistem Pause\n");
    system("PAUSE");
}

void fonk(int a, int b)
{
    int degistir = a + b;
    a = b;
    b = a;

    printf("A: %d, B: %d  DEGISTIR: %d\n", a, b, degistir);
}

void pointerders_1()
{
    int memory;
    int *point = &memory;

    printf("%p %d\n", point, *point);
}

void pointerders_1_5()
{
    // Pointerların kullanımı
    int integer = 3, *integersayi;
    float bir = 6.12, *floatsayi;
    double iki = 9.6387, *doublesayi;
    char harf = 'a', *harfim;

    int *pointerarray;

    // Pointerların adreslere atanması
    int sayilar[] = {1, 2, 3, 4, 5};

    pointerarray = &sayilar[1];

    integersayi = &integer;
    floatsayi = &bir;
    doublesayi = &iki;
    harfim = &harf;

    // Pointerların değerlerini ekrana yazdırma
    printf("%u adresindeki int'in degeri %d'dir.\n", integersayi, *integersayi);
    printf("%u adresindeki int'in degeri %f'dir.\n", floatsayi, *floatsayi);
    printf("%u adresindeki int'in degeri %lf'dir.\n", doublesayi, *doublesayi);
    printf("%u adresindeki int'in degeri %c'dir.\n", harfim, *harfim);
    printf("%u adresindeki int'in degeri %d'dir.\n", pointerarray, *pointerarray);
}

void pointerders_2()
{
    int ilk, iki = 1;
    int *point1, *point2 = &iki;

    point1 = point2;

    ilk = ++(*point2);
    *point2 = *point1 + ilk;

    printf("ilk = %d\n", ilk);
    printf("iki = %d\n", iki);
    printf("point1 = %d\n", *point1);
    printf("point2 = %d\n", *point2);
}

void pointerders_3(int birinci, int ikinci)
{
    // Değerlerin yerini değiştirme
    int gecici = birinci;
    birinci = ikinci;
    ikinci = gecici;

    printf("birinci = %d ikinci = %d\n", birinci, ikinci);
}

void pointerders_4(int *birinci, int *ikinci)
{
    // Pointerlar aracılığıyla değerlerin yerini değiştirme
    int gecici = *birinci;
    *birinci = *ikinci;
    *ikinci = gecici;
}

int main()
{
    int x, y;

    printf("ilk deger: ");
    scanf("%d", &x);
    printf("ikinci deger: ");
    scanf("%d", &y);
    printf("birinci = %d ikinci = %d\n", x, y);

    ekranayazdirma();
    girdial();
    sistempause();
    fonk(x, y);

    pointerders_1();
    pointerders_1_5();
    pointerders_2();
    pointerders_3(x, y);
    pointerders_4(&x, &y);

    return 0;
}
