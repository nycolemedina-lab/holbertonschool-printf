#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point to test custom _printf vs standard printf
 *
 * Return: Always 0
 */
int main(void)
{
	int len1, len2;

	printf("=========================================\n");
	printf("        _PRINTF COMPREHENSIVE TEST       \n");
	printf("=========================================\n\n");

	/* ------------------------------------------------ */
	/* 1. Basic Characters & Strings                   */
	/* ------------------------------------------------ */
	printf("--- 1. CHARACTERS & STRINGS ---\n");
	len1 = _printf("Custom  : Character:[%c] String:[%s] Percent:[%%]\n", 'H', "Hello, ALX!");
	len2 =  printf("Standard: Character:[%c] String:[%s] Percent:[%%]\n", 'H', "Hello, ALX!");
	printf("Return Count -> _printf: %d | printf: %d\n\n", len1, len2);

	/* ------------------------------------------------ */
	/* 2. Edge Case: NULL Strings                      */
	/* ------------------------------------------------ */
	printf("--- 2. NULL STRING HANDLING ---\n");
	len1 = _printf("Custom  : NULL string:[%s]\n", (char *)NULL);
	len2 =  printf("Standard: NULL string:[%s]\n", (char *)NULL);
	printf("Return Count -> _printf: %d | printf: %d\n\n", len1, len2);

	/* ------------------------------------------------ */
	/* 3. Integers (%d and %i)                          */
	/* ------------------------------------------------ */
	printf("--- 3. INTEGERS (%%d and %%i) ---\n");
	len1 = _printf("Custom  : Positive:[%d] Negative:[%i] Zero:[%d]\n", 1024, -4096, 0);
	len2 =  printf("Standard: Positive:[%d] Negative:[%i] Zero:[%d]\n", 1024, -4096, 0);
	printf("Return Count -> _printf: %d | printf: %d\n\n", len1, len2);

	/* ------------------------------------------------ */
	/* 4. Integer Edge Cases (INT_MAX & INT_MIN)       */
	/* ------------------------------------------------ */
	printf("--- 4. INT_MAX & INT_MIN EDGE CASES ---\n");
	len1 = _printf("Custom  : INT_MAX:[%d] INT_MIN:[%i]\n", INT_MAX, INT_MIN);
	len2 =  printf("Standard: INT_MAX:[%d] INT_MIN:[%i]\n", INT_MAX, INT_MIN);
	printf("Return Count -> _printf: %d | printf: %d\n\n", len1, len2);

	/* ------------------------------------------------ */
	/* 5. Unknown Specifier Handling                   */
	/* ------------------------------------------------ */
	printf("--- 5. UNKNOWN SPECIFIER (%%k) ---\n");
	len1 = _printf("Custom  : [%k]\n");
	len2 =  printf("Standard: [%k]\n");
	printf("Return Count -> _printf: %d | printf: %d\n\n", len1, len2);

	/* ------------------------------------------------ */
	/* 6. NULL Format String & Trailing %               */
	/* ------------------------------------------------ */
	printf("--- 6. NULL FORMAT & TRAILING %% ---\n");

	len1 = _printf(NULL);
	printf("Custom _printf(NULL) return value: %d (Expected: -1)\n", len1);

	len1 = _printf("%");
	printf("Custom _printf(\"%%\") return value: %d (Expected: -1)\n", len1);

	printf("\n=========================================\n");
	printf("              TESTS COMPLETE             \n");
	printf("=========================================\n");

	return (0);
}
