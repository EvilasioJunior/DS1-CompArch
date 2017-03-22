#include <stdio.h>

//Aluno - Sidney Xavier Botão

//every algorithm receives two pointers, the first pointer is the beginning
//of the array and the second pointer is its ending
//for example the function sum1(int *first, int *end)
//for using an array of integers "arr", sum1(arr, arr + n), n is its size

int sum1(int *first, int *end)
{                             //worst case                  best case
	int sum = 0;                //<- 1                        <- 1
	while(first != end)         //<- n + 1                    <- 2
		sum += *first++;          //<- 3n                       <- 3
	return sum;                 //<- 1  T(n) = 4n + 3         <- 1  T(1) = 6
}

int sum2(int *first, int *end)
{                             //worst case                  best case
	int sum = 0;                //<- 1                        <- 1
  int k = (end - first) / 2;  //<- 3                        <- 3
  while(k--)                  //<- (n / 2) + 1              <- 1
  {
      end--;                  //<- n / 2
      sum += (*first + *end); //<- 3n / 2
      first++;                //<- n / 2
  }
  if(first != end)            //<- 1                        <- 1
    sum += *first;            //<- 2                        <- 2
  return sum;                 //<- 1  T(n) = 3n + 9         <- 1  T(1) = 9
}

int first_odd(int *first, int *end)
{                            //worst case                   best case
	while(first != end)        //<- n + 1                     <- 1
	{
  	if(*first & 1)           //<- n                         <- 1
			return *first;         //                             <- 1
    first++;                 //<- n
  }
  return -1;                 //<- 1 T(n) = 3n + 2           T(1) = 3
}

int rec_sum(int *first, int *end)
{                                            //worst case         best case
    end--;                                   //<- n + 1           <- 1
    if (first == end)                        //<- n + 1           <- 2
        return *end;                         //<- 1               <- 1
    return (*end + rec_sum(first, end));     //<- 2n              <- 2
}                                            //T(n) = 3n + 2      T(1) = 5

int rec_odd(int *first, int *end)
{                                            //wrost case         best case
  if(*first & 1)                             //<- n + 1           <- 1
    return *first;                           //                   <- 1
  else if(first + 1 != end)                  //<- 2n + 1
    return rec_odd((first + 1), end);        //<- 2n
  return -1;                                 //<- 1
}                                            //T(n) = 5n + 3      T(1) = 2

//Inicio                                     worst case           best case
//       Se n módulo x = 0 então             <- 2                 <- 2
//            retorna Verdadeiro;            <- 1                 <- 1
//       Senão
//            retorna Falso;
//       Fim Se
//Fim                                        T(1) = 3             T(1) = 3

//Inicio                                     worst case           best case
//       para j de 1 até n faça               <- n + 1             <- 1
//             Se V[j] módulo 2 = 0;          <- 2n                <- 2
//                  retorna Verdadeiro;                            <- 1
//             Fim se
//       Fim para
//       retorna Falso;                      <- 1
//Fim                                        T(n) = 3n + 2        T(1) = 4

//Inicio                                    worst case            best case
//       m ← 1;                             <- 1                  <- 1
//       i ← 2;                             <- 1                  <- 1
//       enquanto i ≤ n faça                <- n                  <- 1
//            se S[m] > S[i] então          <- n - 1
//                 m  ← i;                  <- n - 1
//            i++                           <- n - 1
//       retorna m;                         <- 1                  <- 1
//Fim                                       << T(n) = 4n          T(n) = 4

int main()
{
	int v[] = {2, 2, 2, 2, 2, 5};
  printf("%d\n", sum1(v, v + 6));
  printf("%d\n", sum2(v, v + 6));
  printf("%d\n", first_odd(v, v + 6));
  printf("%d\n", rec_sum(v, v + 6));
  printf("%d\n", rec_odd(v, v + 6));

	return 0;
}
