/*
** my_is_prime.c for my_is_prime in /home/anzer_r/project/aday01/anzer_r/my_is_prime
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr 15 11:47:12 2015 ANZER ryan
** Last update Wed Apr 15 12:09:59 2015 ANZER ryan
*/

int my_is_prime(int n, int k)
{
  if (n % 2 == 0 || n % 3 == 0 || n <= 3)
    return ((n <= 3) ? (n > 1) : 0);
  if (k * k <= n)
    return ((n % k == 0 || n % (k + 2) == 0) ? 0 : my_is_prime(n, k + 6));
  return (1);
}
