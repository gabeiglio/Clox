//
//  debug.h
//  Clox
//
//  Created by Gabriel Igliozzi on 9/12/20.
//

#ifndef debug_h
#define debug_h

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif /* debug_h */
