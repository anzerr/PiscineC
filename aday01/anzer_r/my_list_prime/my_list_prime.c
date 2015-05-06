/*
** my_is_prime.c for my_is_prime in /home/anzer_r/project/aday01/anzer_r/my_is_prime
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr 15 11:47:12 2015 ANZER ryan
** Last update Wed Apr 15 14:33:33 2015 ANZER ryan
*/

void my_put_nbr(int n);
void my_putchar(char c);

void my_list_prime(int n, int k)
{
  if (n % k == 0)
    {
      my_put_nbr(n / k);
      my_putchar('\n');
    }
  if (k > 1)
    my_list_prime(n, k - 1);
}
