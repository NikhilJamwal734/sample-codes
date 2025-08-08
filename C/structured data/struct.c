#include<stdio.h>

struct Fruit {
    char *name;
    float price;
    int quantity;
};

void struct_defin(void){
    struct Fruit apples,bananas;
    apples.name = "Apple";
    apples.price = 30.6;
    apples.quantity = 10;

    printf("There are %d of typr %s at a price of %f each.\n", apples.quantity, apples.name, apples.price);


    struct Fruit banansas={"Banana", 20.5, 15};
    printf("There are %d of type %s at a price of %f each.\n", banansas.quantity, banansas.name, banansas.price);

    struct Fruit mangoes = {.price = 50.0, .name = "Mango", .quantity = 5};
    printf("There are %d of type %s at a price of %f each.\n", mangoes.quantity, mangoes.name, mangoes.price);  


}

void struct_size(void){
    struct Fruit{
        char *name;
        float price;
        int quantity;
    };
    struct Fruit apples;

    printf("size of struct : %lu\n", sizeof(struct Fruit));
    printf("size of apples : %lu\n", sizeof(apples));
    printf("size of name: %lu\n", sizeof(apples.name));

}
int main(void) {
    struct_defin();
    struct_size();
    return 0;
}

