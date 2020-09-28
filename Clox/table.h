//
//  table.h
//  Clox
//
//  Created by Gabriel Igliozzi on 9/27/20.
//

#ifndef table_h
#define table_h

#include "common.h"
#include "value.h"

typedef struct {
    ObjString* key;
    Value value;
} Entry;

typedef struct {
    int count;
    int capacity;
    Entry* entries;
} Table;

void initTable(Table* table);
void freeTable(Table* table);
void tableAddAll(Table* from, Table* to);
bool tableDelete(Table* table, ObjString* key);
bool tableSet(Table* table, ObjString* key, Value value);
bool tableGet(Table* table, ObjString* key, Value* value);
ObjString* tableFindString(Table* table, const char* chars, int length, uint32_t hash);

#endif /* table_h */
