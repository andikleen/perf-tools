// Auto-generated by ayasin's gen-kernel.py invoked with: (align=14, instruction='JMP', mode='jumpy', num=5, offset=0)
// Do not modify!
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
    long i,n;
    if (argc<2) {
        printf("%s: missing arg!\n", argv[0]);
        exit(-1);
    }
    n= atol(argv[1]);
    asm("	PAUSE");
    for (i=0; i<n; i++) {
        asm("Lbl000:");
        asm("	JMP Lbl001");
        asm(".align 16384");
        asm("Lbl001:");
        asm("	JMP Lbl002");
        asm(".align 16384");
        asm("Lbl002:");
        asm("	JMP Lbl003");
        asm(".align 16384");
        asm("Lbl003:");
        asm("	JMP Lbl004");
        asm(".align 16384");
        asm("Lbl004:");
        asm("	JMP Lbl005");
        asm(".align 16384");
        asm("Lbl005:");
    }
    return 0;
}

