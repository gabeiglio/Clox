//
//  compiler.h
//  Clox
//
//  Created by Gabriel Igliozzi on 9/12/20.
//

#ifndef compiler_h
#define compiler_h

#include "object.h"
#include "vm.h"

ObjFunction* compile(const char* source);

#endif /* compiler_h */
