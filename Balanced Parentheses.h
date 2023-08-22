#pragma once

#include "Types.h"
#include "Stack.h"

#define Expr_SIZE (25)

enum { unused = -2, unbalanced, balanced };

ST_stack_t	expr;

int8_t isBalancedParanthethes(uint8_t * expression);