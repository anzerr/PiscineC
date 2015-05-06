/*
** palindrome_rec.c for palindrome_rec in /home/anzer_r/project/aday01/anzer_r/palindrome_rec
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr 15 10:41:34 2015 ANZER ryan
** Last update Wed Apr 15 11:11:35 2015 ANZER ryan
*/

int palindrome_rec(char *str, int debut, int fin)
{
  if (str[debut] == 32)
    return (palindrome_rec(str, debut + 1, fin));
  if (str[fin] == 32)
   return (palindrome_rec(str, debut, fin - 1));
  if (debut < fin)
    if (str[debut] != str[fin])
      return (0);
    else
      return (palindrome_rec(str, debut + 1, fin - 1));
  else
    return (str[debut] == str[fin]);
}
