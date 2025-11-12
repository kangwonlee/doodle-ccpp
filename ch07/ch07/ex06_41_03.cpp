// 41. https://youtu.be/nprq56hdAqU&t=376
#include <stdio.h>

struct ProductInfo {
    int num;
    char name[100];
    int cost;
};

void productDiscount(ProductInfo p, int discount_rate){
    printf("&p\t\t= %08lx\n", (long) &p);
    printf("sizeof(p)\t= %lu\n", sizeof(p));

    p.cost += (int) (((double) ((p.cost) * discount_rate)) * (-0.01));
    printf("p.cost\t\t: %d(KRW)\n", p.cost);

}

int main() {
    const ProductInfo myProduct = { 4797283, "Je-Ju Han-Ra-Bong", 19900 };
    const ProductInfo* ptr_product = &myProduct;

    printf("&myProduct\t= %08lx\n", (long) &myProduct);

    productDiscount(myProduct, 10);

    printf("Product Number\t: %d\n", ptr_product->num);
    printf("Product Name\t: %s\n", ptr_product->name);
    printf("Product Price\t: %d(KRW)\n", ptr_product->cost);
}
