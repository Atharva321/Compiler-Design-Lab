#include<stdio.h>
void main()
{
  char op;
  printf ("Enter any one operator\n");
  scanf("%c", &op);
  switch(op)
  {
    case '=': 
    printf("Assignment");
    break;
    case '+': 
    printf("Addition or unary plus");
    break;
    case '-': 
    printf("Subtraction or unary minus");
    break;
    case '*':
    printf("Arithmatic Operator-Multiplication");
    break;
    case '/': 
    printf("Arithmatic Operator Division");
    break;
    case '%': 
    printf("Remainder after division (modulo division)");
    break;
    case '+=': 
    printf("Arithmatic Operator-Additon Equalto");
    break;
    case '-=': 
    printf("Arithmatic Operator-Substraction Equalto");
    break;
    case '*=':
    printf("Arithmatic Operator-Multiplication Equalto");
    break;
    case '/=': 
    printf("Arithmatic Operator Division Equalto");
    break;
    case '%=': 
    printf("Arithmatic Operator Modulo Equalto");
    break;
    case '==': 
    printf("Relational Equal to");
    break;
    case '>': 
    printf("Relational Greater than ");
    break;
    case '<': 
    printf("Relational Less than ");
    break;
    case '!=': 
    printf("Relational Not equal to");
    break;
    case '>=': 
    printf("Relational Greater than or Equal to ");
    break;
    case '<=': 
    printf("Relational     Less than or equal to");
    break;
    case '&&': 
    printf("Logical AND");
    break;
    case '||': 
    printf("Logical OR");
    break;
    case '!': 
    printf("Logical NOT");
    break;
    case '&': 
    printf("Bitwise AND");
    break;
    case '|': 
    printf("Bitwise OR");
    break;
    case '^': 
    printf("Bitwise exclusive ORT");
    break;
    case '~': 
    printf("Bitwise complement");
    break;
    case '<<': 
    printf("Shift left");
    break;
    case '>>': 
    printf("Shift right");
    break;
    case '?:': 
    printf("Ternary operator");
    break;
    case '->': 
    printf("Member selection operator");
    break;
    case '--': 
    printf("Decrement operator");
    break;
    case '++': 
    printf("Increment operator");
    break;
    default: printf ("\nInvalid Operator");
  }
}

