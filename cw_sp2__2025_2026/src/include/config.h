#define _CRT_SECURE_NO_WARNINGS
/************************************************************
* N.Kozak // Lviv'2024-2025 // cw_sp2__2024_2025            *
*                         file: config.h                    *
*                                                  (draft!) *
*************************************************************/
#include "../include/def.h"


#define ARRAY_INTERVAL 128


#define COMMENT_BEGIN_STR "#*"
#define COMMENT_END_STR   "*#"


#define TOKENS_RE         ";|:=|=:|\\+|-|\\*|,|==|!=|:|\\[|\\]|\\(|\\)|\\{|\\}|<=|>=|[_0-9A-Za-z]+|[^ \t\r\f\v\n]"
#define KEYWORDS_RE       ";|:=|=:|\\+|-|\\*|,|==|!=|:|\\[|\\]|\\(|\\)|\\{|\\}|NAME|DATA|BODY|END|BREAK|CONTINUE|GET|PUT|IF|ELSE|FOR|TO|DOWNTO|DO|WHILE|REPEAT|UNTIL|GOTO|DIV|MOD|<=|>=|NOT|AND|OR|INTEGER16"
#define IDENTIFIERS_RE    "_[A-Z][A-Z][A-Z][A-Z][A-Z][A-Z][A-Z]"
#define UNSIGNEDVALUES_RE "0|[1-9][0-9]*"


//#define USE_REVERSE_ASSIGNMENT
#define USE_COMPARE_WITH_EQUAL


#ifdef USE_REVERSE_ASSIGNMENT
#define IF_USE_REVERSE_ASSIGNMENT(...) __VA_ARGS__
#define IF_NONUSE_REVERSE_ASSIGNMENT(...)
#else
#define IF_USE_REVERSE_ASSIGNMENT(...)
#define IF_NONUSE_REVERSE_ASSIGNMENT(...) __VA_ARGS__
#endif

#ifdef USE_COMPARE_WITH_EQUAL
#define IF_USE_COMPARE_WITH_EQUAL(...) __VA_ARGS__
#define IF_NONUSE_COMPARE_WITH_EQUAL(...)
#else
#define IF_USE_COMPARE_WITH_EQUAL(...)
#define IF_NONUSE_COMPARE_WITH_EQUAL(...) __VA_ARGS__
#endif


#define T_NAME_0 "NAME"
#define T_NAME_1 ""
#define T_NAME_2 ""
#define T_NAME_3 ""
#define T_BODY_0 "BODY"
#define T_BODY_1 ""
#define T_BODY_2 ""
#define T_BODY_3 ""
#define T_DATA_0 "DATA"
#define T_DATA_1 ""
#define T_DATA_2 ""
#define T_DATA_3 ""
#define T_DATA_TYPE_0 "INTEGER16"
#define T_DATA_TYPE_1 ""
#define T_DATA_TYPE_2 ""
#define T_DATA_TYPE_3 ""
//
#define T_BITWISE_NOT_0 "~"
#define T_BITWISE_NOT_1 ""
#define T_BITWISE_NOT_2 ""
#define T_BITWISE_NOT_3 ""
#define T_BITWISE_AND_0 "&"
#define T_BITWISE_AND_1 ""
#define T_BITWISE_AND_2 ""
#define T_BITWISE_AND_3 ""
#define T_BITWISE_OR_0 "|"
#define T_BITWISE_OR_1 ""
#define T_BITWISE_OR_2 ""
#define T_BITWISE_OR_3 ""
#define T_NOT_0 "NOT"
#define T_NOT_1 ""
#define T_NOT_2 ""
#define T_NOT_3 ""
#define T_AND_0 "AND"
#define T_AND_1 ""
#define T_AND_2 ""
#define T_AND_3 ""
#define T_OR_0 "OR"
#define T_OR_1 ""
#define T_OR_2 ""
#define T_OR_3 ""
//
#define T_EQUAL_0 "=="
#define T_EQUAL_1 ""
#define T_EQUAL_2 ""
#define T_EQUAL_3 ""
#define T_NOT_EQUAL_0 "!="
#define T_NOT_EQUAL_1 ""
#define T_NOT_EQUAL_2 ""
#define T_NOT_EQUAL_3 ""
#define T_LESS_0 "<"
#define T_LESS_1 ""
#define T_LESS_2 ""
#define T_LESS_3 ""
#define T_GREATER_0 ">"
#define T_GREATER_1 ""
#define T_GREATER_2 ""
#define T_GREATER_3 ""
#define T_LESS_OR_EQUAL_0 "<="
#define T_LESS_OR_EQUAL_1 ""
#define T_LESS_OR_EQUAL_2 ""
#define T_LESS_OR_EQUAL_3 ""
#define T_GREATER_OR_EQUAL_0 ">="
#define T_GREATER_OR_EQUAL_1 ""
#define T_GREATER_OR_EQUAL_2 ""
#define T_GREATER_OR_EQUAL_3 ""
//
#define T_ADD_0 "+"
#define T_ADD_1 ""
#define T_ADD_2 ""
#define T_ADD_3 ""
#define T_SUB_0 "-"
#define T_SUB_1 ""
#define T_SUB_2 ""
#define T_SUB_3 ""
#define T_MUL_0 "*"
#define T_MUL_1 ""
#define T_MUL_2 ""
#define T_MUL_3 ""
#define T_DIV_0 "DIV"
#define T_DIV_1 ""
#define T_DIV_2 ""
#define T_DIV_3 ""
#define T_MOD_0 "MOD"
#define T_MOD_1 ""
#define T_MOD_2 ""
#define T_MOD_3 ""
//
#define T_COMA_0 ","
#define T_COMA_1 ""
#define T_COMA_2 ""
#define T_COMA_3 ""
#define T_COLON_0 ":"
#define T_COLON_1 ""
#define T_COLON_2 ""
#define T_COLON_3 ""
#define T_GOTO_0 "GOTO"
#define T_GOTO_1 ""
#define T_GOTO_2 ""
#define T_GOTO_3 ""
//
#define T_IF_0 "IF"
#define T_IF_1 ""
#define T_IF_2 ""
#define T_IF_3 ""
#define T_ELSE_IF_0 "ELSE"
#define T_ELSE_IF_1 "IF"
#define T_ELSE_IF_2 ""
#define T_ELSE_IF_3 ""
#define T_THEN_BLOCK_0 "{"
#define T_THEN_BLOCK_1 ""
#define T_THEN_BLOCK_2 ""
#define T_THEN_BLOCK_3 ""
#define T_ELSE_BLOCK_0 "ELSE"
#define T_ELSE_BLOCK_1 "{"
#define T_ELSE_BLOCK_2 ""
#define T_ELSE_BLOCK_3 ""
//
#define T_FOR_0 "FOR"
#define T_FOR_1 ""
#define T_FOR_2 ""
#define T_FOR_3 ""
#define T_TO_0 "TO"
#define T_TO_1 ""
#define T_TO_2 ""
#define T_TO_3 ""
#define T_DOWNTO_0 "DOWNTO"
#define T_DOWNTO_1 ""
#define T_DOWNTO_2 ""
#define T_DOWNTO_3 ""
#define T_DO_0 "DO"
#define T_DO_1 ""
#define T_DO_2 ""
#define T_DO_3 ""
//
#define T_WHILE_0 "WHILE"
#define T_WHILE_1 ""
#define T_WHILE_2 ""
#define T_WHILE_3 ""
#define T_CONTINUE_WHILE_0 "CONTINUE"
#define T_CONTINUE_WHILE_1 ""
#define T_CONTINUE_WHILE_2 ""
#define T_CONTINUE_WHILE_3 ""
#define T_EXIT_WHILE_0 "BREAK"
#define T_EXIT_WHILE_1 "" 
#define T_EXIT_WHILE_2 "" 
#define T_EXIT_WHILE_3 ""
//
#define T_REPEAT_0 "REPEAT"
#define T_REPEAT_1 ""
#define T_REPEAT_2 ""
#define T_REPEAT_3 ""
#define T_UNTIL_0 "UNTIL"
#define T_UNTIL_1 ""
#define T_UNTIL_2 ""
#define T_UNTIL_3 ""
//
#define T_INPUT_0 "GET"
#define T_INPUT_1 ""
#define T_INPUT_2 ""
#define T_INPUT_3 ""
#define T_OUTPUT_0 "PUT"
#define T_OUTPUT_1 ""
#define T_OUTPUT_2 ""
#define T_OUTPUT_3 ""
//
#define T_BEGIN_GROUPEXPRESSION_0 "("
#define T_BEGIN_GROUPEXPRESSION_1 ""
#define T_BEGIN_GROUPEXPRESSION_2 ""
#define T_BEGIN_GROUPEXPRESSION_3 ""
#define T_END_GROUPEXPRESSION_0 ")"
#define T_END_GROUPEXPRESSION_1 ""
#define T_END_GROUPEXPRESSION_2 ""
#define T_END_GROUPEXPRESSION_3 ""
//
#define T_LEFT_SQUAREBRACKETS_0 "["
#define T_LEFT_SQUAREBRACKETS_1 ""
#define T_LEFT_SQUAREBRACKETS_2 ""
#define T_LEFT_SQUAREBRACKETS_3 ""
#define T_RIGHT_SQUAREBRACKETS_0 "]"
#define T_RIGHT_SQUAREBRACKETS_1 ""
#define T_RIGHT_SQUAREBRACKETS_2 ""
#define T_RIGHT_SQUAREBRACKETS_3 ""
//
#define T_RLBIND_0 ":="
#define T_RLBIND_1 ""
#define T_RLBIND_2 ""
#define T_RLBIND_3 ""
#define T_LRBIND_0 "=:"
#define T_LRBIND_1 ""
#define T_LRBIND_2 ""
#define T_LRBIND_3 ""
//
#define T_BEGIN_0 "BEGIN"
#define T_BEGIN_1 ""
#define T_BEGIN_2 ""
#define T_BEGIN_3 ""
#define T_END_0 "END"
#define T_END_1 ""
#define T_END_2 ""
#define T_END_3 ""
//
#define T_BEGIN_BLOCK_0 "{"
#define T_BEGIN_BLOCK_1 ""
#define T_BEGIN_BLOCK_2 ""
#define T_BEGIN_BLOCK_3 ""
#define T_END_BLOCK_0 "}"
#define T_END_BLOCK_1 ""
#define T_END_BLOCK_2 ""
#define T_END_BLOCK_3 ""
//
#define T_SEMICOLON_0 ";"
#define T_SEMICOLON_1 ""
#define T_SEMICOLON_2 ""
#define T_SEMICOLON_3 ""
//
#define T_NULL_STATEMENT_0 "NULL"
#define T_NULL_STATEMENT_1 "STATEMENT"
#define T_NULL_STATEMENT_2 ""
#define T_NULL_STATEMENT_3 ""


