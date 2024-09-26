#include<stdio.h>
#include<limits.h>

int main() {
	
	printf("Limite minimo char: %d\n", CHAR_MIN);
	printf("Limite maximo char: %d\n", CHAR_MAX);

	printf("Limite minimo int: %d\n", INT_MIN);
	printf("Limite maximo int: %d\n", INT_MAX);

	printf("Limite minimo short int: %d\n", SHRT_MIN);
	printf("Limite maximo short int: %d\n", SHRT_MAX);

	printf("Limite maximo unsigned int: %u\n", UINT_MAX);

	printf("Limite minimo long int: %ld\n", LONG_MIN);
	printf("Limite minimo long int: %ld\n", LONG_MAX);

	printf("Limite maximo unsigned long int: %lu\n", ULONG_MAX);

	printf("Limite minimo long long int: %lld\n", LLONG_MIN);
	printf("Limite maximo long long int: %lld\n", LLONG_MAX);

	printf("Limite maximo unsigned long long int: %llu\n", ULLONG_MAX);
	
	printf("\n");
	
	printf("Quando voce utiliza um valor fora dos limites dos tipos de variaveis, ocorre o chamado overflow\n");
	printf("Exemplo: %d", INT_MAX + 1);
	
