/*
** main.c for main for doop in /home/anzer_r/project/day08/anzer_r/do-op
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr  8 14:13:07 2015 ANZER ryan
** Last update Wed Apr  8 14:51:19 2015 ANZER ryan
*/
#include "doop.h"

void my_doop(int a, char *op, int b)
{
  int n = 0;
  if (op[0] == '*' || op[0] == '+' || op[0] == '/' || op[0] == '-')
    {
      if (op[0] == '/')
        {
          if (b == 0)
            my_putstr("Va t'acheter des doigts");
          else
            my_put_nbr(a / b);
          my_putchar('\n');
        }
      else
        {
          my_put_nbr((op[0] == '*') ? a * b : ((op[0] == '+') ? a + b : a - b));
          my_putchar('\n');
        }
    }
  else
    my_putstr("Syntax Error\n");
}

int main(int argc, char **argv)
{
  if (argc >= 4)
    my_doop(my_getnbr(argv[1]), argv[2], my_getnbr(argv[3]));
  return (0);
}
