#include <stdio.h>
#include "common.h"
#include "chunk.h"
#include "debug.h"
#include "vm.h"

int main(void) {
    initVM();

    Chunk chunk;
    initChunk(&chunk);
    int constant = addConstant(&chunk, 1.2);
    writeChunk(&chunk, OP_CONSTANT, 12);
    writeChunk(&chunk, constant, 13);
    writeChunk(&chunk, OP_RETURN, 14);

    interpret(&chunk);
    freeVM();
    freeChunk(&chunk);

    return 0;
}