#define LA_IS  2
#define LA_NOT 4 


#define GRAMMAR_LL2__2025 {\
{ LA_IS, {"ident_terminal"}, { "labeled_point",{\
    { LA_IS, {""}, 2, {"ident", T_COLON_0}}\
}}},\
{ LA_IS, {T_GOTO_0}, { "goto_label",{\
    { LA_IS, {""}, 2, {T_GOTO_0, "ident"}}\
}}},\
{ LA_IS, {"ident_terminal"}, { "program_name",{\
    { LA_IS, {""}, 1, {"ident"}}\
}}},\
{ LA_IS, {T_DATA_TYPE_0}, { "value_type",{\
    { LA_IS, {""}, 1, {T_DATA_TYPE_0}}\
}}},\
{ LA_IS, {"["}, { "array_specify",{\
    { LA_IS, {""}, 3, {"[", "unsigned_value", "]"}}\
}}},\
{ LA_IS, {"ident_terminal"}, { "declaration_element",{\
    { LA_IS, {""}, 2, {"ident", "array_specify_optional"}}\
}}},\
{ LA_IS, {"["}, { "array_specify_optional",{\
    { LA_IS, {""}, 1, {"array_specify"}}\
}}},\
{ LA_NOT, {"["}, { "array_specify_optional",{\
    { LA_IS, {""}, 0, {""}}\
}}},\
{ LA_IS, {T_COMA_0}, { "other_declaration_ident",{\
    { LA_IS, {""}, 2, {T_COMA_0, "declaration_element"}}\
}}},\
{ LA_IS, {T_DATA_TYPE_0}, { "declaration",{\
    { LA_IS, {""}, 3, {"value_type", "declaration_element", "other_declaration_ident__iteration"}}\
}}},\
{ LA_IS, { T_COMA_0 }, { "other_declaration_ident__iteration",{\
    { LA_IS, {""}, 2, { "other_declaration_ident", "other_declaration_ident__iteration" }}\
}}},\
{ LA_NOT, { T_COMA_0 }, { "other_declaration_ident__iteration",{\
    { LA_IS, {""}, 0, { "" }}\
}}},\
{ LA_IS, { "[" }, { "index_action",{\
    { LA_IS, {""}, 3, { "[", "expression", "]" }}\
}}},\
{ LA_IS, { T_NOT_0 }, { "unary_operator",{\
    { LA_IS, {""}, 1, { T_NOT_0 }}\
}}},\
{ LA_IS, { T_NOT_0 }, { "unary_operation",{\
    { LA_IS, {""}, 2, { "unary_operator", "expression" }}\
}}},\
{ LA_IS, { T_AND_0 }, { "binary_operator",{\
    { LA_IS, {""}, 1, { T_AND_0 }}\
}}},\
{ LA_IS, { T_OR_0 }, { "binary_operator",{\
    { LA_IS, {""}, 1, { T_OR_0 }}\
}}},\
{ LA_IS, { T_EQUAL_0 }, { "binary_operator",{\
    { LA_IS, {""}, 1, { T_EQUAL_0 }}\
}}},\
{ LA_IS, { T_NOT_EQUAL_0 }, { "binary_operator",{\
    { LA_IS, {""}, 1, { T_NOT_EQUAL_0 }}\
}}},\
IF_NONUSE_COMPARE_WITH_EQUAL(\
{ LA_IS, { T_LESS_0 }, { "binary_operator",{\
    { LA_IS, {""}, 1, { T_LESS_0 }}\
}}},\
{ LA_IS, { T_GREATER_0 }, { "binary_operator",{\
    { LA_IS, {""}, 1, { T_GREATER_0 }}\
}}},\
)\
IF_USE_COMPARE_WITH_EQUAL(\
{ LA_IS, { T_LESS_OR_EQUAL_0 }, { "binary_operator",{\
    { LA_IS, {""}, 1, { T_LESS_OR_EQUAL_0 }}\
}}},\
{ LA_IS, { T_GREATER_OR_EQUAL_0 }, { "binary_operator",{\
    { LA_IS, {""}, 1, { T_GREATER_OR_EQUAL_0 }}\
}}},\
)\
{ LA_IS, { T_ADD_0 }, { "binary_operator",{\
    { LA_IS, {""}, 1, { T_ADD_0 }}\
}}},\
{ LA_IS, { T_SUB_0 }, { "binary_operator",{\
    { LA_IS, {""}, 1, { T_SUB_0 }}\
}}},\
{ LA_IS, { T_MUL_0 }, { "binary_operator",{\
    { LA_IS, {""}, 1, { T_MUL_0 }}\
}}},\
{ LA_IS, { T_DIV_0 }, { "binary_operator",{\
    { LA_IS, {""}, 1, { T_DIV_0 }}\
}}},\
{ LA_IS, { T_MOD_0 }, { "binary_operator",{\
    { LA_IS, {""}, 1, { T_MOD_0 }}\
}}},\
IF_NONUSE_COMPARE_WITH_EQUAL(\
{ LA_IS, { T_AND_0, T_OR_0, T_EQUAL_0, T_NOT_EQUAL_0, T_LESS_0, T_GREATER_0, T_ADD_0, T_SUB_0, T_MUL_0, T_DIV_0, T_MOD_0 }, { "binary_action",{\
    { LA_IS, {""}, 2, { "binary_operator", "expression" }}\
}}},\
)\
IF_USE_COMPARE_WITH_EQUAL(\
{ LA_IS, { T_AND_0, T_OR_0, T_EQUAL_0, T_NOT_EQUAL_0, T_LESS_OR_EQUAL_0, T_GREATER_OR_EQUAL_0, T_ADD_0, T_SUB_0, T_MUL_0, T_DIV_0, T_MOD_0 }, { "binary_action",{\
    { LA_IS, {""}, 2, { "binary_operator", "expression" }}\
}}},\
)\
{LA_IS, { "(" }, { "left_expression",{\
    {LA_IS, { "" }, 1, { "group_expression" }}\
}}},\
{LA_IS, { T_NOT_0 }, { "left_expression",{\
    {LA_IS, { "" }, 1, { "unary_operation" }}\
}}},\
{LA_IS, { T_ADD_0, T_SUB_0 }, { "left_expression",{\
    {LA_IS,  { "unsigned_value_terminal"}, 1, { "value" }},\
    {LA_NOT, { "unsigned_value_terminal" }, 1, { "unary_operation" }}\
}}},\
{LA_IS, { "ident_terminal" }, { "left_expression",{\
    {LA_IS, {""}, 2, { "ident", "index_action_optional" }}\
}}},\
{LA_IS, { "unsigned_value_terminal" }, { "left_expression",{\
    {LA_IS, {""}, 1, { "value" }}\
}}},\
{LA_IS, { "[" }, { "index_action_optional",{\
    {LA_IS, {""}, 1, { "index_action" }}\
}}},\
{LA_NOT, { "[" }, { "index_action_optional",{\
    {LA_IS, {""}, 0, { "" }}\
}}},\
{LA_IS, { "(", T_NOT_0, T_ADD_0, T_SUB_0, "ident_terminal", "unsigned_value_terminal" }, { "expression",{\
    {LA_IS, {""}, 2, { "left_expression", "binary_action__iteration" }}\
}}},\
IF_NONUSE_COMPARE_WITH_EQUAL(\
{LA_IS, { T_AND_0, T_OR_0, T_EQUAL_0, T_NOT_EQUAL_0, T_LESS_0, T_GREATER_0, T_ADD_0, T_SUB_0, T_MUL_0, T_DIV_0, T_MOD_0 }, { "binary_action__iteration",{\
    {LA_IS, {""}, 2, { "binary_action", "binary_action__iteration" }}\
}}},\
{LA_NOT, { T_AND_0, T_OR_0, T_EQUAL_0, T_NOT_EQUAL_0, T_LESS_0, T_GREATER_0, T_ADD_0, T_SUB_0, T_MUL_0, T_DIV_0, T_MOD_0 }, { "binary_action__iteration",{\
    {LA_IS, {""}, 0, { "" }}\
}}},\
)\
IF_USE_COMPARE_WITH_EQUAL(\
{LA_IS, { T_AND_0, T_OR_0, T_EQUAL_0, T_NOT_EQUAL_0, T_LESS_OR_EQUAL_0, T_GREATER_OR_EQUAL_0, T_ADD_0, T_SUB_0, T_MUL_0, T_DIV_0, T_MOD_0 }, { "binary_action__iteration",{\
    {LA_IS, {""}, 2, { "binary_action", "binary_action__iteration" }}\
}}},\
{LA_NOT, { T_AND_0, T_OR_0, T_EQUAL_0, T_NOT_EQUAL_0, T_LESS_OR_EQUAL_0, T_GREATER_OR_EQUAL_0, T_ADD_0, T_SUB_0, T_MUL_0, T_DIV_0, T_MOD_0 }, { "binary_action__iteration",{\
    {LA_IS, {""}, 0, { "" }}\
}}},\
)\
{LA_IS, { "(" }, { "group_expression",{\
    {LA_IS, {""}, 3, { "(", "expression", ")" }}\
}}},\
IF_NONUSE_REVERSE_ASSIGNMENT(\
{LA_IS, { "ident_terminal" }, { "bind_right_to_left",{\
    {LA_IS, {""}, 4, { "ident", "index_action_optional", T_RLBIND_0, "expression" }}\
}}},\
)\
IF_USE_REVERSE_ASSIGNMENT(\
{LA_IS, { "(", T_NOT_0, T_ADD_0, T_SUB_0, "ident_terminal", "unsigned_value_terminal" }, { "bind_left_to_right",{\
    {LA_IS, {""}, 4, { "expression", T_LRBIND_0, "ident", "index_action_optional" }}\
}}},\
)\
{LA_IS, { "(", T_NOT_0, T_ADD_0, T_SUB_0, "ident_terminal", "unsigned_value_terminal" }, { "if_expression",{\
    {LA_IS, {""}, 1, { "expression" }}\
}}},\
{LA_IS, { T_BEGIN_BLOCK_0 }, { "body_for_true",{\
    {LA_IS, {""}, 1, { "block_statements_in_while_and_if_body" }}\
}}},\
{LA_IS, { T_ELSE_IF_0 }, { "false_cond_block_without_else",{\
    {LA_IS, {""}, 4, { T_ELSE_IF_0, T_ELSE_IF_1, "if_expression", "body_for_true" }}\
}}},\
{LA_IS, { T_ELSE_BLOCK_0 }, { "body_for_false",{\
    {LA_IS, {""}, 2, { T_ELSE_BLOCK_0, "block_statements_in_while_and_if_body" }}\
}}},\
{LA_IS, { T_IF_0 }, { "cond_block",{\
    {LA_IS, {""}, 5, { T_IF_0, "if_expression", "body_for_true", "false_cond_block_without_else__iteration", "body_for_false_optional" }}\
}}},\
{LA_IS, { T_ELSE_IF_0 }, { "false_cond_block_without_else__iteration",{\
    {LA_IS, {T_ELSE_IF_1}, 2, { "false_cond_block_without_else", "false_cond_block_without_else__iteration" }},\
    {LA_NOT, { T_ELSE_IF_1 }, 0, { "" }}\
}}},\
{LA_NOT, { T_ELSE_IF_0 }, { "false_cond_block_without_else__iteration",{\
    {LA_IS, {""}, 0, { "" }}\
}}},\
{LA_IS, { T_ELSE_BLOCK_0 }, { "body_for_false_optional",{\
    {LA_IS, {""}, 1, { "body_for_false" }}\
}}},\
{LA_NOT, { T_ELSE_BLOCK_0 }, { "body_for_false_optional",{\
    {LA_IS, {""}, 0, { "" }}\
}}},\
{LA_IS, { "(", T_NOT_0, T_ADD_0, T_SUB_0, "ident_terminal", "unsigned_value_terminal" }, { "cycle_begin_expression",{\
    {LA_IS, {""}, 1, { "expression" }}\
}}},\
{LA_IS, { "(", T_NOT_0, T_ADD_0, T_SUB_0, "ident_terminal", "unsigned_value_terminal" }, { "cycle_end_expression",{\
    {LA_IS, {""}, 1, { "expression" }}\
}}},\
{LA_IS, { "ident_terminal" }, { "cycle_counter",{\
    {LA_IS, {""}, 1, { "ident" }}\
}}},\
IF_NONUSE_REVERSE_ASSIGNMENT(\
{LA_IS, { "ident_terminal" }, { "cycle_counter_rl_init",{\
    {LA_IS, {""}, 3, { "cycle_counter", T_RLBIND_0, "cycle_begin_expression" }}\
}}},\
)\
IF_USE_REVERSE_ASSIGNMENT(\
{LA_IS, { "(", T_NOT_0, T_ADD_0, T_SUB_0, "ident_terminal", "unsigned_value_terminal" }, { "cycle_counter_lr_init",{\
    {LA_IS, {""}, 3, { "cycle_begin_expression", T_LRBIND_0, "cycle_counter" }}\
}}},\
)\
{LA_IS, { "ident_terminal" }, { "cycle_counter_init",{\
    IF_NONUSE_REVERSE_ASSIGNMENT({LA_IS, { T_RLBIND_0 }, 1, { "cycle_counter_rl_init" }})\
    IF_USE_REVERSE_ASSIGNMENT({LA_NOT, { T_RLBIND_0 }, 1, { "cycle_counter_lr_init" }})\
}}},\
IF_USE_REVERSE_ASSIGNMENT(\
{LA_IS, { "(", T_NOT_0, T_ADD_0, T_SUB_0, "unsigned_value_terminal" }, { "cycle_counter_init",{\
    {LA_IS, {""}, 1, { "cycle_counter_lr_init" }}\
}}},\
)\
{LA_IS, { "(", T_NOT_0, T_ADD_0, T_SUB_0, "ident_terminal", "unsigned_value_terminal" }, { "cycle_counter_last_value",{\
    {LA_IS, {""}, 1, { "cycle_end_expression" }}\
}}},\
{LA_IS, { T_DO_0 }, { "cycle_body",{\
    {LA_IS, {""}, 2, { T_DO_0, "statements__or__block_statements" }}\
}}},\
{LA_IS, { T_TO_0 }, { "forto_direction",{\
    {LA_IS, {""}, 1, { T_TO_0 }}\
}}},\
{LA_IS, { T_DOWNTO_0 }, { "forto_direction",{\
    {LA_IS, {""}, 1, { T_DOWNTO_0 }}\
}}},\
{LA_IS, { T_FOR_0 }, { "forto_cycle",{\
    {LA_IS, {""}, 5, { T_FOR_0, "cycle_counter_init", "forto_direction", "cycle_counter_last_value", "cycle_body" }}\
}}},\
{LA_IS, { "ident_terminal", "(", T_NOT_0, "unsigned_value_terminal", T_ADD_0, T_SUB_0, T_IF_0, T_FOR_0, T_WHILE_0, T_REPEAT_0, T_GOTO_0, T_INPUT_0, T_OUTPUT_0, T_SEMICOLON_0 }, { "statement_in_while_and_if_body",{\
    {LA_IS, {""}, 1, { "statement" }}\
}}},\
{LA_IS, { T_CONTINUE_WHILE_0 }, { "statement_in_while_and_if_body",{\
    {LA_IS, {""}, 1, { T_CONTINUE_WHILE_0 }}\
}}},\
{LA_IS, { T_EXIT_WHILE_0 }, { "statement_in_while_and_if_body",{\
    {LA_IS, {""}, 1, { T_EXIT_WHILE_0 }}\
}}},\
{LA_IS, { T_BEGIN_BLOCK_0 }, { "block_statements_in_while_and_if_body",{\
    {LA_IS, {""}, 3, { T_BEGIN_BLOCK_0, "statement_in_while_and_if_body__iteration", T_END_BLOCK_0 }}\
}}},\
{LA_IS, { "ident_terminal", "(", T_NOT_0, "unsigned_value_terminal", T_ADD_0, T_SUB_0, T_IF_0, T_FOR_0, T_WHILE_0, T_REPEAT_0, T_GOTO_0, T_INPUT_0, T_OUTPUT_0, T_SEMICOLON_0, T_CONTINUE_WHILE_0, T_EXIT_WHILE_0 }, { "statement_in_while_and_if_body__iteration",{\
    {LA_IS, {""}, 2, { "statement_in_while_and_if_body", "statement_in_while_and_if_body__iteration" }}\
}}},\
{LA_NOT, { "ident_terminal", "(", T_NOT_0, "unsigned_value_terminal", T_ADD_0, T_SUB_0, T_IF_0, T_FOR_0, T_WHILE_0, T_REPEAT_0, T_GOTO_0, T_INPUT_0, T_OUTPUT_0, T_SEMICOLON_0, T_CONTINUE_WHILE_0, T_EXIT_WHILE_0 }, { "statement_in_while_and_if_body__iteration",{\
    {LA_IS, {""}, 0, { "" }}\
}}},\
{LA_IS, { "(", T_NOT_0, T_ADD_0, T_SUB_0, "ident_terminal", "unsigned_value_terminal" }, { "while_cycle_head_expression",{\
    {LA_IS, {""}, 1, { "expression" }}\
}}},\
{LA_IS, { T_WHILE_0 }, { "while_cycle",{\
    {LA_IS, {""}, 3, { T_WHILE_0, "while_cycle_head_expression", "block_statements_in_while_and_if_body" }}\
}}},\
{LA_IS, { "(", T_NOT_0, T_ADD_0, T_SUB_0, "ident_terminal", "unsigned_value_terminal" }, { "repeat_until_cycle_cond",{\
    {LA_IS, {""}, 1, { "expression" }}\
}}},\
{LA_IS, { T_REPEAT_0 }, { "repeat_until_cycle",{\
    {LA_IS, {""}, 4, { T_REPEAT_0, "statements__or__block_statements", T_UNTIL_0, "repeat_until_cycle_cond" }}\
}}},\
{LA_IS, { "ident_terminal", "(", T_NOT_0, "unsigned_value_terminal", T_ADD_0, T_SUB_0, T_IF_0, T_FOR_0, T_WHILE_0, T_REPEAT_0, T_GOTO_0, T_INPUT_0, T_OUTPUT_0, T_SEMICOLON_0 }, { "statements__or__block_statements",{\
    {LA_IS, {""}, 1, { "statement__iteration" }}\
}}},\
{LA_IS, { T_BEGIN_BLOCK_0 }, { "statements__or__block_statements",{\
    {LA_IS, {""}, 1, { "block_statements" }}\
}}},\
{LA_IS, { T_INPUT_0 }, { "input_rule",{\
    {LA_IS, {""}, 2, { T_INPUT_0, "argument_for_input" }}\
}}},\
{LA_IS, { "ident_terminal" }, { "argument_for_input",{\
    {LA_IS, {""}, 2, { "ident", "index_action_optional" }}\
}}},\
{LA_IS, { "(" }, { "argument_for_input",{\
    {LA_IS, {""}, 4, { "(", "ident", "index_action_optional", ")" }}\
}}},\
{LA_IS, { T_OUTPUT_0 }, { "output_rule", {\
    {LA_IS, { "" }, 2, {T_OUTPUT_0, "expression"} }\
}}},\
{LA_IS, { "ident_terminal" }, { "statement", {\
    IF_NONUSE_REVERSE_ASSIGNMENT({ LA_IS, { T_RLBIND_0, "[" }, 1, {"bind_right_to_left"}},)\
    { LA_IS, { T_COLON_0 }, 1, {"labeled_point"}},\
    IF_USE_REVERSE_ASSIGNMENT({ LA_NOT, { T_COLON_0 }, 1, {"bind_left_to_right"}})\
}}},\
IF_USE_REVERSE_ASSIGNMENT(\
{LA_IS, { "(", T_NOT_0, "unsigned_value_terminal", T_ADD_0, T_SUB_0 }, { "statement", {\
    { LA_IS, {""}, 1, {"bind_left_to_right"}}\
}}},\
)\
{LA_IS, { T_IF_0 }, { "statement",{\
    {LA_IS, {""}, 1, {"cond_block"}}\
}}},\
{LA_IS, { T_FOR_0 }, { "statement",{\
    {LA_IS, {""}, 1, {"forto_cycle"}}\
}}},\
{LA_IS, { T_WHILE_0 }, { "statement",{\
    {LA_IS, {""}, 1, {"while_cycle"}}\
}}},\
{LA_IS, { T_REPEAT_0 }, { "statement",{\
    {LA_IS, {""}, 1, {"repeat_until_cycle"}}\
}}},\
{LA_IS, { T_GOTO_0 }, { "statement",{\
    {LA_IS, {""}, 1, {"goto_label"}}\
}}},\
{LA_IS, { T_INPUT_0 }, { "statement",{\
    {LA_IS, {""}, 1, {"input_rule"}}\
}}},\
{LA_IS, { T_OUTPUT_0 }, { "statement",{\
    {LA_IS, {""}, 1, {"output_rule"}}\
}}},\
{LA_IS, { T_SEMICOLON_0 }, { "statement",{\
    {LA_IS, {""}, 1, {";"}}\
}}},\
{ LA_IS, { T_BEGIN_BLOCK_0 }, { "block_statements",{\
    { LA_IS, {""}, 3, { T_BEGIN_BLOCK_0, "statement__iteration", T_END_BLOCK_0 }}\
}}},\
{ LA_IS, { "ident_terminal", "(", T_NOT_0, "unsigned_value_terminal", T_ADD_0, T_SUB_0, T_IF_0, T_FOR_0, T_WHILE_0, T_REPEAT_0, T_GOTO_0, T_INPUT_0, T_OUTPUT_0, T_SEMICOLON_0 }, { "statement__iteration",{\
    { LA_IS, {""}, 2, { "statement", "statement__iteration" }}\
}}},\
{ LA_NOT, { "ident_terminal", "(", T_NOT_0, "unsigned_value_terminal", T_ADD_0, T_SUB_0, T_IF_0, T_FOR_0, T_WHILE_0, T_REPEAT_0, T_GOTO_0, T_INPUT_0, T_OUTPUT_0, T_SEMICOLON_0 }, { "statement__iteration",{\
    { LA_IS, {""}, 0, { "" }}\
}}},\
{ LA_IS, { T_NAME_0 }, { "program_rule",{\
    { LA_IS, {""}, 9, { T_NAME_0, "program_name", T_SEMICOLON_0, T_BODY_0, T_DATA_0, "declaration_optional", T_SEMICOLON_0, "statement__iteration", T_END_0 }}\
}}},\
{ LA_IS, { T_DATA_TYPE_0 }, { "declaration_optional",{\
    { LA_IS, {""}, 1, { "declaration" }}\
}}},\
{ LA_NOT, { T_DATA_TYPE_0 }, { "declaration_optional",{\
    { LA_IS, {""}, 0, { "" }}\
}}},\
{LA_IS, { "unsigned_value_terminal" }, { "unsigned_value", {\
    {LA_IS, { "" }, 1, { "unsigned_value_terminal" }}\
}}},\
{LA_IS, { "unsigned_value_terminal", T_ADD_0, T_SUB_0 }, { "value", {\
    {LA_IS, { "" }, 2, { "sign_optional", "unsigned_value" }}\
}}},\
{LA_IS, { T_ADD_0, T_SUB_0 }, { "sign_optional", {\
    {LA_IS, { "" }, 1, { "sign" }}\
}}},\
{LA_NOT, { T_ADD_0, T_SUB_0 }, { "sign_optional",{\
    {LA_IS, { "" }, 0, { "" }}\
}}},\
{LA_IS, { "ident_terminal" }, { "ident", {\
    {LA_IS, {""}, 1, {"ident_terminal"} }\
}}},\
{LA_IS, { T_ADD_0 }, { "sign", {\
    {LA_IS, {""}, 1, {T_ADD_0}}\
}}},\
{LA_IS, { T_SUB_0 }, { "sign", {\
    {LA_IS, {""}, 1, {T_SUB_0} }\
}}},\
\
\
\
{ LA_IS, { T_NAME_0 }, { "program____part1",{\
    { LA_IS, {""}, 7, { T_NAME_0, "program_name", T_SEMICOLON_0, T_BODY_0, T_DATA_0, "declaration_optional", T_SEMICOLON_0 }}\
}}},\
\
},\
103,\
"program_rule"
// TODO:
//{ LA_IS, { T_NAME_0 }, { "program____part1",{
//    { LA_IS, {""}, 7, { T_NAME_0, "program_name", T_SEMICOLON_0, T_BODY_0, T_DATA_0, "declaration_optional", T_SEMICOLON_0 }} // !!!
//} }},


