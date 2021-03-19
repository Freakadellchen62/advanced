#include <stdio.h>
#include "stringlist.h"

int main(int argc, char* argv[]) {
    s_node *list = init();
    printf("size of snode: %lu\n", sizeof(s_node));
    add(list, "Hello");
    add(list, "pretty");
    add(list, "world");
    add(list, ",");
    add(list, "how");
    add(list, "are");
    add(list, "you");
    add(list, "?");

    print(list);

    printf("search(list, \"world\") returns the node: \"%s\"\n", search(list, "world")->content);
    printf("search(list, \"earth\") returns the node: \"%s\"\n", search(list, "earth")->content);

    delete(list, "pretty");
    printf("After running delete(list, \"pretty\") ");
    print(list);

    clear(list);
    return 0;
}
