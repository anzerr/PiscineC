/*
** my_power_rec.c for my_power_rec in /home/anzer_r/project/aday01/anzer_r/my_power_rec
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr 15 09:50:10 2015 ANZER ryan
** Last update Wed Apr 15 10:14:12 2015 ANZER ryan
*/

int my_fact_rec(int nb)
{
  if (nb < 0)
    return (0);
  return ((nb <= 1) ? 1 : my_fact_rec(nb - 1) * nb);
}
