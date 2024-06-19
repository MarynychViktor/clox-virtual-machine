#include <stdio.h>
#include "common.h"
#include "chunk.h"

int main(void) {
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_RETURN);
    disassembeChunk(&chunk, "test chunk");
    freeChunk(&chunk);
    return 0;
}