#ifndef TOKEN_STRUCT_NAME_
#define TOKEN_STRUCT_NAME_
DECLENUM(TokenStructName,
	MULTI_TOKEN_BITWISE_NOT,
	MULTI_TOKEN_BITWISE_AND,
	MULTI_TOKEN_BITWISE_OR,
	MULTI_TOKEN_NOT,
	MULTI_TOKEN_AND,
	MULTI_TOKEN_OR,

	MULTI_TOKEN_EQUAL,
	MULTI_TOKEN_NOT_EQUAL,
	MULTI_TOKEN_LESS,
	MULTI_TOKEN_GREATER,
	MULTI_TOKEN_LESS_OR_EQUAL,
	MULTI_TOKEN_GREATER_OR_EQUAL,

	MULTI_TOKEN_ADD,
	MULTI_TOKEN_SUB,
	MULTI_TOKEN_MUL,
	MULTI_TOKEN_DIV,
	MULTI_TOKEN_MOD,

	MULTI_TOKEN_COLON,
	MULTI_TOKEN_GOTO,

	MULTI_TOKEN_IF,
    MULTI_TOKEN_ELSE_IF,
	MULTI_TOKEN_THEN_BLOCK,
	MULTI_TOKEN_ELSE_BLOCK,

	MULTI_TOKEN_FOR,
	MULTI_TOKEN_TO,
	MULTI_TOKEN_DOWNTO,
	MULTI_TOKEN_DO,

	//
	MULTI_TOKEN_WHILE,
	/*while special statement*/MULTI_TOKEN_CONTINUE_WHILE,
	/*while special statement*/MULTI_TOKEN_EXIT_WHILE,
	//

	//
	MULTI_TOKEN_REPEAT,
	MULTI_TOKEN_UNTIL,
	//

	//
	MULTI_TOKEN_INPUT,
	MULTI_TOKEN_OUTPUT,
	//

    //
    MULTI_TOKEN_BEGIN_GROUPEXPRESSION,
    MULTI_TOKEN_END_GROUPEXPRESSION,
    //

    //
    MULTI_TOKEN_LEFT_SQUAREBRACKETS,
    MULTI_TOKEN_RIGHT_SQUAREBRACKETS,
    //

	//
	MULTI_TOKEN_RLBIND,
	MULTI_TOKEN_LRBIND,
	//

    //
	MULTI_TOKEN_BEGIN,
	MULTI_TOKEN_END,
    //

    //
    MULTI_TOKEN_BEGIN_BLOCK,
    MULTI_TOKEN_END_BLOCK,
	//

    MULTI_TOKEN_SEMICOLON,

	MULTI_TOKEN_NULL_STATEMENT
);

