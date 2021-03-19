#include <stdio.h>
#include "arraydatastore.h"

int main(int argc, char* argv[]) {

    init(10);
    insert("Hello");
    insert("pretty");
    insert("World");
    insert("!");
    insert("Hi");
    insert("small");
    insert("World");
    print();
    delete("World");
    printf("After deleting \"World\":\n");
    print();

    //TODO something not working when freeing space
    destroy();

    return 0;
}
