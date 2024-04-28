#ifndef OPCODES_H_
#define OPCODES_H_
#define OPCODES_MAX 256

void op_mov(int *a, int b);
void op_add(int *a, int b);
void op_inc(int *a);
void op_sub(int *a, int b);
void op_dec(int *a);

typedef struct {
  char* name;
  void (*function_ptr)();
  unsigned char argument_count;
} opcode;

extern opcode opcode_table[OPCODES_MAX];

#endif