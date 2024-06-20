#include "chunk.h"
#include "vm.h"

int main(void) {
    initVM();

    Chunk chunk;
    initChunk(&chunk);
    int constant = addConstant(&chunk, 1.2);
    writeChunk(&chunk, OP_CONSTANT, 12);
    writeChunk(&chunk, constant, 13);
    writeChunk(&chunk, OP_NEGATE, 14);
    writeChunk(&chunk, OP_RETURN, 15);

    interpret(&chunk);
    freeVM();
    freeChunk(&chunk);

    return 0;
}