#define INIT_TOKEN_STRUCT_NAME() static void intitTokenStruct(){\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, BEGIN_BLOCK)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, END_BLOCK)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, BITWISE_NOT)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, BITWISE_AND)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, BITWISE_OR)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, NOT)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, AND)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, OR)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, EQUAL)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, NOT_EQUAL)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, LESS)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, GREATER)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, LESS_OR_EQUAL)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, GREATER_OR_EQUAL)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, ADD)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, SUB)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, MUL)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, DIV)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, MOD)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, COLON)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, GOTO)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, IF)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, ELSE_IF)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, THEN_BLOCK)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, ELSE_BLOCK)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, FOR)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, TO)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, DOWNTO)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, DO)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, WHILE)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, CONTINUE_WHILE)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, EXIT_WHILE)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, REPEAT)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, UNTIL)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, INPUT)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, OUTPUT)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, BEGIN_GROUPEXPRESSION)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, END_GROUPEXPRESSION)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, LEFT_SQUAREBRACKETS)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, RIGHT_SQUAREBRACKETS)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, RLBIND)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, LRBIND)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, BEGIN)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, END)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, BEGIN_BLOCK)\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, END_BLOCK)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, SEMICOLON)\
\
SET_QUADRUPLE_STR_MACRO_IN_ARRAY(tokenStruct, NULL_STATEMENT)\
} char intitTokenStruct_ = (intitTokenStruct(), 0);
#define MAX_TOKEN_STRUCT_ELEMENT_COUNT GET_ENUM_SIZE(TokenStructName)
#define MAX_TOKEN_STRUCT_ELEMENT_PART_COUNT 4
#endif

