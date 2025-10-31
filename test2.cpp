#include <stdio.h>
#include <stdlib.h>

void create_vertical_labels() {
    const char *dot_code = 
        "digraph G {\n"
        "    node [shape=note];\n"
        "    \n"
        "    // Вертикальное расположение с переносами строк\n"
        "    A [label=\"index = 0\\nelem = 42\\nnext = 1\\nprev = -1\"];\n"
        "    B [label=\"index = 1\\nelem = 24\\nnext = 2\\nprev = 0\"];\n"
        "    C [label=\"index = 2\\nelem = 36\\nnext = -1\\nprev = 1\"];\n"
        "    \n"
        "    A -> B -> C;\n"
        "}\n";
    
    FILE *file = fopen("vertical_labels.dot", "w");
    fprintf(file, "%s", dot_code);
    fclose(file);
    
    system("dot -Tpng vertical_labels.dot -o vertical_labels.png");
    printf("Граф с вертикальными метками создан!\n");
}