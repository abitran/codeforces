#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int n, faces = 0;
    scanf("%d", &n);
    char polyhedron[n][14];
    for (int  i = 0; i < n; i++){
        scanf("%s", polyhedron[i]);
        if (strcmp("Icosahedron", polyhedron[i]) == 0)
            faces += 20;
        else if (strcmp("Cube", polyhedron[i]) == 0)
            faces += 6;
        else if (strcmp("Tetrahedron", polyhedron[i]) == 0)
            faces += 4;

        else if (strcmp("Dodecahedron", polyhedron[i]) == 0)
            faces += 12;
        else
            faces += 8;
    }

    printf("%d\n", faces);




    return 0;

}
