#ifndef _TABLE_H_
#define _TABLE_H_


#include "ast.h"

void scope_init();

void begin_scope();

void end_scope();

void insert( const char * key, ast* binding );

ast* lookup( const char* key, int* p_level );

#endif