extern char* tokenStruct[MAX_TOKEN_STRUCT_ELEMENT_COUNT][MAX_TOKEN_STRUCT_ELEMENT_PART_COUNT];


///////////////////////////////////////////////////////////////

#define GRAMMAR_LL2_ORIGINAL__2025 {\
{ LA_IS, {"ident_terminal"}, { "labeled_point",{\
    { LA_IS, {""}, 2, {"ident", ":"}}\
}}},\
{ LA_IS, {"GOTO"}, { "goto_label",{\
    { LA_IS, {""}, 2, {"GOTO", "ident"}}\
}}},\
{ LA_IS, {"ident_terminal"}, { "program_name",{\
    { LA_IS, {""}, 1, {"ident"}}\
}}},\
{ LA_IS, {"INTEGER16"}, { "value_type",{\
    { LA_IS, {""}, 1, {"INTEGER16"}}\
}}},\
{ LA_IS, {"["}, { "array_specify",{\
    { LA_IS, {""}, 3, {"[", "unsigned_value", "]"}}\
}}},\
{ LA_IS, {"ident_terminal"}, { "declaration_element",{\
    { LA_IS, {""}, 2, {"ident", "array_specify_optional"}}\
}}},\
{ LA_IS, {"["}, { "array_specify_optional",{\
    { LA_IS, {""}, 1, {"array_specify"}}\
}}},\
{ LA_NOT, {"["}, { "array_specify_optional",{\
    { LA_IS, {""}, 0, {""}}\
}}},\
{ LA_IS, {","}, { "other_declaration_ident",{\
    { LA_IS, {""}, 2, {",", "declaration_element"}}\
}}},\
{ LA_IS, {"INTEGER16"}, { "declaration",{\
    { LA_IS, {""}, 3, {"value_type", "declaration_element", "other_declaration_ident__iteration"}}\
}}},\
{ LA_IS, { "," }, { "other_declaration_ident__iteration",{\
    { LA_IS, {""}, 2, { "other_declaration_ident", "other_declaration_ident__iteration" }}\
}}},\
{ LA_NOT, { "," }, { "other_declaration_ident__iteration",{\
    { LA_IS, {""}, 0, { "" }}\
}}},\
{ LA_IS, { "[" }, { "index_action",{\
    { LA_IS, {""}, 3, { "[", "expression", "]" }}\
}}},\
{ LA_IS, { "NOT" }, { "unary_operator",{\
    { LA_IS, {""}, 1, { "NOT" }}\
}}},\
{ LA_IS, { "NOT" }, { "unary_operation",{\
    { LA_IS, {""}, 2, { "unary_operator", "expression" }}\
}}},\
{ LA_IS, { "AND" }, { "binary_operator",{\
    { LA_IS, {""}, 1, { "AND" }}\
}}},\
{ LA_IS, { "OR" }, { "binary_operator",{\
    { LA_IS, {""}, 1, { "OR" }}\
}}},\
{ LA_IS, { "==" }, { "binary_operator",{\
    { LA_IS, {""}, 1, { "==" }}\
}}},\
{ LA_IS, { "!=" }, { "binary_operator",{\
    { LA_IS, {""}, 1, { "!=" }}\
}}},\
{ LA_IS, { "<=" }, { "binary_operator",{\
    { LA_IS, {""}, 1, { "<=" }}\
}}},\
{ LA_IS, { ">=" }, { "binary_operator",{\
    { LA_IS, {""}, 1, { ">=" }}\
}}},\
{ LA_IS, { "+" }, { "binary_operator",{\
    { LA_IS, {""}, 1, { "+" }}\
}}},\
{ LA_IS, { "-" }, { "binary_operator",{\
    { LA_IS, {""}, 1, { "-" }}\
}}},\
{ LA_IS, { "*" }, { "binary_operator",{\
    { LA_IS, {""}, 1, { "*" }}\
}}},\
{ LA_IS, { "DIV" }, { "binary_operator",{\
    { LA_IS, {""}, 1, { "DIV" }}\
}}},\
{ LA_IS, { "MOD" }, { "binary_operator",{\
    { LA_IS, {""}, 1, { "MOD" }}\
}}},\
{ LA_IS, { "AND", "OR", "==", "!=", "<=", ">=", "+", "-", "*", "DIV", "MOD" }, { "binary_action",{\
    { LA_IS, {""}, 2, { "binary_operator", "expression" }}\
}}},\
{LA_IS, { "(" }, { "left_expression",{\
    {LA_IS, { "" }, 1, { "group_expression" }}\
}}},\
{LA_IS, { "NOT" }, { "left_expression",{\
    {LA_IS, { "" }, 1, { "unary_operation" }}\
}}},\
{LA_IS, { "+", "-" }, { "left_expression",{\
    {LA_IS,  { "unsigned_value_terminal"}, 1, { "value" }},\
    {LA_NOT, { "unsigned_value_terminal" }, 1, { "unary_operation" }}\
}}},\
{LA_IS, { "ident_terminal" }, { "left_expression",{\
    {LA_IS, {""}, 2, { "ident", "index_action_optional" }}\
}}},\
{LA_IS, { "unsigned_value_terminal" }, { "left_expression",{\
    {LA_IS, {""}, 1, { "value" }}\
}}},\
{LA_IS, { "[" }, { "index_action_optional",{\
    {LA_IS, {""}, 1, { "index_action" }}\
}}},\
{LA_NOT, { "[" }, { "index_action_optional",{\
    {LA_IS, {""}, 0, { "" }}\
}}},\
{LA_IS, { "(", "NOT", "+", "-", "ident_terminal", "unsigned_value_terminal" }, { "expression",{\
    {LA_IS, {""}, 2, { "left_expression", "binary_action__iteration" }}\
}}},\
{LA_IS, { "AND", "OR", "==", "!=", "<=", ">=", "+", "-", "*", "DIV", "MOD" }, { "binary_action__iteration",{\
    {LA_IS, {""}, 2, { "binary_action", "binary_action__iteration" }}\
}}},\
{LA_NOT, { "AND", "OR", "==", "!=", "<=", ">=", "+", "-", "*", "DIV", "MOD" }, { "binary_action__iteration",{\
    {LA_IS, {""}, 0, { "" }}\
}}},\
{LA_IS, { "(" }, { "group_expression",{\
    {LA_IS, {""}, 3, { "(", "expression", ")" }}\
}}},\
IF_NONUSE_REVERSE_ASSIGNMENT(\
{LA_IS, { "ident_terminal" }, { "bind_right_to_left",{\
    {LA_IS, {""}, 4, { "ident", "index_action_optional", ":=", "expression" }}\
}}},\
)\
IF_USE_REVERSE_ASSIGNMENT(\
{LA_IS, { "(", "NOT", "+", "-", "ident_terminal", "unsigned_value_terminal" }, { "bind_left_to_right",{\
    {LA_IS, {""}, 4, { "expression", "=:", "ident", "index_action_optional" }}\
}}},\
)\
{LA_IS, { "(", "NOT", "+", "-", "ident_terminal", "unsigned_value_terminal" }, { "if_expression",{\
    {LA_IS, {""}, 1, { "expression" }}\
}}},\
{LA_IS, { "{" }, { "body_for_true",{\
    {LA_IS, {""}, 1, { "block_statements_in_while_and_if_body" }}\
}}},\
{LA_IS, { "ELSE" }, { "false_cond_block_without_else",{\
    {LA_IS, {""}, 4, { "ELSE", "IF", "if_expression", "body_for_true" }}\
}}},\
{LA_IS, { "ELSE" }, { "body_for_false",{\
    {LA_IS, {""}, 2, { "ELSE", "block_statements_in_while_and_if_body" }}\
}}},\
{LA_IS, { "IF" }, { "cond_block",{\
    {LA_IS, {""}, 5, { "IF", "if_expression", "body_for_true", "false_cond_block_without_else__iteration", "body_for_false_optional" }}\
}}},\
{LA_IS, { "ELSE" }, { "false_cond_block_without_else__iteration",{\
    {LA_IS, {"IF"}, 2, { "false_cond_block_without_else", "false_cond_block_without_else__iteration" }},\
    {LA_NOT, { "IF" }, 0, { "" }}\
}}},\
{LA_NOT, { "ELSE" }, { "false_cond_block_without_else__iteration",{\
    {LA_IS, {""}, 0, { "" }}\
}}},\
{LA_IS, { "ELSE" }, { "body_for_false_optional",{\
    {LA_IS, {""}, 1, { "body_for_false" }}\
}}},\
{LA_NOT, { "ELSE" }, { "body_for_false_optional",{\
    {LA_IS, {""}, 0, { "" }}\
}}},\
{LA_IS, { "(", "NOT", "+", "-", "ident_terminal", "unsigned_value_terminal" }, { "cycle_begin_expression",{\
    {LA_IS, {""}, 1, { "expression" }}\
}}},\
{LA_IS, { "(", "NOT", "+", "-", "ident_terminal", "unsigned_value_terminal" }, { "cycle_end_expression",{\
    {LA_IS, {""}, 1, { "expression" }}\
}}},\
{LA_IS, { "ident_terminal" }, { "cycle_counter",{\
    {LA_IS, {""}, 1, { "ident" }}\
}}},\
IF_NONUSE_REVERSE_ASSIGNMENT(\
{LA_IS, { "ident_terminal" }, { "cycle_counter_rl_init",{\
    {LA_IS, {""}, 3, { "cycle_counter", ":=", "cycle_begin_expression" }}\
}}},\
)\
IF_USE_REVERSE_ASSIGNMENT(\
{LA_IS, { "(", "NOT", "+", "-", "ident_terminal", "unsigned_value_terminal" }, { "cycle_counter_lr_init",{\
    {LA_IS, {""}, 3, { "cycle_begin_expression", "=:", "cycle_counter" }}\
}}},\
)\
{LA_IS, { "ident_terminal" }, { "cycle_counter_init",{\
    IF_NONUSE_REVERSE_ASSIGNMENT({LA_IS, {":="}, 1, { "cycle_counter_rl_init" }})\
    IF_USE_REVERSE_ASSIGNMENT({LA_NOT, { ":=" }, 1, { "cycle_counter_lr_init" }})\
}}},\
IF_USE_REVERSE_ASSIGNMENT(\
{LA_IS, { "(", "NOT", "+", "-", "unsigned_value_terminal" }, { "cycle_counter_init",{\
    {LA_IS, {""}, 1, { "cycle_counter_lr_init" }}\
}}},\
)\
{LA_IS, { "(", "NOT", "+", "-", "ident_terminal", "unsigned_value_terminal" }, { "cycle_counter_last_value",{\
    {LA_IS, {""}, 1, { "cycle_end_expression" }}\
}}},\
{LA_IS, { "DO" }, { "cycle_body",{\
    {LA_IS, {""}, 2, { "DO", "statements__or__block_statements" }}\
}}},\
{LA_IS, { "FOR" }, { "forto_cycle",{\
    {LA_IS, {""}, 5, { "FOR", "cycle_counter_init", "TO", "cycle_counter_last_value", "cycle_body" }}\
}}},\
{LA_IS, { "ident_terminal", "(", "NOT", "unsigned_value_terminal", "+", "-", "IF", "FOR", "WHILE", "REPEAT", "GOTO", "GET", "PUT", ";" }, { "statement_in_while_and_if_body",{\
    {LA_IS, {""}, 1, { "statement" }}\
}}},\
{LA_IS, { "CONTINUE" }, { "statement_in_while_and_if_body",{\
    {LA_IS, {""}, 1, { "CONTINUE" }}\
}}},\
{LA_IS, { "BREAK" }, { "statement_in_while_and_if_body",{\
    {LA_IS, {""}, 1, { "BREAK" }}\
}}},\
{LA_IS, { "{" }, { "block_statements_in_while_and_if_body",{\
    {LA_IS, {""}, 3, { "{", "statement_in_while_and_if_body__iteration", "}" }}\
}}},\
{LA_IS, { "ident_terminal", "(", "NOT", "unsigned_value_terminal", "+", "-", "IF", "FOR", "WHILE", "REPEAT", "GOTO", "GET", "PUT", ";", "CONTINUE", "BREAK" }, { "statement_in_while_and_if_body__iteration",{\
    {LA_IS, {""}, 2, { "statement_in_while_and_if_body", "statement_in_while_and_if_body__iteration" }}\
}}},\
{LA_NOT, { "ident_terminal", "(", "NOT", "unsigned_value_terminal", "+", "-", "IF", "FOR", "WHILE", "REPEAT", "GOTO", "GET", "PUT", ";", "CONTINUE", "BREAK" }, { "statement_in_while_and_if_body__iteration",{\
    {LA_IS, {""}, 0, { "" }}\
}}},\
{LA_IS, { "(", "NOT", "+", "-", "ident_terminal", "unsigned_value_terminal" }, { "while_cycle_head_expression",{\
    {LA_IS, {""}, 1, { "expression" }}\
}}},\
{LA_IS, { "WHILE" }, { "while_cycle",{\
    {LA_IS, {""}, 3, { "WHILE", "while_cycle_head_expression", "block_statements_in_while_and_if_body" }}\
}}},\
{LA_IS, { "(", "NOT", "+", "-", "ident_terminal", "unsigned_value_terminal" }, { "repeat_until_cycle_cond",{\
    {LA_IS, {""}, 1, { "expression" }}\
}}},\
{LA_IS, { "REPEAT" }, { "repeat_until_cycle",{\
    {LA_IS, {""}, 4, { "REPEAT", "statements__or__block_statements", "UNTIL", "repeat_until_cycle_cond" }}\
}}},\
{LA_IS, { "ident_terminal", "(", "NOT", "unsigned_value_terminal", "+", "-", "IF", "FOR", "WHILE", "REPEAT", "GOTO", "GET", "PUT", ";" }, { "statements__or__block_statements",{\
    {LA_IS, {""}, 1, { "statement__iteration" }}\
}}},\
{LA_IS, { "{" }, { "statements__or__block_statements",{\
    {LA_IS, {""}, 1, { "block_statements" }}\
}}},\
{LA_IS, { "GET" }, { "input_rule",{\
    {LA_IS, {""}, 2, { "GET", "argument_for_input" }}\
}}},\
{LA_IS, { "ident_terminal" }, { "argument_for_input",{\
    {LA_IS, {""}, 2, { "ident", "index_action_optional" }}\
}}},\
{LA_IS, { "(" }, { "argument_for_input",{\
    {LA_IS, {""}, 4, { "(", "ident", "index_action_optional", ")" }}\
}}},\
{LA_IS, { "PUT" }, { "output_rule", {\
    {LA_IS, { "" }, 2, {"PUT", "expression"} }\
}}},\
{LA_IS, { "ident_terminal" }, { "statement", {\
    IF_NONUSE_REVERSE_ASSIGNMENT({ LA_IS, { ":=", "[" }, 1, {"bind_right_to_left"}},)\
    { LA_IS, { ":" }, 1, {"labeled_point"}},\
    IF_USE_REVERSE_ASSIGNMENT({ LA_NOT, { ":" }, 1, {"bind_left_to_right"}})\
} }}, \
IF_USE_REVERSE_ASSIGNMENT(\
{LA_IS, { "(", "NOT", "unsigned_value_terminal", "+", "-" }, { "statement", {\
    { LA_IS, {""}, 1, {"bind_left_to_right"}}\
} }}, \
)\
{LA_IS, { "IF" }, { "statement",{\
    {LA_IS, {""}, 1, {"cond_block"}}\
}}},\
{LA_IS, { "FOR" }, { "statement",{\
    {LA_IS, {""}, 1, {"forto_cycle"}}\
}}},\
{LA_IS, { "WHILE" }, { "statement",{\
    {LA_IS, {""}, 1, {"while_cycle"}}\
}}},\
{LA_IS, { "REPEAT" }, { "statement",{\
    {LA_IS, {""}, 1, {"repeat_until_cycle"}}\
}}},\
{LA_IS, { "GOTO" }, { "statement",{\
    {LA_IS, {""}, 1, {"goto_label"}}\
}}},\
{LA_IS, { "GET" }, { "statement",{\
    {LA_IS, {""}, 1, {"input_rule"}}\
}}},\
{LA_IS, { "PUT" }, { "statement",{\
    {LA_IS, {""}, 1, {"output_rule"}}\
}}},\
{LA_IS, { ";" }, { "statement",{\
    {LA_IS, {""}, 1, {";"}}\
}}},\
{ LA_IS, { "{" }, { "block_statements",{\
    { LA_IS, {""}, 3, { "{", "statement__iteration", "}" }}\
}}},\
{ LA_IS, { "ident_terminal", "(", "NOT", "unsigned_value_terminal", "+", "-", "IF", "FOR", "WHILE", "REPEAT", "GOTO", "GET", "PUT", ";" }, { "statement__iteration",{\
    { LA_IS, {""}, 2, { "statement", "statement__iteration" }}\
}}},\
{ LA_NOT, { "ident_terminal", "(", "NOT", "unsigned_value_terminal", "+", "-", "IF", "FOR", "WHILE", "REPEAT", "GOTO", "GET", "PUT", ";" }, { "statement__iteration",{\
    { LA_IS, {""}, 0, { "" }}\
}}},\
{ LA_IS, { "NAME" }, { "program_rule",{\
    { LA_IS, {""}, 9, { "NAME", "program_name", ";", "BODY", "DATA", "declaration_optional", ";", "statement__iteration", "END" }}\
}}},\
{ LA_IS, { "INTEGER16" }, { "declaration_optional",{\
    { LA_IS, {""}, 1, { "declaration" }}\
}}},\
{ LA_NOT, { "INTEGER16" }, { "declaration_optional",{\
    { LA_IS, {""}, 0, { "" }}\
}}},\
{LA_IS, { "unsigned_value_terminal" }, { "unsigned_value", {\
    {LA_IS, { "" }, 1, { "unsigned_value_terminal" }}\
}}},\
{LA_IS, { "unsigned_value_terminal", "+", "-" }, { "value", {\
    {LA_IS, { "" }, 2, { "sign_optional", "unsigned_value" }}\
}}},\
{LA_IS, { "+", "-" }, { "sign_optional", {\
    {LA_IS, { "" }, 1, { "sign" }}\
}}},\
{LA_NOT, { "+", "-" }, { "sign_optional",{\
    {LA_IS, { "" }, 0, { "" }}\
}}},\
{LA_IS, { "ident_terminal" }, { "ident", {\
    {LA_IS, {""}, 1, {"ident_terminal"} }\
}}},\
{LA_IS, { "+" }, { "sign", {\
    {LA_IS, {""}, 1, {"+"}}\
}}},\
{LA_IS, { "-" }, { "sign", {\
    {LA_IS, {""}, 1, {"-"} }\
}}},\
\
\
\
{ LA_IS, { "NAME" }, { "program____part1",{\
    { LA_IS, {""}, 7, { "NAME", "program_name", ";", "BODY", "DATA", "declaration_optional", ";" }}\
}}},\
\
},\
101,\
"program_rule"
// TODO:
//{ LA_IS, { "NAME" }, { "program____part1",{
//    { LA_IS, {""}, 7, { "NAME", "program_name", ";", "BODY", "DATA", "declaration_optional", ";" }} // !!!
//} }},
///////////////////////////////////////////////////////////////

#define RERUN_MODE_FOR_INTERACTIVE_MODE

//#define DEFAULT_MODE (DEBUG_MODE | LEXICAL_ANALISIS_MODE)
#define DEFAULT_MODE (DEBUG_MODE | LEXICAL_ANALYZE_MODE | SYNTAX_ANALYZE_MODE | SEMANTIX_ANALYZE_MODE | MAKE_ASSEMBLY | MAKE_BINARY)
