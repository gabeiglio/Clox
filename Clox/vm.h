//
//  vm.h
//  Clox
//
//  Created by Gabriel Igliozzi on 9/12/20.
//

#ifndef vm_h
#define vm_h

#include "chunk.h"
#include "value.h"

#define STACK_MAX 256

typedef struct {
    Chunk* chunk;
    uint8_t* ip;
    Value stack[STACK_MAX];
    Value* stackTop;
} VM;

typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR,
} InterpretResult;

void initVM(void);
void freeVM(void);
InterpretResult interpret(const char* source);

//Stack operations
void push(Value value);
Value pop(void);

#endif /* vm_h */
