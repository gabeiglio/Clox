//
//  compiler.h
//  Clox
//
//  Created by Gabriel Igliozzi on 9/12/20.
//

#ifndef compiler_h
#define compiler_h

#include "vm.h"

bool compile(const char* source, Chunk* chunk);

#endif /* compiler_h */
