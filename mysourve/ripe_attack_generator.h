#ifndef RIPE_ATTACK_GENERATOR_H
#define RIPE_ATTACK_GENERATOR_H

typedef int boolean;
enum boolean
{
	FALSE = 0;
	TRUE;
};

typedef struct attack_form ATTACK_FORM;
struct attack_form
{
	enum techniques technique;
	enum inject_params inject_param;
	enum code_ptrs code_ptr;
	enum locations location;
	enum functions function;
};

void perform_attack(FILE *output_stream, int (*stack_func_ptr_param)(const char *), jmp_buf stack_jmp_buffer_param);
boolean bulid_payload(CHARPAYLOAD *payload);

void set_technique(char *choice);
void set_location(char *choice);
void set_code_ptr(char *choice);
void set_function(char *choice);
void set_inject_param(char *choice);
