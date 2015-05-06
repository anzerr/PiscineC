/*
** my_fibo_rec.c for my_fibro in /home/anzer_r/project/aday01/anzer_r/my_fibo_rec
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr 15 10:18:29 2015 ANZER ryan
** Last update Wed Apr 15 10:25:52 2015 ANZER ryan
*/

int my_fibo_rec(int nb)
{
  if (nb < 0)
    return (0);
  return ((nb <= 1) ? nb : my_fibo_rec(nb - 1) + my_fibo_rec(nb - 2));
}
