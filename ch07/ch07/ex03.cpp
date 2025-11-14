// 40. https://youtu.be/Em_CjanTZoM
#include <stdio.h>

struct ProductInfo {
    int num;
    char name[100];
    int cost;
};

int main() {
    const ProductInfo myProduct = { 4797283, "¡¶¡÷ «—∂Û∫¿", 19900 };

    printf("%lu\n", sizeof(myProduct));
    printf("&myProduct\t%lx\n", (unsigned long) &myProduct);
    printf("&myProduct.num\t%lx\n", (unsigned long) &myProduct.num);
    printf("myProduct.name\t%lx\n", (unsigned long) myProduct.name);
    printf("&myProduct.cost\t%lx\n", (unsigned long) &myProduct.cost);
    printf("&myProduct.cost - myProduct.name\t%ld\n", ((unsigned long) &myProduct.cost) - ((unsigned long) myProduct.name));
}
