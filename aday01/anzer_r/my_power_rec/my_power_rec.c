/*
** my_power_rec.c for my_power_rec in /home/anzer_r/project/aday01/anzer_r/my_power_rec
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr 15 09:50:10 2015 ANZER ryan
** Last update Wed Apr 15 10:11:02 2015 ANZER ryan
*/

int my_power_rec(int nb, int power)
{
  if (power < 0)
    return (0);
  return ((power <= 1) ? nb : my_power_rec(nb, power - 1) * nb);
}
