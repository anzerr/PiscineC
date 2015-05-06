/*
** findstr_rec.c for findstr_rec in /home/anzer_r/project/aday01/anzer_r/findstr_rec
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr 15 11:14:35 2015 ANZER ryan
** Last update Wed Apr 15 11:35:21 2015 ANZER ryan
*/

int findstr_rec(char *str, char *to_find)
{
  int i;
  i = 0;
  while (str[i] != '\0' && to_find[i] != '\0' && str[i] == to_find[i])
    i = i + 1;
  if (str[i] == '\0' && to_find[i] != '\0')
    return (0);
  return ((to_find[i] == '\0') ? 1 : findstr_rec(str + 1, to_find));
}
